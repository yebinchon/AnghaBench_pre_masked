
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hRoot; int hWorld; int ref; } ;
typedef TYPE_1__ CertificateChainEngine ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(CertificateChainEngine *VAR_0)
{
    if(!VAR_0 || FUNC_2(&VAR_0->ref))
        return;

    FUNC_0(VAR_0->hWorld, 0);
    FUNC_0(VAR_0->hRoot, 0);
    FUNC_1(VAR_0);
}
