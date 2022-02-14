
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int bits8 ;
typedef TYPE_1__* TupleDesc ;
struct TYPE_16__ {scalar_t__ attcacheoff; scalar_t__ attlen; int attalign; } ;
struct TYPE_15__ {TYPE_2__* t_data; } ;
struct TYPE_14__ {int* t_bits; int t_hoff; } ;
struct TYPE_13__ {int natts; } ;
typedef TYPE_2__* HeapTupleHeader ;
typedef TYPE_3__* HeapTuple ;
typedef TYPE_4__* Form_pg_attribute ;
typedef int Datum ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_4__* FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (int,int,char*) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int,int ,int,char*) ;
 scalar_t__ FUNC_8 (int,int*) ;
 int FUNC_9 (TYPE_4__*,char*) ;

Datum
FUNC_10(HeapTuple VAR_0,
      int VAR_1,
      TupleDesc VAR_2)
{
 HeapTupleHeader VAR_3 = VAR_0->t_data;
 char *VAR_4;
 bits8 *VAR_5 = VAR_3->t_bits;
 bool VAR_6 = 0;
 int VAR_7;
 VAR_1--;

 if (!FUNC_3(VAR_0))
 {





  int VAR_8 = VAR_1 >> 3;
  int VAR_9 = VAR_1 & 0x07;


  if ((~VAR_5[VAR_8]) & ((1 << VAR_9) - 1))
   VAR_6 = 1;
  else
  {

   int VAR_10;

   for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++)
   {
    if (VAR_5[VAR_10] != 0xFF)
    {
     VAR_6 = 1;
     break;
    }
   }
  }
 }

 VAR_4 = (char *) VAR_3 + VAR_3->t_hoff;

 if (!VAR_6)
 {
  Form_pg_attribute VAR_11;





  VAR_11 = FUNC_4(VAR_2, VAR_1);
  if (VAR_11->attcacheoff >= 0)
   return FUNC_9(VAR_11, VAR_4 + VAR_11->attcacheoff);






  if (FUNC_2(VAR_0))
  {
   int VAR_12;

   for (VAR_12 = 0; VAR_12 <= VAR_1; VAR_12++)
   {
    if (FUNC_4(VAR_2, VAR_12)->attlen <= 0)
    {
     VAR_6 = 1;
     break;
    }
   }
  }
 }

 if (!VAR_6)
 {
  int VAR_13 = VAR_2->natts;
  int VAR_14 = 1;
  FUNC_4(VAR_2, 0)->attcacheoff = 0;


  while (VAR_14 < VAR_13 && FUNC_4(VAR_2, VAR_14)->attcacheoff > 0)
   VAR_14++;

  VAR_7 = FUNC_4(VAR_2, VAR_14 - 1)->attcacheoff +
   FUNC_4(VAR_2, VAR_14 - 1)->attlen;

  for (; VAR_14 < VAR_13; VAR_14++)
  {
   Form_pg_attribute VAR_15 = FUNC_4(VAR_2, VAR_14);

   if (VAR_15->attlen <= 0)
    break;

   VAR_7 = FUNC_6(VAR_7, VAR_15->attalign);

   VAR_15->attcacheoff = VAR_7;

   VAR_7 += VAR_15->attlen;
  }

  FUNC_0(VAR_14 > VAR_1);

  VAR_7 = FUNC_4(VAR_2, VAR_1)->attcacheoff;
 }
 else
 {
  bool VAR_16 = 1;
  int VAR_17;
  VAR_7 = 0;
  for (VAR_17 = 0;; VAR_17++)
  {
   Form_pg_attribute VAR_18 = FUNC_4(VAR_2, VAR_17);

   if (FUNC_1(VAR_0) && FUNC_8(VAR_17, VAR_5))
   {
    VAR_16 = 0;
    continue;
   }


   if (VAR_16 && VAR_18->attcacheoff >= 0)
    VAR_7 = VAR_18->attcacheoff;
   else if (VAR_18->attlen == -1)
   {






    if (VAR_16 &&
     VAR_7 == FUNC_6(VAR_7, VAR_18->attalign))
     VAR_18->attcacheoff = VAR_7;
    else
    {
     VAR_7 = FUNC_7(VAR_7, VAR_18->attalign, -1,
           VAR_4 + VAR_7);
     VAR_16 = 0;
    }
   }
   else
   {

    VAR_7 = FUNC_6(VAR_7, VAR_18->attalign);

    if (VAR_16)
     VAR_18->attcacheoff = VAR_7;
   }

   if (VAR_17 == VAR_1)
    break;

   VAR_7 = FUNC_5(VAR_7, VAR_18->attlen, VAR_4 + VAR_7);

   if (VAR_16 && VAR_18->attlen <= 0)
    VAR_16 = 0;
  }
 }

 return FUNC_9(FUNC_4(VAR_2, VAR_1), VAR_4 + VAR_7);
}
