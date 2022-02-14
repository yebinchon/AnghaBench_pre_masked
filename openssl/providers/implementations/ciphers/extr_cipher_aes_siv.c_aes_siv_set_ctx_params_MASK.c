
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ data_type; int data_size; int data; } ;
struct TYPE_12__ {size_t keylen; TYPE_1__* hw; scalar_t__ enc; } ;
struct TYPE_11__ {int (* setspeed ) (TYPE_2__*,int) ;int (* settag ) (TYPE_2__*,int ,int ) ;} ;
typedef TYPE_2__ PROV_AES_SIV_CTX ;
typedef TYPE_3__ OSSL_PARAM ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (TYPE_3__ const*,size_t*) ;
 int FUNC_2 (TYPE_3__ const*,unsigned int*) ;
 TYPE_3__* FUNC_3 (TYPE_3__ const*,int ) ;
 int VAR_5 ;
 int FUNC_4 (TYPE_2__*,int ,int ) ;
 int FUNC_5 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_6(void *VAR_6, const OSSL_PARAM VAR_7[])
{
    PROV_AES_SIV_CTX *VAR_8 = (PROV_AES_SIV_CTX *)VAR_6;
    const OSSL_PARAM *VAR_9;
    unsigned int VAR_10 = 0;

    VAR_9 = FUNC_3(VAR_7, VAR_1);
    if (VAR_9 != ((void*)0)) {
        if (VAR_8->enc)
            return 1;
        if (VAR_9->data_type != VAR_4
            || !VAR_8->hw->settag(VAR_8, VAR_9->data, VAR_9->data_size)) {
            FUNC_0(VAR_0, VAR_5);
            return 0;
        }
    }
    VAR_9 = FUNC_3(VAR_7, VAR_3);
    if (VAR_9 != ((void*)0)) {
        if (!FUNC_2(VAR_9, &VAR_10)) {
            FUNC_0(VAR_0, VAR_5);
            return 0;
        }
        VAR_8->hw->setspeed(VAR_8, (int)VAR_10);
    }
    VAR_9 = FUNC_3(VAR_7, VAR_2);
    if (VAR_9 != ((void*)0)) {
        size_t VAR_11;

        if (!FUNC_1(VAR_9, &VAR_11)) {
            FUNC_0(VAR_0, VAR_5);
            return 0;
        }

        if (VAR_11 != VAR_8->keylen)
            return 0;
    }
    return 1;
}
