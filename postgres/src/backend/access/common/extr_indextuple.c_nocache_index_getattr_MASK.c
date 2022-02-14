
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int bits8 ;
typedef TYPE_1__* TupleDesc ;
struct TYPE_13__ {scalar_t__ attcacheoff; scalar_t__ attlen; int attalign; } ;
struct TYPE_12__ {int t_info; } ;
struct TYPE_11__ {int natts; } ;
typedef int IndexTupleData ;
typedef TYPE_2__* IndexTuple ;
typedef TYPE_3__* Form_pg_attribute ;
typedef int Datum ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 TYPE_3__* FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (int,int,char*) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int,int ,int,char*) ;
 scalar_t__ FUNC_8 (int,int*) ;
 int FUNC_9 (TYPE_3__*,char*) ;

Datum
FUNC_10(IndexTuple VAR_0,
       int VAR_1,
       TupleDesc VAR_2)
{
 char *VAR_3;
 bits8 *VAR_4 = ((void*)0);
 bool VAR_5 = 0;
 int VAR_6;
 int VAR_7;
 VAR_6 = FUNC_1(VAR_0->t_info);

 VAR_1--;

 if (FUNC_2(VAR_0))
 {







  VAR_4 = (bits8 *) ((char *) VAR_0 + sizeof(IndexTupleData));




  {
   int VAR_8 = VAR_1 >> 3;
   int VAR_9 = VAR_1 & 0x07;


   if ((~VAR_4[VAR_8]) & ((1 << VAR_9) - 1))
    VAR_5 = 1;
   else
   {

    int VAR_10;

    for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++)
    {
     if (VAR_4[VAR_10] != 0xFF)
     {
      VAR_5 = 1;
      break;
     }
    }
   }
  }
 }

 VAR_3 = (char *) VAR_0 + VAR_6;

 if (!VAR_5)
 {
  Form_pg_attribute VAR_11;





  VAR_11 = FUNC_4(VAR_2, VAR_1);
  if (VAR_11->attcacheoff >= 0)
   return FUNC_9(VAR_11, VAR_3 + VAR_11->attcacheoff);






  if (FUNC_3(VAR_0))
  {
   int VAR_12;

   for (VAR_12 = 0; VAR_12 <= VAR_1; VAR_12++)
   {
    if (FUNC_4(VAR_2, VAR_12)->attlen <= 0)
    {
     VAR_5 = 1;
     break;
    }
   }
  }
 }

 if (!VAR_5)
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

   if (FUNC_2(VAR_0) && FUNC_8(VAR_17, VAR_4))
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
           VAR_3 + VAR_7);
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

   VAR_7 = FUNC_5(VAR_7, VAR_18->attlen, VAR_3 + VAR_7);

   if (VAR_16 && VAR_18->attlen <= 0)
    VAR_16 = 0;
  }
 }

 return FUNC_9(FUNC_4(VAR_2, VAR_1), VAR_3 + VAR_7);
}
