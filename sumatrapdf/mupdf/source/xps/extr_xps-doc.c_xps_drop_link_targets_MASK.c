
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* name; struct TYPE_5__* next; } ;
typedef TYPE_1__ xps_target ;
struct TYPE_6__ {TYPE_1__* target; } ;
typedef TYPE_2__ xps_document ;
typedef int fz_context ;


 int FUNC_0 (int *,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_0, xps_document *VAR_1)
{
 xps_target *VAR_2 = VAR_1->target, *VAR_3;
 while (VAR_2)
 {
  VAR_3 = VAR_2->next;
  FUNC_0(VAR_0, VAR_2->name);
  FUNC_0(VAR_0, VAR_2);
  VAR_2 = VAR_3;
 }
}
