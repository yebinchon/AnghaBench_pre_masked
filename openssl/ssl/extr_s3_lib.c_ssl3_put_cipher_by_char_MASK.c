
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WPACKET ;
struct TYPE_3__ {int id; } ;
typedef TYPE_1__ SSL_CIPHER ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;

int FUNC_1(const SSL_CIPHER *VAR_1, WPACKET *VAR_2, size_t *VAR_3)
{
    if ((VAR_1->id & 0xff000000) != VAR_0) {
        *VAR_3 = 0;
        return 1;
    }

    if (!FUNC_0(VAR_2, VAR_1->id & 0xffff))
        return 0;

    *VAR_3 = 2;
    return 1;
}
