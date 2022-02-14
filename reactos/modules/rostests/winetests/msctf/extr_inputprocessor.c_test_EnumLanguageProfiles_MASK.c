
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ langid; int guidProfile; int catid; int clsid; } ;
typedef TYPE_1__ TF_LANGUAGEPROFILE ;
typedef int IEnumTfLanguageProfiles ;
typedef scalar_t__ HRESULT ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *,int,TYPE_1__*,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,int **) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int,char*,...) ;

__attribute__((used)) static void FUNC_7(void)
{
    BOOL VAR_9 = VAR_2;
    IEnumTfLanguageProfiles *VAR_10;
    HRESULT VAR_11;

    VAR_11 = FUNC_2(VAR_8, VAR_7, ((void*)0));
    FUNC_6(VAR_11 == VAR_1, "EnumLanguageProfiles failed: %x\n", VAR_11);

    if (FUNC_4(FUNC_2(VAR_8,VAR_7,&VAR_10)))
    {
        TF_LANGUAGEPROFILE VAR_12;
        while (FUNC_0(VAR_10,1,&VAR_12,((void*)0))==VAR_5)
        {
            if (FUNC_3(&VAR_12.clsid,&VAR_0))
            {
                VAR_9 = VAR_6;
                FUNC_6(VAR_12.langid == VAR_7, "LangId Incorrect\n");
                FUNC_6(FUNC_3(&VAR_12.catid,&VAR_4) ||
                   FUNC_5(FUNC_3(&VAR_12.catid,&VAR_3) ), "CatId Incorrect\n");
                FUNC_6(FUNC_3(&VAR_12.guidProfile,&VAR_0), "guidProfile Incorrect\n");
            }
        }
        FUNC_1(VAR_10);
    }
    FUNC_6(VAR_9,"Registered text service not found\n");
}
