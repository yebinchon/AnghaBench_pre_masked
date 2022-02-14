
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_6__ {int grbitEnabledProtocols; int member_0; } ;
struct TYPE_5__ {int grbitProtocol; } ;
typedef TYPE_1__ SecPkgCred_SupportedProtocols ;
typedef scalar_t__ SECURITY_STATUS ;
typedef TYPE_2__ SCHANNEL_CRED ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int *,int *,int ,int *,TYPE_2__*,int *,int *,int *,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ,TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (char*,scalar_t__) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static BOOL FUNC_5(void)
{
    SECURITY_STATUS VAR_13 = VAR_4;

    FUNC_1(&VAR_12);

    if(!VAR_10) {
        SCHANNEL_CRED VAR_14 = {VAR_1};
        SecPkgCred_SupportedProtocols VAR_15;

        VAR_13 = FUNC_0(((void*)0), (WCHAR*)VAR_7, VAR_3, ((void*)0), &VAR_14,
                ((void*)0), ((void*)0), &VAR_9, ((void*)0));
        if(VAR_13 == VAR_4) {
            VAR_13 = FUNC_3(&VAR_9, VAR_2, &VAR_15);
            if(VAR_13 != VAR_4 || (VAR_15.grbitProtocol & VAR_5)) {
                VAR_14.grbitEnabledProtocols = VAR_15.grbitProtocol & ~VAR_5;
                VAR_13 = FUNC_0(((void*)0), (WCHAR*)VAR_7, VAR_3, ((void*)0), &VAR_14,
                       ((void*)0), ((void*)0), &VAR_8, ((void*)0));
                VAR_11 = VAR_13 == VAR_4;
            }
        }

        VAR_10 = VAR_13 == VAR_4;
    }

    FUNC_2(&VAR_12);

    if(VAR_13 != VAR_4) {
        FUNC_4("Failed: %08x\n", VAR_13);
        return VAR_0;
    }

    return VAR_6;
}
