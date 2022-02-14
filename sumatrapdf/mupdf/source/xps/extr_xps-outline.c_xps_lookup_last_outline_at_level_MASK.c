
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int xps_document ;
struct TYPE_4__ {struct TYPE_4__* down; struct TYPE_4__* next; } ;
typedef TYPE_1__ fz_outline ;
typedef int fz_context ;



__attribute__((used)) static fz_outline *
FUNC_0(fz_context *VAR_0, xps_document *VAR_1, fz_outline *VAR_2, int VAR_3, int VAR_4)
{
 while (VAR_2->next)
  VAR_2 = VAR_2->next;
 if (VAR_3 == VAR_4 || !VAR_2->down)
  return VAR_2;
 return FUNC_0(VAR_0, VAR_1, VAR_2->down, VAR_3 + 1, VAR_4);
}
