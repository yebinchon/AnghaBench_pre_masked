
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ block128_f ;
struct TYPE_5__ {int ks; } ;
struct TYPE_7__ {TYPE_1__ ks; } ;
struct TYPE_6__ {int mode; scalar_t__ block; int * ks; scalar_t__ enc; } ;
typedef TYPE_2__ PROV_CIPHER_CTX ;
typedef TYPE_3__ PROV_ARIA_CTX ;
typedef int ARIA_KEY ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (unsigned char const*,size_t,int *) ;
 int FUNC_2 (unsigned char const*,size_t,int *) ;

__attribute__((used)) static int FUNC_3(PROV_CIPHER_CTX *VAR_5,
                                  const unsigned char *VAR_6, size_t VAR_7)
{
    int VAR_8, VAR_9 = VAR_5->mode;
    PROV_ARIA_CTX *VAR_10 = (PROV_ARIA_CTX *)VAR_5;
    ARIA_KEY *VAR_11 = &VAR_10->ks.ks;

    if (VAR_5->enc || (VAR_9 != VAR_2 && VAR_9 != VAR_1))
        VAR_8 = FUNC_2(VAR_6, VAR_7 * 8, VAR_11);
    else
        VAR_8 = FUNC_1(VAR_6, VAR_7 * 8, VAR_11);
    if (VAR_8 < 0) {
        FUNC_0(VAR_0, VAR_3);
        return 0;
    }
    VAR_5->ks = VAR_11;
    VAR_5->block = (block128_f)VAR_4;
    return 1;
}
