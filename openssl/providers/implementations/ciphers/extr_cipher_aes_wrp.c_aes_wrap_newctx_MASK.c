
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int pad; scalar_t__ ivlen; } ;
typedef TYPE_1__ PROV_CIPHER_CTX ;
typedef void PROV_AES_WRAP_CTX ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,size_t,size_t,size_t,unsigned int,int ,int *,int *) ;

__attribute__((used)) static void *FUNC_2(size_t VAR_1, size_t VAR_2,
                             size_t VAR_3, unsigned int VAR_4, uint64_t VAR_5)
{
    PROV_AES_WRAP_CTX *VAR_6 = FUNC_0(sizeof(*VAR_6));
    PROV_CIPHER_CTX *VAR_7 = (PROV_CIPHER_CTX *)VAR_6;

    if (VAR_7 != ((void*)0)) {
        FUNC_1(VAR_7, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
                               ((void*)0), ((void*)0));
        VAR_7->pad = (VAR_7->ivlen == VAR_0);
    }
    return VAR_6;
}
