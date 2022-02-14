
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ packed; struct TYPE_5__* coords; struct TYPE_5__* cmds; int refs; } ;
typedef TYPE_1__ fz_path ;
typedef int fz_context ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,TYPE_1__*,int *) ;
 int FUNC_1 (int *,TYPE_1__*) ;

void
FUNC_2(fz_context *VAR_2, const fz_path *VAR_3)
{
 fz_path *VAR_4 = (fz_path *)VAR_3;

 if (FUNC_0(VAR_2, VAR_4, &VAR_4->refs))
 {
  if (VAR_4->packed != VAR_0)
  {
   FUNC_1(VAR_2, VAR_4->cmds);
   FUNC_1(VAR_2, VAR_4->coords);
  }
  if (VAR_4->packed == VAR_1)
   FUNC_1(VAR_2, VAR_4);
 }
}
