
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {size_t cChain; TYPE_2__* rgpChain; } ;
struct TYPE_8__ {int world; TYPE_1__ context; } ;
typedef size_t DWORD ;
typedef TYPE_2__ CertificateChain ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(CertificateChain *VAR_0)
{
    DWORD VAR_1;

    FUNC_0(VAR_0);
    for (VAR_1 = 0; VAR_1 < VAR_0->context.cChain; VAR_1++)
        FUNC_1(VAR_0->context.rgpChain[VAR_1]);
    FUNC_3(VAR_0->context.rgpChain);
    FUNC_2(VAR_0->world, 0);
    FUNC_3(VAR_0);
}
