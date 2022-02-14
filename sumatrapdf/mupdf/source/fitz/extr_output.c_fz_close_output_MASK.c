
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* close ) (int *,int ) ;int state; } ;
typedef TYPE_1__ fz_output ;
typedef int fz_context ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,int ) ;

void
FUNC_2(fz_context *VAR_0, fz_output *VAR_1)
{
 if (VAR_1 == ((void*)0))
  return;
 FUNC_0(VAR_0, VAR_1);
 if (VAR_1->close)
  VAR_1->close(VAR_0, VAR_1->state);
 VAR_1->close = ((void*)0);
}
