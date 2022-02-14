
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ TLS_GROUP_INFO ;
typedef int SSL ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ) ;

int FUNC_1(SSL *VAR_2, uint16_t VAR_3, int VAR_4)
{
    const TLS_GROUP_INFO *VAR_5 = FUNC_0(VAR_3);

    if (VAR_4 < VAR_0) {
        if ((VAR_5->flags & VAR_1) != 0)
            return 0;
    }
    return 1;
}
