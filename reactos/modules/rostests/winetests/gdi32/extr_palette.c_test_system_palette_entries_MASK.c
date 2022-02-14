
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HMETAFILE ;
typedef int HDC ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(void)
{
    HDC VAR_2;
    HDC VAR_3;
    HMETAFILE VAR_4;

    VAR_2 = FUNC_3(0);

    if (!(FUNC_4( VAR_2, VAR_0 ) & VAR_1))
    {
        FUNC_6(VAR_2);
    }
    else
    {
        FUNC_7( "device is palette-based, skipping test\n" );
    }

    FUNC_5( 0, VAR_2 );

    VAR_3 = FUNC_1(((void*)0));

    FUNC_6(VAR_3);

    VAR_4 = FUNC_0(VAR_3);
    FUNC_2(VAR_4);
}
