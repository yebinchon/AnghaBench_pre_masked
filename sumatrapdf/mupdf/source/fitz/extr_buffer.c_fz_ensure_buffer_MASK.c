
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int fz_context ;
struct TYPE_4__ {size_t cap; } ;
typedef TYPE_1__ fz_buffer ;


 int FUNC_0 (int *,TYPE_1__*,size_t) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_0, fz_buffer *VAR_1, size_t VAR_2)
{
 size_t VAR_3 = VAR_1->cap;
 if (VAR_3 < 16)
  VAR_3 = 16;
 while (VAR_3 < VAR_2)
 {
  VAR_3 = (VAR_3 * 3) / 2;
 }
 FUNC_0(VAR_0, VAR_1, VAR_3);
}
