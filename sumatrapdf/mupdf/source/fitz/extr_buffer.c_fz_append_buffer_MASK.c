
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int fz_context ;
struct TYPE_4__ {scalar_t__ cap; scalar_t__ len; scalar_t__ data; } ;
typedef TYPE_1__ fz_buffer ;


 scalar_t__ FUNC_0 (int *,scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__) ;

void
FUNC_2(fz_context *VAR_0, fz_buffer *VAR_1, fz_buffer *VAR_2)
{
 if (VAR_1->cap - VAR_1->len < VAR_2->len)
 {
  VAR_1->data = FUNC_0(VAR_0, VAR_1->data, VAR_1->len + VAR_2->len);
  VAR_1->cap = VAR_1->len + VAR_2->len;
 }

 FUNC_1(VAR_1->data + VAR_1->len, VAR_2->data, VAR_2->len);
 VAR_1->len += VAR_2->len;
}
