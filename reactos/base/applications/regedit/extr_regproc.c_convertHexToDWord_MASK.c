
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int *,int,char*,int,int *,int *) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char*,int *,char*) ;
 int VAR_3 ;

__attribute__((used)) static BOOL FUNC_5(WCHAR* VAR_4, DWORD *VAR_5)
{
    char VAR_6[9];
    char VAR_7;

    FUNC_0(VAR_0, 0, VAR_4, -1, VAR_6, 9, ((void*)0), ((void*)0));
    if (FUNC_3(VAR_4) > 8 || FUNC_4(VAR_6, "%lx%c", VAR_5, &VAR_7) != 1) {
        FUNC_1(VAR_3,"%d: ERROR, invalid hex value\n", FUNC_2());
        return VAR_1;
    }
    return VAR_2;
}
