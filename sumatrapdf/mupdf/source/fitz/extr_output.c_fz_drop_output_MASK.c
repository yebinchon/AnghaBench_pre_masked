
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* bp; int state; int (* drop ) (int *,int ) ;scalar_t__ close; } ;
typedef TYPE_1__ fz_output ;
typedef int fz_context ;


 int FUNC_0 (int *,TYPE_1__*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int ) ;

void
FUNC_3(fz_context *VAR_1, fz_output *VAR_2)
{
 if (VAR_2)
 {
  if (VAR_2->close)
   FUNC_1(VAR_1, "dropping unclosed output");
  if (VAR_2->drop)
   VAR_2->drop(VAR_1, VAR_2->state);
  FUNC_0(VAR_1, VAR_2->bp);
  if (VAR_2 != &VAR_0)
   FUNC_0(VAR_1, VAR_2);
 }
}
