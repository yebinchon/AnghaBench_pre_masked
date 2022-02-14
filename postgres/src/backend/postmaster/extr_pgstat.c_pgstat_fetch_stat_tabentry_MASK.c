
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * tables; } ;
typedef int PgStat_StatTabEntry ;
typedef TYPE_1__ PgStat_StatDBEntry ;
typedef scalar_t__ Oid ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int *,void*,int ,int *) ;
 int * VAR_3 ;

PgStat_StatTabEntry *
FUNC_2(Oid VAR_4)
{
 Oid VAR_5;
 PgStat_StatDBEntry *VAR_6;
 PgStat_StatTabEntry *VAR_7;





 FUNC_0();




 VAR_5 = VAR_2;
 VAR_6 = (PgStat_StatDBEntry *) FUNC_1(VAR_3,
             (void *) &VAR_5,
             VAR_0, ((void*)0));
 if (VAR_6 != ((void*)0) && VAR_6->tables != ((void*)0))
 {
  VAR_7 = (PgStat_StatTabEntry *) FUNC_1(VAR_6->tables,
                (void *) &VAR_4,
                VAR_0, ((void*)0));
  if (VAR_7)
   return VAR_7;
 }




 VAR_5 = VAR_1;
 VAR_6 = (PgStat_StatDBEntry *) FUNC_1(VAR_3,
             (void *) &VAR_5,
             VAR_0, ((void*)0));
 if (VAR_6 != ((void*)0) && VAR_6->tables != ((void*)0))
 {
  VAR_7 = (PgStat_StatTabEntry *) FUNC_1(VAR_6->tables,
                (void *) &VAR_4,
                VAR_0, ((void*)0));
  if (VAR_7)
   return VAR_7;
 }

 return ((void*)0);
}
