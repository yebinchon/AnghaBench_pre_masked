
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int fz_context ;
struct TYPE_4__ {int len; int cap; scalar_t__ unused_bits; int data; } ;
typedef TYPE_1__ fz_buffer ;


 int FUNC_0 (int *,TYPE_1__*,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,char*,int) ;

void
FUNC_3(fz_context *VAR_0, fz_buffer *VAR_1, int VAR_2)
{
 char VAR_3[10];
 int VAR_4 = FUNC_1(VAR_3, VAR_2);
 if (VAR_1->len + VAR_4 > VAR_1->cap)
  FUNC_0(VAR_0, VAR_1, VAR_1->len + VAR_4);
 FUNC_2(VAR_1->data + VAR_1->len, VAR_3, VAR_4);
 VAR_1->len += VAR_4;
 VAR_1->unused_bits = 0;
}
