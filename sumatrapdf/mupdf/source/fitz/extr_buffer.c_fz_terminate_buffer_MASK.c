
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int fz_context ;
struct TYPE_4__ {int len; int cap; scalar_t__* data; } ;
typedef TYPE_1__ fz_buffer ;


 int FUNC_0 (int *,TYPE_1__*) ;

void
FUNC_1(fz_context *VAR_0, fz_buffer *VAR_1)
{

 if (VAR_1->len + 1 > VAR_1->cap)
  FUNC_0(VAR_0, VAR_1);
 VAR_1->data[VAR_1->len] = 0;
}
