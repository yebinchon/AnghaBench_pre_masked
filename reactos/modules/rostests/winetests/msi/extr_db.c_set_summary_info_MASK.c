
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int MSIHANDLE ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int *,int,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int,int ,int,int *,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int,char*) ;

__attribute__((used)) static UINT FUNC_5(MSIHANDLE VAR_3)
{
    UINT VAR_4;
    MSIHANDLE VAR_5;


    VAR_4 = FUNC_1(VAR_3, ((void*)0), 7, &VAR_5);
    FUNC_4( VAR_4 == VAR_0 , "Failed to open summaryinfo\n" );

    VAR_4 = FUNC_3(VAR_5,2, VAR_2, 0,((void*)0),
                        "Installation Database");
    FUNC_4( VAR_4 == VAR_0 , "Failed to set summary info\n" );

    VAR_4 = FUNC_3(VAR_5,3, VAR_2, 0,((void*)0),
                        "Installation Database");
    FUNC_4( VAR_4 == VAR_0 , "Failed to set summary info\n" );

    VAR_4 = FUNC_3(VAR_5,4, VAR_2, 0,((void*)0),
                        "Wine Hackers");
    FUNC_4( VAR_4 == VAR_0 , "Failed to set summary info\n" );

    VAR_4 = FUNC_3(VAR_5,7, VAR_2, 0,((void*)0),
                    ";1033,2057");
    FUNC_4( VAR_4 == VAR_0 , "Failed to set summary info\n" );

    VAR_4 = FUNC_3(VAR_5,9, VAR_2, 0,((void*)0),
                    "{913B8D18-FBB6-4CAC-A239-C74C11E3FA74}");
    FUNC_4( VAR_4 == VAR_0 , "Failed to set summary info\n" );

    VAR_4 = FUNC_3(VAR_5, 14, VAR_1, 100, ((void*)0), ((void*)0));
    FUNC_4( VAR_4 == VAR_0 , "Failed to set summary info\n" );

    VAR_4 = FUNC_3(VAR_5, 15, VAR_1, 0, ((void*)0), ((void*)0));
    FUNC_4( VAR_4 == VAR_0 , "Failed to set summary info\n" );

    VAR_4 = FUNC_2(VAR_5);
    FUNC_4( VAR_4 == VAR_0 , "Failed to make summary info persist\n" );

    VAR_4 = FUNC_0( VAR_5);
    FUNC_4( VAR_4 == VAR_0 , "Failed to close suminfo\n" );

    return VAR_4;
}
