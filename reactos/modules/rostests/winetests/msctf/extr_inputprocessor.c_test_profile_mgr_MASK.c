
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ITfInputProcessorProfileMgr ;
typedef int IEnumTfInputProcessorProfiles ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int ,int **) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int *,void**) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int,char*,scalar_t__) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(void)
{
    IEnumTfInputProcessorProfiles *VAR_3;
    ITfInputProcessorProfileMgr *VAR_4;
    HRESULT VAR_5;

    VAR_5 = FUNC_3(VAR_2, &VAR_0, (void**)&VAR_4);
    if (VAR_5 != VAR_1)
    {
        FUNC_5("ITfInputProcessorProfileMgr is not supported.\n");
        return;
    }
    FUNC_4(VAR_5 == VAR_1, "Could not get ITfInputProcessorProfileMgr iface: %08x\n", VAR_5);

    VAR_5 = FUNC_1(VAR_4, 0, &VAR_3);
    FUNC_4(VAR_5 == VAR_1, "EnumProfiles failed: %08x\n", VAR_5);

    FUNC_0(VAR_3);

    FUNC_2(VAR_4);
}
