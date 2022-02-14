
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int fz_context ;
struct TYPE_4__ {size_t len; size_t cap; scalar_t__ unused_bits; scalar_t__ data; } ;
typedef TYPE_1__ fz_buffer ;


 int FUNC_0 (int *,TYPE_1__*,size_t) ;
 int FUNC_1 (scalar_t__,char const*,size_t) ;
 size_t FUNC_2 (char const*) ;

void
FUNC_3(fz_context *VAR_0, fz_buffer *VAR_1, const char *VAR_2)
{
 size_t VAR_3 = FUNC_2(VAR_2);
 if (VAR_1->len + VAR_3 > VAR_1->cap)
  FUNC_0(VAR_0, VAR_1, VAR_1->len + VAR_3);
 FUNC_1(VAR_1->data + VAR_1->len, VAR_2, VAR_3);
 VAR_1->len += VAR_3;
 VAR_1->unused_bits = 0;
}
