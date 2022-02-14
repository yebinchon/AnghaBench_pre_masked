
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int type; } ;
struct TYPE_5__ {int polstr; } ;
typedef TYPE_1__* TSQueryParserState ;
typedef TYPE_2__ QueryOperand ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (int) ;

void
FUNC_2(TSQueryParserState VAR_1)
{
 QueryOperand *VAR_2;

 VAR_2 = (QueryOperand *) FUNC_1(sizeof(QueryOperand));
 VAR_2->type = VAR_0;

 VAR_1->polstr = FUNC_0(VAR_2, VAR_1->polstr);
}
