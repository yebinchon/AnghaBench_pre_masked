
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int fz_context ;
struct TYPE_3__ {size_t cap; size_t len; int data; scalar_t__ shared; } ;
typedef TYPE_1__ fz_buffer ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,size_t) ;
 int FUNC_1 (int *,int ,char*) ;

void
FUNC_2(fz_context *VAR_1, fz_buffer *VAR_2, size_t VAR_3)
{
 if (VAR_2->shared)
  FUNC_1(VAR_1, VAR_0, "cannot resize a buffer with shared storage");
 VAR_2->data = FUNC_0(VAR_1, VAR_2->data, VAR_3);
 VAR_2->cap = VAR_3;
 if (VAR_2->len > VAR_2->cap)
  VAR_2->len = VAR_2->cap;
}
