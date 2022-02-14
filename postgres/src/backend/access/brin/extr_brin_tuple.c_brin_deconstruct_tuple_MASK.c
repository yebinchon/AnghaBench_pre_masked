
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int bits8 ;
typedef int TupleDesc ;
struct TYPE_12__ {TYPE_2__** bd_info; TYPE_1__* bd_tupdesc; } ;
struct TYPE_11__ {int attlen; int attalign; } ;
struct TYPE_10__ {int oi_nstored; } ;
struct TYPE_9__ {int natts; } ;
typedef TYPE_3__* Form_pg_attribute ;
typedef int Datum ;
typedef TYPE_4__ BrinDesc ;


 TYPE_3__* FUNC_0 (int ,int) ;
 long FUNC_1 (long,int,char*) ;
 long FUNC_2 (long,int ) ;
 long FUNC_3 (long,int ,int,char*) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_3__*,char*) ;

__attribute__((used)) static inline void
FUNC_7(BrinDesc *VAR_0,
        char *VAR_1, bits8 *VAR_2, bool VAR_3,
        Datum *VAR_4, bool *VAR_5, bool *VAR_6)
{
 int VAR_7;
 int VAR_8;
 TupleDesc VAR_9;
 long VAR_10;







 for (VAR_7 = 0; VAR_7 < VAR_0->bd_tupdesc->natts; VAR_7++)
 {





  VAR_5[VAR_7] = VAR_3 && !FUNC_4(VAR_7, VAR_2);
  VAR_6[VAR_7] =
   VAR_3 && !FUNC_4(VAR_0->bd_tupdesc->natts + VAR_7, VAR_2);
 }






 VAR_9 = FUNC_5(VAR_0);
 VAR_8 = 0;
 VAR_10 = 0;
 for (VAR_7 = 0; VAR_7 < VAR_0->bd_tupdesc->natts; VAR_7++)
 {
  int VAR_11;

  if (VAR_5[VAR_7])
  {
   VAR_8 += VAR_0->bd_info[VAR_7]->oi_nstored;
   continue;
  }

  for (VAR_11 = 0;
    VAR_11 < VAR_0->bd_info[VAR_7]->oi_nstored;
    VAR_11++)
  {
   Form_pg_attribute VAR_12 = FUNC_0(VAR_9, VAR_8);

   if (VAR_12->attlen == -1)
   {
    VAR_10 = FUNC_3(VAR_10, VAR_12->attalign, -1,
          VAR_1 + VAR_10);
   }
   else
   {

    VAR_10 = FUNC_2(VAR_10, VAR_12->attalign);
   }

   VAR_4[VAR_8++] = FUNC_6(VAR_12, VAR_1 + VAR_10);

   VAR_10 = FUNC_1(VAR_10, VAR_12->attlen, VAR_1 + VAR_10);
  }
 }
}
