
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int data; int anyPolicy; } ;
typedef TYPE_1__ X509_POLICY_CACHE ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int (*) (int )) ;

void FUNC_3(X509_POLICY_CACHE *VAR_0)
{
    if (!VAR_0)
        return;
    FUNC_1(VAR_0->anyPolicy);
    FUNC_2(VAR_0->data, FUNC_1);
    FUNC_0(VAR_0);
}
