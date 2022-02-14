
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ hw; } ;
struct TYPE_4__ {int (* initiv ) (TYPE_2__*) ;} ;
typedef TYPE_1__ PROV_CIPHER_HW_CHACHA20_POLY1305 ;
typedef TYPE_2__ PROV_CIPHER_CTX ;


 int FUNC_0 (void*,unsigned char const*,size_t,unsigned char const*,size_t) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, const unsigned char *VAR_1,
                                  size_t VAR_2, const unsigned char *VAR_3,
                                  size_t VAR_4)
{
    int VAR_5;

    VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
    if (VAR_5 && VAR_3 != ((void*)0)) {
        PROV_CIPHER_CTX *VAR_6 = (PROV_CIPHER_CTX *)VAR_0;
        PROV_CIPHER_HW_CHACHA20_POLY1305 *VAR_7 =
            (PROV_CIPHER_HW_CHACHA20_POLY1305 *)VAR_6->hw;

        VAR_7->initiv(VAR_6);
    }
    return VAR_5;
}
