
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* TupleDesc ;
struct TYPE_7__ {int attcollation; int atttypid; int attname; } ;
struct TYPE_6__ {int natts; } ;
typedef TYPE_2__* Form_pg_attribute ;


 int FUNC_0 (int,int ,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 char VAR_5 ;
 char VAR_6 ;
 int * FUNC_2 (int) ;
 TYPE_2__* FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int) ;
 scalar_t__ FUNC_7 (int,int) ;

void
FUNC_8(TupleDesc VAR_7, char VAR_8,
       int VAR_9)
{
 int VAR_10;
 int VAR_11;
 int VAR_12 = VAR_7->natts;


 if (VAR_12 < 0 || VAR_12 > VAR_3)
  FUNC_4(VAR_2,
    (FUNC_5(VAR_1),
     FUNC_6("tables can have at most %d columns",
      VAR_3)));







 if (VAR_8 != VAR_6 && VAR_8 != VAR_5)
 {
  for (VAR_10 = 0; VAR_10 < VAR_12; VAR_10++)
  {
   Form_pg_attribute VAR_13 = FUNC_3(VAR_7, VAR_10);

   if (FUNC_2(FUNC_1(VAR_13->attname)) != ((void*)0))
    FUNC_4(VAR_2,
      (FUNC_5(VAR_0),
       FUNC_6("column name \"%s\" conflicts with a system column name",
        FUNC_1(VAR_13->attname))));
  }
 }




 for (VAR_10 = 1; VAR_10 < VAR_12; VAR_10++)
 {
  for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++)
  {
   if (FUNC_7(FUNC_1(FUNC_3(VAR_7, VAR_11)->attname),
        FUNC_1(FUNC_3(VAR_7, VAR_10)->attname)) == 0)
    FUNC_4(VAR_2,
      (FUNC_5(VAR_0),
       FUNC_6("column name \"%s\" specified more than once",
        FUNC_1(FUNC_3(VAR_7, VAR_11)->attname))));
  }
 }




 for (VAR_10 = 0; VAR_10 < VAR_12; VAR_10++)
 {
  FUNC_0(FUNC_1(FUNC_3(VAR_7, VAR_10)->attname),
         FUNC_3(VAR_7, VAR_10)->atttypid,
         FUNC_3(VAR_7, VAR_10)->attcollation,
         VAR_4,
         VAR_9);
 }
}
