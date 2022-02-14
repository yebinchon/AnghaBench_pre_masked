
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WIN32_FIND_DATAA ;
typedef scalar_t__ HANDLE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,int *) ;
 scalar_t__ FUNC_2 (scalar_t__,int *) ;
 int FUNC_3 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 char FUNC_4 () ;
 int FUNC_5 (int,char*) ;

__attribute__((used)) static void FUNC_6(void)
{
    HANDLE VAR_3;
    WIN32_FIND_DATAA VAR_4;
    int VAR_5;
    char VAR_6[5] = "C:\\*";

    VAR_6[0] = FUNC_4();
    VAR_3 = FUNC_1(VAR_6,&VAR_4);
    FUNC_5 ( VAR_3 != VAR_1, "FindFirstFile on C:\\* should succeed\n" );
    while (FUNC_2(VAR_3, &VAR_4))
    {

    }
    FUNC_5 ( FUNC_0(VAR_3) == VAR_2, "Failed to close handle\n");
    VAR_5 = FUNC_3();
    FUNC_5 ( VAR_5 == VAR_0, "GetLastError should return ERROR_NO_MORE_FILES\n");
}
