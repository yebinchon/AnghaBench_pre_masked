
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int fz_context ;
struct TYPE_3__ {size_t len; unsigned char* data; } ;
typedef TYPE_1__ fz_buffer ;



size_t
FUNC_0(fz_context *VAR_0, fz_buffer *VAR_1, unsigned char **VAR_2)
{
 size_t VAR_3 = VAR_1 ? VAR_1->len : 0;
 *VAR_2 = (VAR_1 ? VAR_1->data : ((void*)0));

 if (VAR_1)
 {
  VAR_1->data = ((void*)0);
  VAR_1->len = 0;
 }
 return VAR_3;
}
