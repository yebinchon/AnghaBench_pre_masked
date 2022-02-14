
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HANDLE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char const*,int *) ;
 scalar_t__ FUNC_2 (char*,int,int ,int *,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 () ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int,char*,char const*,...) ;
 int FUNC_5 (char*,char*,char const*,char*) ;

__attribute__((used)) static void FUNC_6(const char *VAR_6)
{
    BOOL VAR_7;
    char VAR_8[VAR_5];
    HANDLE VAR_9;

    VAR_7 = FUNC_1(VAR_6, ((void*)0));
    FUNC_4(VAR_7, "couldn't create dir '%s', error %d\n", VAR_6, FUNC_3());

    FUNC_5(VAR_8, "%s\\%s", VAR_6, "TesT");
    VAR_9 = FUNC_2(VAR_8, VAR_2|VAR_3, 0, ((void*)0), VAR_0,
                    VAR_1, 0);
    FUNC_4(VAR_9 != VAR_4, "failed to create temp file '%s'\n", VAR_8);
    FUNC_0(VAR_9);
}
