
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* TupleDesc ;
struct TYPE_8__ {scalar_t__ atttypid; } ;
struct TYPE_7__ {int natts; } ;
typedef scalar_t__ Oid ;
typedef TYPE_2__* Form_pg_attribute ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static bool
FUNC_5(TupleDesc VAR_2, TupleDesc VAR_3)
{
 int VAR_4;
 Form_pg_attribute VAR_5;
 Oid VAR_6;
 Form_pg_attribute VAR_7;
 Oid VAR_8;

 if (VAR_2->natts < 2 ||
  VAR_3->natts < 3)
  return 0;


 VAR_6 = FUNC_0(VAR_2, 0)->atttypid;
 VAR_8 = FUNC_0(VAR_3, 0)->atttypid;
 if (VAR_6 != VAR_8)
  FUNC_1(VAR_1,
    (FUNC_2(VAR_0),
     FUNC_4("invalid return type"),
     FUNC_3("SQL rowid datatype does not match " "return rowid datatype.")));







 VAR_7 = FUNC_0(VAR_3, 2);
 for (VAR_4 = 1; VAR_4 < VAR_2->natts; VAR_4++)
 {
  VAR_5 = FUNC_0(VAR_2, VAR_4);

  if (VAR_5->atttypid != VAR_7->atttypid)
   return 0;
 }


 return 1;
}
