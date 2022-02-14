
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int manifest_path ;
typedef int WCHAR ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int ,int ,int *,int ,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 (int,int *) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,int ,char const*,int,int *,int) ;
 int FUNC_5 (scalar_t__,char const*,int ,int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int,char*,int ) ;
 int FUNC_8 (char const*) ;

__attribute__((used)) static void FUNC_9(const char *VAR_6, const char *VAR_7)
{
    WCHAR VAR_8[VAR_5], VAR_9[VAR_5];
    HANDLE VAR_10;
    DWORD VAR_11;

    FUNC_4( VAR_0, 0, VAR_6, -1, VAR_8, VAR_5 );

    FUNC_3(sizeof(VAR_9)/sizeof(WCHAR), VAR_9);
    FUNC_6(VAR_9, VAR_8);

    VAR_10 = FUNC_1(VAR_9, VAR_3, 0, ((void*)0), VAR_1, VAR_2, ((void*)0));
    FUNC_7(VAR_10 != VAR_4, "CreateFile failed: %u\n", FUNC_2());
    FUNC_5(VAR_10, VAR_7, FUNC_8(VAR_7), &VAR_11, ((void*)0));
    FUNC_0(VAR_10);
}
