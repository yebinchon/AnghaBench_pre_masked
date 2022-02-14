
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_5__ {int * last; } ;
typedef TYPE_1__ ngx_buf_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,char const*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static u_char *
FUNC_2(ngx_buf_t *VAR_1, const char VAR_2[4])
{
    u_char *VAR_3;

    VAR_3 = VAR_1->last;

    if (FUNC_1(VAR_1, 0) != VAR_0) {
        return ((void*)0);
    }

    if (FUNC_0(VAR_1, VAR_2) != VAR_0) {
        return ((void*)0);
    }

    return VAR_3;
}
