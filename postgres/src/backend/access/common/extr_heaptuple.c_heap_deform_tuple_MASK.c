
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
typedef int bits8 ;
typedef TYPE_1__* TupleDesc ;
struct TYPE_16__ {scalar_t__ attcacheoff; int attlen; int attalign; } ;
struct TYPE_15__ {TYPE_2__* t_data; } ;
struct TYPE_14__ {int t_hoff; int * t_bits; } ;
struct TYPE_13__ {int natts; } ;
typedef TYPE_2__* HeapTupleHeader ;
typedef TYPE_3__* HeapTuple ;
typedef TYPE_4__* Form_pg_attribute ;
typedef scalar_t__ Datum ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int,int) ;
 TYPE_4__* FUNC_3 (TYPE_1__*,int) ;
 scalar_t__ FUNC_4 (scalar_t__,int,char*) ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;
 scalar_t__ FUNC_6 (scalar_t__,int ,int,char*) ;
 scalar_t__ FUNC_7 (int,int *) ;
 scalar_t__ FUNC_8 (TYPE_4__*,char*) ;
 scalar_t__ FUNC_9 (TYPE_1__*,int,int*) ;

void
FUNC_10(HeapTuple VAR_0, TupleDesc VAR_1,
      Datum *VAR_2, bool *VAR_3)
{
 HeapTupleHeader VAR_4 = VAR_0->t_data;
 bool VAR_5 = FUNC_0(VAR_0);
 int VAR_6 = VAR_1->natts;
 int VAR_7;
 int VAR_8;
 char *VAR_9;
 uint32 VAR_10;
 bits8 *VAR_11 = VAR_4->t_bits;
 bool VAR_12 = 0;

 VAR_7 = FUNC_1(VAR_4);






 VAR_7 = FUNC_2(VAR_7, VAR_6);

 VAR_9 = (char *) VAR_4 + VAR_4->t_hoff;

 VAR_10 = 0;

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
 {
  Form_pg_attribute VAR_13 = FUNC_3(VAR_1, VAR_8);

  if (VAR_5 && FUNC_7(VAR_8, VAR_11))
  {
   VAR_2[VAR_8] = (Datum) 0;
   VAR_3[VAR_8] = 1;
   VAR_12 = 1;
   continue;
  }

  VAR_3[VAR_8] = 0;

  if (!VAR_12 && VAR_13->attcacheoff >= 0)
   VAR_10 = VAR_13->attcacheoff;
  else if (VAR_13->attlen == -1)
  {






   if (!VAR_12 &&
    VAR_10 == FUNC_5(VAR_10, VAR_13->attalign))
    VAR_13->attcacheoff = VAR_10;
   else
   {
    VAR_10 = FUNC_6(VAR_10, VAR_13->attalign, -1,
          VAR_9 + VAR_10);
    VAR_12 = 1;
   }
  }
  else
  {

   VAR_10 = FUNC_5(VAR_10, VAR_13->attalign);

   if (!VAR_12)
    VAR_13->attcacheoff = VAR_10;
  }

  VAR_2[VAR_8] = FUNC_8(VAR_13, VAR_9 + VAR_10);

  VAR_10 = FUNC_4(VAR_10, VAR_13->attlen, VAR_9 + VAR_10);

  if (VAR_13->attlen <= 0)
   VAR_12 = 1;
 }





 for (; VAR_8 < VAR_6; VAR_8++)
  VAR_2[VAR_8] = FUNC_9(VAR_1, VAR_8 + 1, &VAR_3[VAR_8]);
}
