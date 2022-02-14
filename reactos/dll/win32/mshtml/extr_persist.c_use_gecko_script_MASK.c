
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int url; int secmgr; } ;
typedef TYPE_1__ HTMLOuterWindow ;
typedef int HRESULT ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,scalar_t__*,int ) ;
 int FUNC_2 (char*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static BOOL FUNC_5(HTMLOuterWindow *VAR_2)
{
    DWORD VAR_3;
    HRESULT VAR_4;

    VAR_4 = FUNC_1(VAR_2->secmgr, VAR_2->url, &VAR_3, 0);
    if(FUNC_0(VAR_4)) {
        FUNC_3("Could not map %s to zone: %08x\n", FUNC_4(VAR_2->url), VAR_4);
        return VAR_0;
    }

    FUNC_2("zone %d\n", VAR_3);
    return VAR_3 == VAR_1;
}
