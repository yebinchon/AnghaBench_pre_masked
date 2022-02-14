
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t ULONG ;
struct TYPE_6__ {size_t wRPCID; int Name; } ;
typedef TYPE_1__ SecPkgInfoW ;
typedef scalar_t__ SECURITY_STATUS ;
typedef int RPC_STATUS ;


 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ FUNC_1 (size_t*,TYPE_1__**) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (char*,int ,size_t) ;
 int FUNC_4 (char*,size_t) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static RPC_STATUS FUNC_6(ULONG VAR_4, SecPkgInfoW **VAR_5, SecPkgInfoW **VAR_6)
{
    SECURITY_STATUS VAR_7;
    SecPkgInfoW *VAR_8;
    ULONG VAR_9;
    ULONG VAR_10;

    VAR_7 = FUNC_1(&VAR_9, &VAR_8);
    if (VAR_7 != VAR_3)
    {
        FUNC_0("EnumerateSecurityPackagesW failed with error 0x%08x\n", VAR_7);
        return VAR_1;
    }

    for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
        if (VAR_8[VAR_10].wRPCID == VAR_4)
            break;

    if (VAR_10 == VAR_9)
    {
        FUNC_4("unsupported AuthnSvc %u\n", VAR_4);
        FUNC_2(VAR_8);
        return VAR_2;
    }

    FUNC_3("found package %s for service %u\n", FUNC_5(VAR_8[VAR_10].Name), VAR_4);
    *VAR_5 = VAR_8;
    *VAR_6 = VAR_8 + VAR_10;
    return VAR_0;
}
