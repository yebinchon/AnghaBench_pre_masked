
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int TAGREF ;
typedef int TAGID ;
typedef int TAG ;
typedef int * PDB ;
typedef int * HSDB ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char const*,int ) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int *,int) ;
 int * FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int ,int **,int*) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static void FUNC_7(TAGREF VAR_2, const char* VAR_3)
{
    HSDB VAR_4 = FUNC_3(VAR_0, ((void*)0));
    FUNC_1(VAR_4 != ((void*)0), "Expected a valid handle\n");
    if (VAR_4)
    {
        PDB VAR_5 = ((void*)0);
        TAGID VAR_6 = 0xdeadbeef;
        WCHAR VAR_7[256] = { 0 };
        BOOL VAR_8;

        FUNC_0(VAR_7, VAR_3, FUNC_6(VAR_3));

        VAR_8 = FUNC_5(VAR_4, VAR_2, &VAR_5, &VAR_6);
        FUNC_1(VAR_8 == VAR_1, "Expected pSdbTagRefToTagID to succeed\n");
        if (VAR_8)
        {
            TAG VAR_9;
            FUNC_1(VAR_5 != ((void*)0), "Expected pdb to be a valid pointer\n");
            FUNC_1(VAR_6 != 0 && VAR_6 != 0xdeadbeef, "Expected tagid to be a valid tag id, was: 0x%x\n", VAR_6);
            VAR_9 = FUNC_2(VAR_5, VAR_6);
            FUNC_1(VAR_9 == 0x700b, "Expected tag to be 0x700b, was 0x%x\n", (DWORD)VAR_9);
        }

        FUNC_4(VAR_4);
    }
}
