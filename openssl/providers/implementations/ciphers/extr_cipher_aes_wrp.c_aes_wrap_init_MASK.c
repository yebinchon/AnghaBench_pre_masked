
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int block128_f ;
struct TYPE_5__ {int ks; } ;
struct TYPE_7__ {TYPE_1__ ks; int wrapfn; } ;
struct TYPE_6__ {int enc; size_t keylen; scalar_t__ pad; int block; } ;
typedef TYPE_2__ PROV_CIPHER_CTX ;
typedef TYPE_3__ PROV_AES_WRAP_CTX ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned char const*,size_t,int *) ;
 int FUNC_1 (unsigned char const*,size_t,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int ) ;
 int VAR_7 ;
 int FUNC_3 (TYPE_2__*,unsigned char const*,size_t) ;

__attribute__((used)) static int FUNC_4(void *VAR_8, const unsigned char *VAR_9,
                         size_t VAR_10, const unsigned char *VAR_11,
                         size_t VAR_12, int VAR_13)
{
    PROV_CIPHER_CTX *VAR_14 = (PROV_CIPHER_CTX *)VAR_8;
    PROV_AES_WRAP_CTX *VAR_15 = (PROV_AES_WRAP_CTX *)VAR_8;

    VAR_14->enc = VAR_13;
    VAR_14->block = VAR_13 ? (block128_f)VAR_1 : (block128_f)VAR_0;
    if (VAR_14->pad)
        VAR_15->wrapfn = VAR_13 ? VAR_5 : VAR_3;
    else
        VAR_15->wrapfn = VAR_13 ? VAR_4 : VAR_2;

    if (VAR_11 != ((void*)0)) {
        if (!FUNC_3(VAR_14, VAR_11, VAR_12))
            return 0;
    }
    if (VAR_9 != ((void*)0)) {
        if (VAR_10 != VAR_14->keylen) {
           FUNC_2(VAR_6, VAR_7);
           return 0;
        }
        if (VAR_14->enc)
            FUNC_1(VAR_9, VAR_10 * 8, &VAR_15->ks.ks);
        else
            FUNC_0(VAR_9, VAR_10 * 8, &VAR_15->ks.ks);
    }
    return 1;
}
