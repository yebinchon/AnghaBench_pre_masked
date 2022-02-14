
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ks; } ;
struct TYPE_7__ {TYPE_1__ ks; } ;
struct TYPE_6__ {int key_set; } ;
typedef TYPE_2__ PROV_GCM_CTX ;
typedef TYPE_3__ PROV_AES_GCM_CTX ;
typedef int AES_KEY ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int ,int ,int *) ;
 scalar_t__ VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int * VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_1(PROV_GCM_CTX *VAR_12, const unsigned char *VAR_13,
                                   size_t VAR_14)
{
    PROV_AES_GCM_CTX *VAR_15 = (PROV_AES_GCM_CTX *)VAR_12;
    AES_KEY *VAR_16 = &VAR_15->ks.ks;
    {




        FUNC_0(VAR_16, VAR_2, VAR_1, ((void*)0));

    }
    VAR_12->key_set = 1;
    return 1;
}
