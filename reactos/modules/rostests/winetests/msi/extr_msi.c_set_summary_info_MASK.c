
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int MSIHANDLE ;
typedef int LPSTR ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int *,int,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int,int ,int,int *,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int,char*) ;

__attribute__((used)) static UINT FUNC_5(MSIHANDLE VAR_4, LPSTR VAR_5)
{
    UINT VAR_6;
    MSIHANDLE VAR_7;


    VAR_6 = FUNC_1(VAR_4, ((void*)0), 7, &VAR_7);
    FUNC_4(VAR_6 == VAR_0, "Failed to open summaryinfo\n");

    VAR_6 = FUNC_3(VAR_7, 2, VAR_3, 0, ((void*)0),
                                    "Installation Database");
    FUNC_4(VAR_6 == VAR_0, "Failed to set summary info\n");

    VAR_6 = FUNC_3(VAR_7, 3, VAR_3, 0, ((void*)0),
                                    "Installation Database");
    FUNC_4(VAR_6 == VAR_0, "Failed to set summary info\n");

    VAR_6 = FUNC_3(VAR_7, 4, VAR_3, 0, ((void*)0),
                                    "Wine Hackers");
    FUNC_4(VAR_6 == VAR_0, "Failed to set summary info\n");

    VAR_6 = FUNC_3(VAR_7, 7, VAR_3, 0, ((void*)0),
                                    ";1033");
    FUNC_4(VAR_6 == VAR_0, "Failed to set summary info\n");

    VAR_6 = FUNC_3(VAR_7, VAR_1, VAR_3, 0, ((void*)0),
                                    "{A2078D65-94D6-4205-8DEE-F68D6FD622AA}");
    FUNC_4(VAR_6 == VAR_0, "Failed to set summary info\n");

    VAR_6 = FUNC_3(VAR_7, 14, VAR_2, 100, ((void*)0), ((void*)0));
    FUNC_4(VAR_6 == VAR_0, "Failed to set summary info\n");

    VAR_6 = FUNC_3(VAR_7, 15, VAR_2, 0, ((void*)0), ((void*)0));
    FUNC_4(VAR_6 == VAR_0, "Failed to set summary info\n");

    VAR_6 = FUNC_2(VAR_7);
    FUNC_4(VAR_6 == VAR_0, "Failed to make summary info persist\n");

    VAR_6 = FUNC_0(VAR_7);
    FUNC_4(VAR_6 == VAR_0, "Failed to close suminfo\n");

    return VAR_6;
}
