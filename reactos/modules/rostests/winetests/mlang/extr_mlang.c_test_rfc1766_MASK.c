
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_3__ {int wszRfc1766; int lcid; int wszLocaleName; } ;
typedef TYPE_1__ RFC1766INFO ;
typedef int IMultiLanguage2 ;
typedef int IEnumRfc1766 ;
typedef scalar_t__ HRESULT ;
typedef int BSTR ;


 scalar_t__ FUNC_0 (int *,int,TYPE_1__*,int*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ,int **) ;
 scalar_t__ FUNC_3 (int *,int ,int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,char*,...) ;
 int * FUNC_6 (int ,int ) ;
 int FUNC_7 (char*,int ,int ,int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(IMultiLanguage2 *VAR_2)
{
    IEnumRfc1766 *VAR_3;
    RFC1766INFO VAR_4;
    ULONG VAR_5;
    HRESULT VAR_6;
    BSTR VAR_7;

    VAR_6 = FUNC_2(VAR_2, VAR_0, &VAR_3);
    FUNC_5(VAR_6 == VAR_1, "IMultiLanguage2_EnumRfc1766 error %08x\n", VAR_6);

    while (1)
    {
        VAR_6 = FUNC_0(VAR_3, 1, &VAR_4, &VAR_5);
        if (VAR_6 != VAR_1) break;






        FUNC_5(VAR_5 == 1, "couldn't fetch 1 RFC1766INFO structure\n");


        VAR_6 = FUNC_3(VAR_2, VAR_4.lcid, &VAR_7);
        FUNC_5(VAR_6 == VAR_1, "Expected S_OK, got %08x\n", VAR_6);



        FUNC_5(FUNC_6(VAR_4.wszRfc1766, VAR_7) != ((void*)0),
           "Expected matching locale names\n");

        FUNC_4(VAR_7);
    }
    FUNC_1(VAR_3);
}
