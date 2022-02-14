
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* head; } ;
struct TYPE_5__ {int paren_depth; } ;
typedef TYPE_2__* ConditionalStack ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;

void
FUNC_2(ConditionalStack VAR_0, int VAR_1)
{
 FUNC_0(!FUNC_1(VAR_0));
 VAR_0->head->paren_depth = VAR_1;
}
