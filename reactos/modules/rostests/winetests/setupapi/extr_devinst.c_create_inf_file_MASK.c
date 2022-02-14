
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int data ;
typedef int LPCSTR ;
typedef int HANDLE ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int *,int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,char const*,int,int *,int *) ;

__attribute__((used)) static void FUNC_3(LPCSTR VAR_3)
{
    DWORD VAR_4;
    HANDLE VAR_5 = FUNC_1(VAR_3, VAR_2, 0, ((void*)0),
                            VAR_0, VAR_1, ((void*)0));

    static const char VAR_6[] =
        "[Version]\n"
        "Signature=\"$Chicago$\"\n"
        "Class=Bogus\n"
        "ClassGUID={6a55b5a4-3f65-11db-b704-0011955c2bdb}\n"
        "[ClassInstall32]\n"
        "AddReg=BogusClass.NT.AddReg\n"
        "[BogusClass.NT.AddReg]\n"
        "HKR,,,,\"Wine test devices\"\n";

    FUNC_2(VAR_5, VAR_6, sizeof(VAR_6) - 1, &VAR_4, ((void*)0));
    FUNC_0(VAR_5);
}
