
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int fz_context ;
struct TYPE_4__ {scalar_t__ cap; scalar_t__ len; } ;
typedef TYPE_1__ fz_buffer ;


 int FUNC_0 (int *,TYPE_1__*,scalar_t__) ;

void
FUNC_1(fz_context *VAR_0, fz_buffer *VAR_1)
{
 if (VAR_1->cap > VAR_1->len+1)
  FUNC_0(VAR_0, VAR_1, VAR_1->len);
}
