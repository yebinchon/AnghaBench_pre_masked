
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cursor; scalar_t__ tail; } ;
typedef TYPE_1__ queue ;



int FUNC_0(queue *VAR_0)
{
   return(VAR_0 && VAR_0->cursor == VAR_0->tail);
}
