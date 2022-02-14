
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t keylen; int contentType; int * key; int const* cipher; } ;
typedef int EVP_CIPHER ;
typedef TYPE_1__ CMS_EncryptedContentInfo ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (size_t) ;
 int FUNC_3 (int *,unsigned char const*,size_t) ;

int FUNC_4(CMS_EncryptedContentInfo *VAR_3,
                              const EVP_CIPHER *VAR_4,
                              const unsigned char *VAR_5, size_t VAR_6)
{
    VAR_3->cipher = VAR_4;
    if (VAR_5) {
        if ((VAR_3->key = FUNC_2(VAR_6)) == ((void*)0)) {
            FUNC_0(VAR_0, VAR_1);
            return 0;
        }
        FUNC_3(VAR_3->key, VAR_5, VAR_6);
    }
    VAR_3->keylen = VAR_6;
    if (VAR_4)
        VAR_3->contentType = FUNC_1(VAR_2);
    return 1;
}
