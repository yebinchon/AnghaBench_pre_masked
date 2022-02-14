
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPCSTR ;
typedef int * HRSRC ;
typedef char const* HRESULT ;
typedef int DWORD ;
typedef int * BSTR ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int *,char const*,int ) ;
 char* FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int ,char const*,int ,int *,int ) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 char const* VAR_3 ;
 int FUNC_5 (int *,int *) ;
 int * FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (int,char*,char const*) ;
 char* FUNC_9 (int ,int *,int *) ;
 int VAR_6 ;
 char const* VAR_7 ;

__attribute__((used)) static void FUNC_10(const char *VAR_8)
{
    const char *VAR_9;
    DWORD VAR_10, VAR_11;
    BSTR VAR_12;
    HRSRC VAR_13;
    HRESULT VAR_14;

    VAR_6 = VAR_1;
    VAR_7 = VAR_8;

    VAR_13 = FUNC_1(((void*)0), VAR_8, (LPCSTR)40);
    FUNC_8(VAR_13 != ((void*)0), "Could not find resource %s\n", VAR_8);

    VAR_10 = FUNC_5(((void*)0), VAR_13);
    VAR_9 = FUNC_2(((void*)0), VAR_13);

    VAR_11 = FUNC_3(VAR_0, 0, VAR_9, VAR_10, ((void*)0), 0);
    VAR_12 = FUNC_6(((void*)0), VAR_11);
    FUNC_3(VAR_0, 0, VAR_9, VAR_10, VAR_12, VAR_11);

    FUNC_4(VAR_4);
    FUNC_4(VAR_5);
    VAR_14 = FUNC_9(VAR_2, VAR_12, ((void*)0));
    FUNC_0(VAR_4);
    FUNC_0(VAR_5);

    FUNC_8(VAR_14 == VAR_3, "parse_script failed: %08x\n", VAR_14);
    FUNC_7(VAR_12);
}
