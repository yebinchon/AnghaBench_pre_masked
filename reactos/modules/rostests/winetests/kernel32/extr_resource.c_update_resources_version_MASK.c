
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HANDLE ;
typedef int BOOL ;


 int * FUNC_0 (int ,int) ;
 int FUNC_1 (int *,int) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int FUNC_4 (int *,int ,int ,int,char*,int) ;
 int VAR_2 ;
 int FUNC_5 (int,char*,...) ;

__attribute__((used)) static void FUNC_6( void )
{
    HANDLE VAR_3 = ((void*)0);
    BOOL VAR_4;
    char VAR_5[] = "red and white";

    VAR_3 = FUNC_0( VAR_2, VAR_1 );
    FUNC_5( VAR_3 != ((void*)0), "BeginUpdateResource failed\n");

    if (0)
    {
        VAR_4 = FUNC_4( VAR_3,
                            FUNC_3(0x1230),
                            FUNC_3(0x4567),
                            0xabcd,
                            ((void*)0), 0 );
        FUNC_5( VAR_4 == VAR_0, "UpdateResource failed\n");
    }

    VAR_4 = FUNC_4( VAR_3,
                        FUNC_3(0x1230),
                        FUNC_3(0x4567),
                        0xabcd,
                        VAR_5, sizeof VAR_5 );
    FUNC_5( VAR_4 == VAR_1, "UpdateResource failed: %d\n", FUNC_2());

    VAR_4 = FUNC_1( VAR_3, VAR_0 );
    FUNC_5( VAR_4, "EndUpdateResource failed: %d\n", FUNC_2());
}
