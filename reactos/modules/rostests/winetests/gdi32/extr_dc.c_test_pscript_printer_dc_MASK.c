
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int query ;
typedef int buf ;
typedef int LPCSTR ;
typedef int HDC ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int,int ,int *) ;
 int FUNC_2 (int ,int,int ,int *,int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,char*) ;

__attribute__((used)) static void FUNC_9(void)
{
    HDC VAR_8;
    char VAR_9[256];
    DWORD VAR_10, VAR_11;

    VAR_8 = FUNC_3(100, VAR_3);

    if (!VAR_8) return;

    if (!FUNC_4(VAR_8))
    {
        FUNC_7("Default printer is not a PostScript device\n");
        FUNC_0( VAR_8 );
        return;
    }

    VAR_10 = VAR_4;
    VAR_11 = FUNC_1(VAR_8, VAR_7, sizeof(VAR_10), (LPCSTR)&VAR_10, ((void*)0));
    FUNC_5(!VAR_11, "GETFACENAME is supported\n");

    VAR_10 = VAR_1;
    VAR_11 = FUNC_1(VAR_8, VAR_7, sizeof(VAR_10), (LPCSTR)&VAR_10, ((void*)0));
    FUNC_5(VAR_11 == 1, "DOWNLOADFACE is not supported\n");

    VAR_10 = VAR_5;
    VAR_11 = FUNC_1(VAR_8, VAR_7, sizeof(VAR_10), (LPCSTR)&VAR_10, ((void*)0));
    FUNC_5(VAR_11 == 1, "OPENCHANNEL is not supported\n");

    VAR_10 = VAR_2;
    VAR_11 = FUNC_1(VAR_8, VAR_7, sizeof(VAR_10), (LPCSTR)&VAR_10, ((void*)0));
    FUNC_5(VAR_11 == 1, "DOWNLOADHEADER is not supported\n");

    VAR_10 = VAR_0;
    VAR_11 = FUNC_1(VAR_8, VAR_7, sizeof(VAR_10), (LPCSTR)&VAR_10, ((void*)0));
    FUNC_5(VAR_11 == 1, "CLOSECHANNEL is not supported\n");

    VAR_10 = VAR_6;
    VAR_11 = FUNC_1(VAR_8, VAR_7, sizeof(VAR_10), (LPCSTR)&VAR_10, ((void*)0));
    FUNC_5(VAR_11 == 1, "POSTSCRIPT_PASSTHROUGH is not supported\n");

    VAR_11 = FUNC_2(VAR_8, VAR_4, 0, ((void*)0), sizeof(VAR_9), VAR_9);
    FUNC_5(VAR_11 == 1, "GETFACENAME failed\n");
    FUNC_8("face name: %s\n", VAR_9);

    FUNC_6(VAR_8);

    FUNC_0(VAR_8);
}
