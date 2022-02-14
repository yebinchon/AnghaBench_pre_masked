
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HDC ;
typedef int COLORREF ;


 int * FUNC_0 (char*,int *,int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int,char*,...) ;

__attribute__((used)) static void FUNC_10(void)
{
    HDC VAR_2 = FUNC_0("DISPLAY", ((void*)0), ((void*)0), ((void*)0));
    COLORREF VAR_3;
    int VAR_4;

    FUNC_9( VAR_2 != ((void*)0), "CreateDC failed\n" );
    VAR_3 = FUNC_5( VAR_2, 0x12345678 );
    FUNC_9( VAR_3 == 0xffffff, "initial color %08x\n", VAR_3 );
    VAR_3 = FUNC_2( VAR_2 );
    FUNC_9( VAR_3 == 0x12345678, "wrong color %08x\n", VAR_3 );
    VAR_3 = FUNC_5( VAR_2, 0xffffffff );
    FUNC_9( VAR_3 == 0x12345678, "wrong color %08x\n", VAR_3 );
    VAR_3 = FUNC_2( VAR_2 );
    FUNC_9( VAR_3 == 0xffffffff, "wrong color %08x\n", VAR_3 );
    VAR_3 = FUNC_5( VAR_2, 0 );
    FUNC_9( VAR_3 == 0xffffffff, "wrong color %08x\n", VAR_3 );
    VAR_3 = FUNC_2( VAR_2 );
    FUNC_9( VAR_3 == 0, "wrong color %08x\n", VAR_3 );

    VAR_3 = FUNC_8( VAR_2, 0xffeeddcc );
    FUNC_9( VAR_3 == 0, "initial color %08x\n", VAR_3 );
    VAR_3 = FUNC_4( VAR_2 );
    FUNC_9( VAR_3 == 0xffeeddcc, "wrong color %08x\n", VAR_3 );
    VAR_3 = FUNC_8( VAR_2, 0xffffffff );
    FUNC_9( VAR_3 == 0xffeeddcc, "wrong color %08x\n", VAR_3 );
    VAR_3 = FUNC_4( VAR_2 );
    FUNC_9( VAR_3 == 0xffffffff, "wrong color %08x\n", VAR_3 );
    VAR_3 = FUNC_8( VAR_2, 0 );
    FUNC_9( VAR_3 == 0xffffffff, "wrong color %08x\n", VAR_3 );
    VAR_3 = FUNC_4( VAR_2 );
    FUNC_9( VAR_3 == 0, "wrong color %08x\n", VAR_3 );

    VAR_4 = FUNC_3( VAR_2 );
    FUNC_9( VAR_4 == 0, "initial extra %d\n", VAR_4 );
    FUNC_7( VAR_2, 123 );
    VAR_4 = FUNC_3( VAR_2 );
    FUNC_9( VAR_4 == 123, "initial extra %d\n", VAR_4 );
    FUNC_6( VAR_2, VAR_0 );
    VAR_4 = FUNC_3( VAR_2 );
    FUNC_9( VAR_4 == 123, "initial extra %d\n", VAR_4 );
    FUNC_6( VAR_2, VAR_1 );
    VAR_4 = FUNC_3( VAR_2 );
    FUNC_9( VAR_4 == 123, "initial extra %d\n", VAR_4 );

    FUNC_1( VAR_2 );
}
