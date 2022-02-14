
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* TupleDesc ;
struct TYPE_10__ {scalar_t__ atttypid; } ;
struct TYPE_9__ {int flinfo; } ;
struct TYPE_8__ {int natts; } ;
typedef TYPE_2__* FunctionCallInfo ;
typedef TYPE_3__* Form_pg_attribute ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ,int) ;

__attribute__((used)) static void
FUNC_3(FunctionCallInfo VAR_2, int VAR_3,
       TupleDesc VAR_4)
{
 int VAR_5;


 if (!VAR_4 ||
  (VAR_3 + 1) != VAR_4->natts ||
  FUNC_0(VAR_4, VAR_3)->atttypid != VAR_1)
  FUNC_1(VAR_0, "type mismatch in hypothetical-set function");


 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
 {
  Form_pg_attribute VAR_6 = FUNC_0(VAR_4, VAR_5);

  if (FUNC_2(VAR_2->flinfo, VAR_5 + 1) != VAR_6->atttypid)
   FUNC_1(VAR_0, "type mismatch in hypothetical-set function");
 }
}
