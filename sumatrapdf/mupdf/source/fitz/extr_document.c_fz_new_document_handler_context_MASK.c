
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_3__* handler; } ;
typedef TYPE_1__ fz_context ;
struct TYPE_6__ {int refs; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (TYPE_1__*,int ) ;

void FUNC_1(fz_context *VAR_1)
{
 VAR_1->handler = FUNC_0(VAR_1, VAR_0);
 VAR_1->handler->refs = 1;
}
