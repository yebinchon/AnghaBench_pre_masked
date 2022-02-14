
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int * cbc128_f ;
typedef void* block128_f ;
struct TYPE_6__ {int ks; } ;
struct TYPE_9__ {TYPE_1__ ks; } ;
struct TYPE_7__ {int * cbc; } ;
struct TYPE_8__ {int mode; TYPE_2__ stream; void* block; scalar_t__ enc; int * ks; } ;
typedef TYPE_3__ PROV_CIPHER_CTX ;
typedef TYPE_4__ PROV_CAMELLIA_CTX ;
typedef int CAMELLIA_KEY ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (unsigned char const*,size_t,int *) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_2(PROV_CIPHER_CTX *VAR_7,
                                      const unsigned char *VAR_8, size_t VAR_9)
{
    int VAR_10, VAR_11 = VAR_7->mode;
    PROV_CAMELLIA_CTX *VAR_12 = (PROV_CAMELLIA_CTX *)VAR_7;
    CAMELLIA_KEY *VAR_13 = &VAR_12->ks.ks;

    VAR_7->ks = VAR_13;
    VAR_10 = FUNC_0(VAR_8, VAR_9 * 8, VAR_13);
    if (VAR_10 < 0) {
        FUNC_1(VAR_3, VAR_6);
        return 0;
    }
    if (VAR_7->enc || (VAR_11 != VAR_5 && VAR_11 != VAR_4)) {
        VAR_7->block = (block128_f) VAR_2;
        VAR_7->stream.cbc = VAR_11 == VAR_4 ?
            (cbc128_f) VAR_0 : ((void*)0);
    } else {
        VAR_7->block = (block128_f) VAR_1;
        VAR_7->stream.cbc = VAR_11 == VAR_4 ?
            (cbc128_f) VAR_0 : ((void*)0);
    }
    return 1;
}
