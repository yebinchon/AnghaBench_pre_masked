
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ks; } ;
struct TYPE_4__ {TYPE_1__ ks; } ;
typedef int PROV_GCM_CTX ;
typedef TYPE_2__ PROV_ARIA_GCM_CTX ;
typedef int ARIA_KEY ;


 int FUNC_0 (int *,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(PROV_GCM_CTX *VAR_2, const unsigned char *VAR_3,
                            size_t VAR_4)
{
    PROV_ARIA_GCM_CTX *VAR_5 = (PROV_ARIA_GCM_CTX *)VAR_2;
    ARIA_KEY *VAR_6 = &VAR_5->ks.ks;

    FUNC_0(VAR_6, VAR_1, VAR_0, ((void*)0));
    return 1;
}
