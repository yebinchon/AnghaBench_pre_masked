
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int ,int ,char*) ;
 int FUNC_1 (char const*,int *) ;
 int FUNC_2 () ;
 char* FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,char*) ;
 int VAR_1 ;
 int FUNC_5 (int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (char*,char*,void**,int *) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,char*,int,int) ;

__attribute__((used)) static BOOL FUNC_9(const char *VAR_3)
{
    DWORD VAR_4, VAR_5;
    BOOL VAR_6 = VAR_0;
    char *VAR_7, *VAR_8;

    VAR_4 = FUNC_1(VAR_3, &VAR_5);
    if (!VAR_4) return VAR_0;

    VAR_8 = FUNC_3(FUNC_2(), 0, VAR_4);
    if (!VAR_8) return VAR_0;

    if (FUNC_0(VAR_3, VAR_5, VAR_4, VAR_8))
    {
        char VAR_9[256];

        FUNC_8(VAR_9, "\\StringFileInfo\\%04x%04x\\OriginalFilename", FUNC_5(VAR_1, VAR_2), 1200);
        if (FUNC_6(VAR_8, VAR_9, (void**)&VAR_7, &VAR_4))
            VAR_6 = !FUNC_7("wcodstub.dll", VAR_7);
    }
    FUNC_4(FUNC_2(), 0, VAR_8);

    return VAR_6;
}
