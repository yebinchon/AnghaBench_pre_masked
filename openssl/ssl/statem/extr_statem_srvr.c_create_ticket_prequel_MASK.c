
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int WPACKET ;
struct TYPE_7__ {TYPE_1__* session; scalar_t__ hit; } ;
struct TYPE_6__ {int timeout; } ;
typedef TYPE_2__ SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned char*,int ) ;

__attribute__((used)) static int FUNC_5(SSL *VAR_4, WPACKET *VAR_5, uint32_t VAR_6,
                                 unsigned char *VAR_7)
{






    if (!FUNC_2(VAR_5,
                               (VAR_4->hit && !FUNC_0(VAR_4))
                               ? 0 : VAR_4->session->timeout)) {
        FUNC_1(VAR_4, VAR_1, VAR_2,
                 VAR_0);
        return 0;
    }

    if (FUNC_0(VAR_4)) {
        if (!FUNC_2(VAR_5, VAR_6)
                || !FUNC_4(VAR_5, VAR_7, VAR_3)) {
            FUNC_1(VAR_4, VAR_1, VAR_2,
                     VAR_0);
            return 0;
        }
    }


    if (!FUNC_3(VAR_5)) {
        FUNC_1(VAR_4, VAR_1, VAR_2,
                 VAR_0);
        return 0;
    }

    return 1;
}
