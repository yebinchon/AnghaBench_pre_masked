
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char u_char ;
struct TYPE_3__ {char* data; int len; } ;
typedef TYPE_1__ ngx_str_t ;
typedef int ngx_int_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static ngx_int_t
FUNC_0(ngx_str_t *VAR_2)
{
    if (VAR_2->data[0] == '/') {
        return VAR_1;
    }

    return VAR_0;


}
