
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cap; int len; int items; } ;
typedef TYPE_1__ fz_text_span ;
typedef int fz_context ;


 int FUNC_0 (int *,int ,int,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_1, fz_text_span *VAR_2, int VAR_3)
{
 int VAR_4 = VAR_2->cap;
 if (VAR_2->len + VAR_3 < VAR_4)
  return;
 while (VAR_2->len + VAR_3 > VAR_4)
  VAR_4 = VAR_4 + 36;
 VAR_2->items = FUNC_0(VAR_1, VAR_2->items, VAR_4, VAR_0);
 VAR_2->cap = VAR_4;
}
