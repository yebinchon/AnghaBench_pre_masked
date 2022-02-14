
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ dwFileAttributes; } ;
typedef TYPE_1__ ngx_file_info_t ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;

int FUNC_1(char *VAR_1, ngx_file_info_t *VAR_2)
{
    VAR_2->dwFileAttributes = FUNC_0(VAR_1);

    if (VAR_2->dwFileAttributes == VAR_0) {
        return -1;
    }

    return 0;
}
