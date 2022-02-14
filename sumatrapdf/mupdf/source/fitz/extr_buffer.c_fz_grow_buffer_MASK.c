
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int fz_context ;
struct TYPE_4__ {int cap; } ;
typedef TYPE_1__ fz_buffer ;


 int FUNC_0 (int *,TYPE_1__*,size_t) ;

void
FUNC_1(fz_context *VAR_0, fz_buffer *VAR_1)
{
 size_t VAR_2 = (VAR_1->cap * 3) / 2;
 if (VAR_2 == 0)
  VAR_2 = 256;
 FUNC_0(VAR_0, VAR_1, VAR_2);
}
