
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPARAM ;
typedef int * HWND ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int * FUNC_1 (int *,int ) ;
 void* FUNC_2 (int *,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static void FUNC_6( HWND VAR_4)
{


    int VAR_5;
    HWND VAR_6;
    DWORD VAR_7;
    char VAR_8[20];

    for( VAR_6 = FUNC_1( VAR_4, VAR_0);
            VAR_6 ; VAR_6 = FUNC_1( VAR_6, VAR_1)) {
        FUNC_0( VAR_6, VAR_8, 10);
        VAR_8[7] = '\0';
        if( !FUNC_5( VAR_8, "Toolbar")) break;
    }
    FUNC_4( VAR_6 != ((void*)0), "could not get the toolbar control\n");
    VAR_7 = FUNC_2( VAR_6, VAR_2, 0, (LPARAM)"winetestwinetest\0\0");
    FUNC_4( VAR_7 == 0, "addstring returned %d (expected 0)\n", VAR_7);
    VAR_5 = FUNC_2( VAR_6, VAR_3, 0, 0);
    FUNC_4( VAR_5 == 0 || FUNC_3(VAR_5 == 1),
        "Get(Max)TextRows returned %d (expected 0)\n", VAR_5);
}
