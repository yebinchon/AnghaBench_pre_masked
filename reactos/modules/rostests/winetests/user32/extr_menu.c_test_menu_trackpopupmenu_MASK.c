
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPCSTR ;
typedef int LONG_PTR ;
typedef int * HWND ;
typedef int * HMENU ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int *,int ,int,char*) ;
 int VAR_0 ;
 int * FUNC_1 () ;
 int * FUNC_2 (int ,int ,int *,int ,int ,int ,int,int,int *,int *,int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_4 ;
 int FUNC_7 (int,int *,int ,int,int,int *,int *) ;
 int VAR_5 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_10 (int) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_11 (int,char*,...) ;

__attribute__((used)) static void FUNC_12(void)
{
    BOOL VAR_13;
    HMENU VAR_14;
    DWORD VAR_15;
    int VAR_16;
    HWND VAR_17 = FUNC_2(0, (LPCSTR)FUNC_6(VAR_8), ((void*)0),
            VAR_7, VAR_0, VAR_0, 200, 200,
            ((void*)0), ((void*)0), ((void*)0), ((void*)0));
    FUNC_11(VAR_17 != ((void*)0), "CreateWindowEx failed with error %d\n", FUNC_5());
    if (!VAR_17) return;
    FUNC_9( VAR_17, VAR_3, (LONG_PTR)VAR_12);
    for( VAR_16 = 0; VAR_16 < 2; VAR_16++)
    {
        VAR_14 = FUNC_1();
        FUNC_11(VAR_14 != ((void*)0), "CreateMenu failed with error %d\n", FUNC_5());
        if (!VAR_14)
        {
            FUNC_4(VAR_17);
            return;
        }


        FUNC_8(0xdeadbeef);

        VAR_11 = VAR_9 = VAR_10 = 0;
        VAR_13 = FUNC_7( VAR_16, ((void*)0), VAR_6, 100,100, VAR_17, ((void*)0));
        VAR_15 = FUNC_5();
        FUNC_11( !VAR_13, "TrackPopupMenu%s should have failed\n", VAR_16 ? "Ex" : "");
        FUNC_11( VAR_15 == VAR_1
            || FUNC_10 (VAR_15 == 0xdeadbeef)
            || FUNC_10 (VAR_15 == VAR_5)
            ,"TrackPopupMenu%s error got %u expected %u\n",
            VAR_16 ? "Ex" : "", VAR_15, VAR_1);
        FUNC_11( !(VAR_11 || VAR_9 || VAR_10),
                "got unexpected message(s)%s%s%s\n",
                VAR_11 ? " WM_INITMENUPOPUP ": " ",
                VAR_9 ? "WM_INITMENULOOP ": "",
                VAR_10 ? "WM_INITMENU": "");

        FUNC_8(0xdeadbeef);
        VAR_11 = VAR_9 = VAR_10 = 0;
        VAR_13 = FUNC_7( VAR_16, (HMENU)VAR_17, VAR_6, 100,100, VAR_17, ((void*)0));
        VAR_15 = FUNC_5();
        FUNC_11( !VAR_13, "TrackPopupMenu%s should have failed\n", VAR_16 ? "Ex" : "");
        FUNC_11( VAR_15 == VAR_1
            || FUNC_10 (VAR_15 == 0xdeadbeef)
            || FUNC_10 (VAR_15 == VAR_5)
            ,"TrackPopupMenu%s error got %u expected %u\n",
            VAR_16 ? "Ex" : "", VAR_15, VAR_1);
        FUNC_11( !(VAR_11 || VAR_9 || VAR_10),
                "got unexpected message(s)%s%s%s\n",
                VAR_11 ? " WM_INITMENUPOPUP ": " ",
                VAR_9 ? "WM_INITMENULOOP ": "",
                VAR_10 ? "WM_INITMENU": "");


        FUNC_8(0xdeadbeef);
        VAR_11 = VAR_9 = VAR_10 = 0;
        VAR_13 = FUNC_7( VAR_16, VAR_14, VAR_6, 100,100, 0, ((void*)0));
        VAR_15 = FUNC_5();
        FUNC_11( !VAR_13, "TrackPopupMenu%s should have failed\n", VAR_16 ? "Ex" : "");
        FUNC_11( VAR_15 == VAR_2, "TrackPopupMenu%s error got %u\n", VAR_16 ? "Ex" : "", VAR_15 );
        FUNC_11( !(VAR_11 || VAR_9 || VAR_10),
                "got unexpected message(s)%s%s%s\n",
                VAR_11 ? " WM_INITMENUPOPUP ": " ",
                VAR_9 ? "WM_INITMENULOOP ": "",
                VAR_10 ? "WM_INITMENU": "");


        FUNC_8(0xdeadbeef);
        VAR_11 = VAR_9 = VAR_10 = 0;
        VAR_13 = FUNC_7( VAR_16, VAR_14, VAR_6, 100,100, VAR_17, ((void*)0));
        VAR_15 = FUNC_5();
        FUNC_11( VAR_13 == 0, "TrackPopupMenu%s returned %d expected zero\n", VAR_16 ? "Ex" : "", VAR_13);
        FUNC_11( VAR_15 == VAR_5
            || VAR_15 == VAR_1
            || FUNC_10 (VAR_15 == 0xdeadbeef)
            ,"TrackPopupMenu%s error got %u expected %u or %u\n",
            VAR_16 ? "Ex" : "", VAR_15, VAR_5, VAR_1);
        FUNC_11( VAR_11 && VAR_9 && VAR_10,
                "missed expected message(s)%s%s%s\n",
                !VAR_11 ? " WM_INITMENUPOPUP ": " ",
                !VAR_9 ? "WM_INITMENULOOP ": "",
                !VAR_10 ? "WM_INITMENU": "");

        VAR_13 = FUNC_0( VAR_14, VAR_4, 1, "winetest");
        FUNC_11( VAR_13, "AppendMenA has failed!\n");
        FUNC_8(0xdeadbeef);
        VAR_11 = VAR_9 = VAR_10 = 0;
        VAR_13 = FUNC_7( VAR_16, VAR_14, VAR_6, 100,100, VAR_17, ((void*)0));
        VAR_15 = FUNC_5();
        FUNC_11( VAR_13 == 0, "TrackPopupMenu%s returned %d expected zero\n", VAR_16 ? "Ex" : "", VAR_13);
        FUNC_11( VAR_15 == VAR_5
            || VAR_15 == VAR_1
            || FUNC_10 (VAR_15 == 0xdeadbeef)
            ,"TrackPopupMenu%s error got %u expected %u or %u\n",
            VAR_16 ? "Ex" : "", VAR_15, VAR_5, VAR_1);
        FUNC_11( VAR_11 && VAR_9 && VAR_10,
                "missed expected message(s)%s%s%s\n",
                !VAR_11 ? " WM_INITMENUPOPUP ": " ",
                !VAR_9 ? "WM_INITMENULOOP ": "",
                !VAR_10 ? "WM_INITMENU": "");
        FUNC_3(VAR_14);
    }

    FUNC_4(VAR_17);
}
