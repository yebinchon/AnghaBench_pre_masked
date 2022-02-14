
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WPACKET ;
struct TYPE_3__ {int init_num; scalar_t__ init_off; } ;
typedef TYPE_1__ SSL ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,size_t*) ;

int FUNC_2(SSL *VAR_2, WPACKET *VAR_3, int VAR_4)
{
    size_t VAR_5;

    if ((VAR_4 != VAR_1 && !FUNC_0(VAR_3))
            || !FUNC_1(VAR_3, &VAR_5)
            || VAR_5 > VAR_0)
        return 0;
    VAR_2->init_num = (int)VAR_5;
    VAR_2->init_off = 0;

    return 1;
}
