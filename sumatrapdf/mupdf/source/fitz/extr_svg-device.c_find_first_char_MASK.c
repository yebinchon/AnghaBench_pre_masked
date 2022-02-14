
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int len; TYPE_1__* items; } ;
typedef TYPE_2__ fz_text_span ;
typedef int fz_context ;
struct TYPE_4__ {scalar_t__ ucs; } ;



__attribute__((used)) static int
FUNC_0(fz_context *VAR_0, const fz_text_span *VAR_1, int VAR_2)
{
 for (; VAR_2 < VAR_1->len; ++VAR_2)
  if (VAR_1->items[VAR_2].ucs >= 0)
   return VAR_2;
 return VAR_2;
}
