
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int path ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int CHAR ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int ,int ,int *,int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (int,int *) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (scalar_t__,char const*,int ,int *,int *) ;
 int FUNC_5 (int,char*,int ) ;
 int FUNC_6 (int *,char const*) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static void FUNC_8(const char *VAR_5, const char *VAR_6)
{
    HANDLE VAR_7;
    DWORD VAR_8;
    CHAR VAR_9[VAR_4];

    FUNC_3(sizeof(VAR_9)/sizeof(CHAR), VAR_9);
    FUNC_6(VAR_9, VAR_5);

    VAR_7 = FUNC_1(VAR_9, VAR_2, 0, ((void*)0), VAR_0, VAR_1, ((void*)0));
    FUNC_5(VAR_7 != VAR_3, "CreateFile failed: %u\n", FUNC_2());
    FUNC_4(VAR_7, VAR_6, FUNC_7(VAR_6), &VAR_8, ((void*)0));
    FUNC_0(VAR_7);
}
