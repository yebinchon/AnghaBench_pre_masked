
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* ctr128_f ;
typedef int * cbc128_f ;
typedef void* block128_f ;
struct TYPE_6__ {int ks; } ;
struct TYPE_9__ {TYPE_1__ ks; } ;
struct TYPE_7__ {void* ctr; int * cbc; } ;
struct TYPE_8__ {scalar_t__ mode; TYPE_2__ stream; void* block; int enc; int * ks; } ;
typedef TYPE_3__ PROV_CIPHER_CTX ;
typedef TYPE_4__ PROV_AES_CTX ;
typedef int AES_KEY ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (unsigned char const*,size_t,int *) ;
 int FUNC_1 (unsigned char const*,size_t,int *) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_3 (unsigned char const*,size_t,int *) ;
 int FUNC_4 (unsigned char const*,size_t,int *) ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_5 (unsigned char const*,size_t,int *) ;
 int FUNC_6 (unsigned char const*,size_t,int *) ;

__attribute__((used)) static int FUNC_7(PROV_CIPHER_CTX *VAR_21,
                                 const unsigned char *VAR_22, size_t VAR_23)
{
    int VAR_24;
    PROV_AES_CTX *VAR_25 = (PROV_AES_CTX *)VAR_21;
    AES_KEY *VAR_26 = &VAR_25->ks.ks;

    VAR_21->ks = VAR_26;

    if ((VAR_21->mode == VAR_8 || VAR_21->mode == VAR_6)
        && !VAR_21->enc) {
        {
            VAR_24 = FUNC_0(VAR_22, VAR_23 * 8, VAR_26);
            VAR_21->block = (block128_f)VAR_2;
            VAR_21->stream.cbc = (VAR_21->mode == VAR_6)
                              ? (cbc128_f)VAR_0 : ((void*)0);
        }
    } else
    {
        VAR_24 = FUNC_1(VAR_22, VAR_23 * 8, VAR_26);
        VAR_21->block = (block128_f)VAR_3;
        VAR_21->stream.cbc = (VAR_21->mode == VAR_6)
                          ? (cbc128_f)VAR_0 : ((void*)0);




    }

    if (VAR_24 < 0) {
        FUNC_2(VAR_5, VAR_14);
        return 0;
    }

    return 1;
}
