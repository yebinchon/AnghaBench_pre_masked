
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* typname; void* nspname; int remoteid; } ;
typedef int StringInfo ;
typedef TYPE_1__ LogicalRepTyp ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;

void
FUNC_4(StringInfo VAR_0, LogicalRepTyp *VAR_1)
{
 VAR_1->remoteid = FUNC_1(VAR_0, 4);


 VAR_1->nspname = FUNC_3(FUNC_0(VAR_0));
 VAR_1->typname = FUNC_3(FUNC_2(VAR_0));
}
