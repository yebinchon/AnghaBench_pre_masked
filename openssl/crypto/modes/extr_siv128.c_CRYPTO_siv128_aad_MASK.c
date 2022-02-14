
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int d; int mac_ctx_init; } ;
struct TYPE_5__ {int byte; } ;
typedef TYPE_1__ SIV_BLOCK ;
typedef TYPE_2__ SIV128_CONTEXT ;
typedef int EVP_MAC_CTX ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,size_t*,int) ;
 int FUNC_3 (int *,unsigned char const*,size_t) ;
 size_t VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,TYPE_1__*) ;

int FUNC_6(SIV128_CONTEXT *VAR_1, const unsigned char *VAR_2,
                      size_t VAR_3)
{
    SIV_BLOCK VAR_4;
    size_t VAR_5 = VAR_0;
    EVP_MAC_CTX *VAR_6;

    FUNC_4(&VAR_1->d);

    if ((VAR_6 = FUNC_0(VAR_1->mac_ctx_init)) == ((void*)0)
        || !FUNC_3(VAR_6, VAR_2, VAR_3)
        || !FUNC_2(VAR_6, VAR_4.byte, &VAR_5,
                          sizeof(VAR_4.byte))
        || VAR_5 != VAR_0) {
        FUNC_1(VAR_6);
        return 0;
    }
    FUNC_1(VAR_6);

    FUNC_5(&VAR_1->d, &VAR_4);

    return 1;
}
