
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int fz_context ;
struct TYPE_4__ {size_t len; int data; } ;
typedef TYPE_1__ fz_buffer ;


 TYPE_1__* FUNC_0 (int *,size_t) ;
 int FUNC_1 (int ,unsigned char const*,size_t) ;

fz_buffer *
FUNC_2(fz_context *VAR_0, const unsigned char *VAR_1, size_t VAR_2)
{
 fz_buffer *VAR_3 = FUNC_0(VAR_0, VAR_2);
 VAR_3->len = VAR_2;
 FUNC_1(VAR_3->data, VAR_1, VAR_2);
 return VAR_3;
}
