
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WIN32_FIND_DATAA ;
typedef scalar_t__ HANDLE ;
typedef int FILE ;
typedef int DATA2 ;
typedef int DATA ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,int *) ;
 int FUNC_2 (char*,char*,int ,char*) ;
 int FUNC_3 (int,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char*,char*) ;
 size_t FUNC_6 (char*,int,int,int *) ;
 size_t FUNC_7 (char*,int,int,int *) ;
 int FUNC_8 (int,char*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(void)
{
    char VAR_2 [] = {26, 't', 'e', 's' ,'t'};
    char VAR_3 [100];
    char VAR_4[VAR_1];
    char VAR_5[VAR_1];
    FILE* VAR_6;
    size_t VAR_7;
    size_t VAR_8;
    WIN32_FIND_DATAA VAR_9;
    HANDLE VAR_10;

    FUNC_3(VAR_1, VAR_4);
    FUNC_2(VAR_4, "", 0, VAR_5);

    VAR_6 = FUNC_5(VAR_5, "w+bDT");
    VAR_7 = FUNC_7(VAR_2, 1, sizeof(VAR_2), VAR_6);
    FUNC_9(VAR_6);
    VAR_8 = FUNC_6(VAR_3, 1, sizeof(VAR_3), VAR_6);
    FUNC_4(VAR_6);

    FUNC_8 (VAR_8 == VAR_7 && VAR_8 == sizeof(VAR_2),
        "fopen file mode 'T' wrongly interpreted as 't'\n" );

    VAR_10 = FUNC_1(VAR_5, &VAR_9);

    FUNC_8 (VAR_10 == VAR_0, "file wasn't deleted when closed.\n" );

    if (VAR_10 != VAR_0) FUNC_0(VAR_10);
}
