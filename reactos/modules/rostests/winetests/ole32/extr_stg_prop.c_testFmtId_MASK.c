
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fmtid ;
typedef int WCHAR ;
typedef scalar_t__ HRESULT ;
typedef int FMTID ;


 int FUNC_0 (int*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*,int*,int) ;
 int FUNC_3 (int,char*,...) ;
 scalar_t__ FUNC_4 (int*,int*) ;
 scalar_t__ FUNC_5 (int*,int*) ;

__attribute__((used)) static void FUNC_6(void)
{
    WCHAR VAR_7[] = { 5,'S','u','m','m','a','r','y',
        'I','n','f','o','r','m','a','t','i','o','n',0 };
    WCHAR VAR_8[] = { 5,'D','o','c','u','m','e','n','t',
        'S','u','m','m','a','r','y','I','n','f','o','r','m','a','t','i','o','n',
        0 };
    WCHAR VAR_9[] = { 5,'0','j','a','a','a','a','a',
        'a','A','a','a','a','a','a','d','a','A','a','a','a','a','a','a','a','G',
        'c',0 };
    WCHAR VAR_10[32];
    FMTID VAR_11;
    HRESULT VAR_12;

    if (&FUNC_4) {
    VAR_12 = FUNC_4(((void*)0), VAR_10);
    FUNC_3(VAR_12 == VAR_0, "Expected E_INVALIDARG, got 0x%08x\n", VAR_12);
    VAR_12 = FUNC_4(&VAR_2, ((void*)0));
    FUNC_3(VAR_12 == VAR_0, "Expected E_INVALIDARG, got 0x%08x\n", VAR_12);
    VAR_12 = FUNC_4(&VAR_2, VAR_10);
    FUNC_3(VAR_12 == VAR_6, "FmtIdToPropStgName failed: 0x%08x\n", VAR_12);
    FUNC_3(!FUNC_2(VAR_10, VAR_7, (FUNC_1(VAR_7) + 1) *
     sizeof(WCHAR)), "Got wrong name for FMTID_SummaryInformation\n");
    VAR_12 = FUNC_4(&VAR_1, VAR_10);
    FUNC_3(VAR_12 == VAR_6, "FmtIdToPropStgName failed: 0x%08x\n", VAR_12);
    FUNC_3(!FUNC_2(VAR_10, VAR_8, (FUNC_1(VAR_8) + 1) *
     sizeof(WCHAR)), "Got wrong name for FMTID_DocSummaryInformation\n");
    VAR_12 = FUNC_4(&VAR_3, VAR_10);
    FUNC_3(VAR_12 == VAR_6, "FmtIdToPropStgName failed: 0x%08x\n", VAR_12);
    FUNC_3(!FUNC_2(VAR_10, VAR_8, (FUNC_1(VAR_8) + 1) *
     sizeof(WCHAR)), "Got wrong name for FMTID_DocSummaryInformation\n");
    VAR_12 = FUNC_4(&VAR_4, VAR_10);
    FUNC_3(VAR_12 == VAR_6, "FmtIdToPropStgName failed: 0x%08x\n", VAR_12);
    FUNC_3(!FUNC_2(VAR_10, VAR_9, (FUNC_1(VAR_9) + 1) *
     sizeof(WCHAR)), "Got wrong name for IID_IPropertySetStorage\n");
    }

    if(&FUNC_5) {

    VAR_12 = FUNC_5(((void*)0), ((void*)0));
    FUNC_3(VAR_12 == VAR_0, "Expected E_INVALIDARG, got 0x%08x\n", VAR_12);
    VAR_12 = FUNC_5(((void*)0), &VAR_11);
    FUNC_3(VAR_12 == VAR_5, "Expected STG_E_INVALIDNAME, got 0x%08x\n",
     VAR_12);
    VAR_12 = FUNC_5(VAR_8, ((void*)0));
    FUNC_3(VAR_12 == VAR_0, "Expected E_INVALIDARG, got 0x%08x\n", VAR_12);

    VAR_12 = FUNC_5(VAR_7, &VAR_11);
    FUNC_3(VAR_12 == VAR_6, "PropStgNameToFmtId failed: 0x%08x\n", VAR_12);
    FUNC_3(!FUNC_2(&VAR_11, &VAR_2, sizeof(VAR_11)),
     "Got unexpected FMTID, expected FMTID_SummaryInformation\n");
    VAR_12 = FUNC_5(VAR_8, &VAR_11);
    FUNC_3(VAR_12 == VAR_6, "PropStgNameToFmtId failed: 0x%08x\n", VAR_12);
    FUNC_3(!FUNC_2(&VAR_11, &VAR_1, sizeof(VAR_11)),
     "Got unexpected FMTID, expected FMTID_DocSummaryInformation\n");

    VAR_12 = FUNC_5(VAR_9, &VAR_11);
    FUNC_3(VAR_12 == VAR_6, "PropStgNameToFmtId failed: 0x%08x\n", VAR_12);
    FUNC_3(!FUNC_2(&VAR_11, &VAR_4, sizeof(VAR_11)),
     "Got unexpected FMTID, expected IID_IPropertySetStorage\n");

    FUNC_0(VAR_8 + 1);
    VAR_12 = FUNC_5(VAR_8, &VAR_11);
    FUNC_3(VAR_12 == VAR_6, "PropStgNameToFmtId failed: 0x%08x\n", VAR_12);
    FUNC_3(!FUNC_2(&VAR_11, &VAR_1, sizeof(VAR_11)),
     "Got unexpected FMTID, expected FMTID_DocSummaryInformation\n");
    FUNC_0(VAR_9 + 1);
    VAR_12 = FUNC_5(VAR_9, &VAR_11);
    FUNC_3(VAR_12 == VAR_6, "PropStgNameToFmtId failed: 0x%08x\n", VAR_12);
    FUNC_3(!FUNC_2(&VAR_11, &VAR_4, sizeof(VAR_11)),
     "Got unexpected FMTID, expected IID_IPropertySetStorage\n");
    }
}
