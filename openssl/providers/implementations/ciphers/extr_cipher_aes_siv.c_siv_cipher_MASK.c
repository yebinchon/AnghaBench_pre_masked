
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* hw; } ;
struct TYPE_4__ {scalar_t__ (* cipher ) (TYPE_2__*,unsigned char*,unsigned char const*,size_t) ;} ;
typedef TYPE_2__ PROV_AES_SIV_CTX ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_2__*,unsigned char*,unsigned char const*,size_t) ;

__attribute__((used)) static int FUNC_2(void *VAR_2, unsigned char *VAR_3, size_t *VAR_4,
                      size_t VAR_5, const unsigned char *VAR_6, size_t VAR_7)
{
    PROV_AES_SIV_CTX *VAR_8 = (PROV_AES_SIV_CTX *)VAR_2;

    if (VAR_5 < VAR_7) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }

    if (VAR_8->hw->cipher(VAR_8, VAR_3, VAR_6, VAR_7) <= 0)
        return 0;

    if (VAR_4 != ((void*)0))
        *VAR_4 = VAR_7;
    return 1;
}
