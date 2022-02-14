
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int relationOids; int finalrtable; } ;
struct TYPE_8__ {scalar_t__ rtekind; int relid; void* securityQuals; void* colcollations; void* coltypmods; void* coltypes; void* values_lists; int * tablefunc; void* functions; void* joinaliasvars; int * subquery; int * tablesample; } ;
typedef TYPE_1__ RangeTblEntry ;
typedef TYPE_2__ PlannerGlobal ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*,TYPE_1__*,int) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static void
FUNC_9(PlannerGlobal *VAR_4, RangeTblEntry *VAR_5)
{
 RangeTblEntry *VAR_6;


 VAR_6 = (RangeTblEntry *) FUNC_8(sizeof(RangeTblEntry));
 FUNC_7(VAR_6, VAR_5, sizeof(RangeTblEntry));


 VAR_6->tablesample = ((void*)0);
 VAR_6->subquery = ((void*)0);
 VAR_6->joinaliasvars = VAR_2;
 VAR_6->functions = VAR_2;
 VAR_6->tablefunc = ((void*)0);
 VAR_6->values_lists = VAR_2;
 VAR_6->coltypes = VAR_2;
 VAR_6->coltypmods = VAR_2;
 VAR_6->colcollations = VAR_2;
 VAR_6->securityQuals = VAR_2;

 VAR_4->finalrtable = FUNC_4(VAR_4->finalrtable, VAR_6);






 if (FUNC_0(FUNC_6(VAR_4->finalrtable)))
  FUNC_1(VAR_1,
    (FUNC_2(VAR_0),
     FUNC_3("too many range table entries")));
 if (VAR_6->rtekind == VAR_3)
  VAR_4->relationOids = FUNC_5(VAR_4->relationOids, VAR_6->relid);
}
