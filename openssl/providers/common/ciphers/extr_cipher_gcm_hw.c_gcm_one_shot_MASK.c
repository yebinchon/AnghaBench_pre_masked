
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* hw; int taglen; } ;
struct TYPE_7__ {int (* cipherfinal ) (TYPE_2__*,unsigned char*) ;int (* cipherupdate ) (TYPE_2__*,unsigned char const*,size_t,unsigned char*) ;int (* aadupdate ) (TYPE_2__*,unsigned char*,size_t) ;} ;
typedef TYPE_2__ PROV_GCM_CTX ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,unsigned char*,size_t) ;
 int FUNC_1 (TYPE_2__*,unsigned char const*,size_t,unsigned char*) ;
 int FUNC_2 (TYPE_2__*,unsigned char*) ;

int FUNC_3(PROV_GCM_CTX *VAR_1, unsigned char *VAR_2, size_t VAR_3,
                 const unsigned char *VAR_4, size_t VAR_5,
                 unsigned char *VAR_6, unsigned char *VAR_7, size_t VAR_8)
{
    int VAR_9 = 0;


    if (!VAR_1->hw->aadupdate(VAR_1, VAR_2, VAR_3))
        goto err;
    if (!VAR_1->hw->cipherupdate(VAR_1, VAR_4, VAR_5, VAR_6))
        goto err;
    VAR_1->taglen = VAR_0;
    if (!VAR_1->hw->cipherfinal(VAR_1, VAR_7))
        goto err;
    VAR_9 = 1;

err:
    return VAR_9;
}
