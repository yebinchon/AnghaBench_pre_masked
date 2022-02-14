
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int X509 ;
typedef int WPACKET ;
struct TYPE_5__ {int version; } ;
typedef TYPE_1__ SSL ;
typedef int EXT_RETURN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

EXT_RETURN FUNC_6(SSL *VAR_6, WPACKET *VAR_7,
                                                 unsigned int VAR_8, X509 *VAR_9,
                                                 size_t VAR_10)
{
    if (!FUNC_5(FUNC_0(VAR_6))) {
        FUNC_1(VAR_6, VAR_3,
                 VAR_4,
                 VAR_0);
        return VAR_1;
    }

    if (!FUNC_3(VAR_7, VAR_5)
            || !FUNC_4(VAR_7)
            || !FUNC_3(VAR_7, VAR_6->version)
            || !FUNC_2(VAR_7)) {
        FUNC_1(VAR_6, VAR_3,
                 VAR_4,
                 VAR_0);
        return VAR_1;
    }

    return VAR_2;
}
