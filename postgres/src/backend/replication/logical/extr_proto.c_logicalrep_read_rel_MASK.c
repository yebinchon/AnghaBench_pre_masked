
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int replident; void* relname; void* nspname; int remoteid; } ;
typedef int StringInfo ;
typedef TYPE_1__ LogicalRepRelation ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 void* FUNC_6 (int ) ;

LogicalRepRelation *
FUNC_7(StringInfo VAR_0)
{
 LogicalRepRelation *VAR_1 = FUNC_2(sizeof(LogicalRepRelation));

 VAR_1->remoteid = FUNC_4(VAR_0, 4);


 VAR_1->nspname = FUNC_6(FUNC_1(VAR_0));
 VAR_1->relname = FUNC_6(FUNC_5(VAR_0));


 VAR_1->replident = FUNC_3(VAR_0);


 FUNC_0(VAR_0, VAR_1);

 return VAR_1;
}
