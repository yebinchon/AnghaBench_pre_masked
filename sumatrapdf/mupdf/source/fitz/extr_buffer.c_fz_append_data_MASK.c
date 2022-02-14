
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int fz_context ;
struct TYPE_4__ {scalar_t__ len; scalar_t__ cap; scalar_t__ data; scalar_t__ unused_bits; } ;
typedef TYPE_1__ fz_buffer ;


 int FUNC_0 (int *,TYPE_1__*,scalar_t__) ;
 int FUNC_1 (scalar_t__,void const*,size_t) ;

void
FUNC_2(fz_context *VAR_0, fz_buffer *VAR_1, const void *VAR_2, size_t VAR_3)
{
 if (VAR_1->len + VAR_3 > VAR_1->cap)
  FUNC_0(VAR_0, VAR_1, VAR_1->len + VAR_3);
 FUNC_1(VAR_1->data + VAR_1->len, VAR_2, VAR_3);
 VAR_1->len += VAR_3;
 VAR_1->unused_bits = 0;
}
