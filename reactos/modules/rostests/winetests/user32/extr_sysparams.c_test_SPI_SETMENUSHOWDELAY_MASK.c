
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vals ;
typedef int UINT ;
typedef int BOOL ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int const,int*,int) ;
 int FUNC_3 (int,int const,char*,char*) ;
 int FUNC_4 (int ,char*,unsigned int,int ,...) ;
 int FUNC_5 (char*,char*,int const) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,int ,char*) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void FUNC_10( void )
{
    BOOL VAR_6;
    UINT VAR_7;
    const UINT VAR_8[]={0,32767};
    unsigned int VAR_9;

    FUNC_9("testing SPI_{GET,SET}MENUSHOWDELAY\n");
    FUNC_1(0xdeadbeef);
    VAR_6=FUNC_2( VAR_2, 0, &VAR_7, 0 );


    if (!FUNC_7(VAR_6,"SPI_{GET,SET}MENUSHOWDELAY"))
        return;

    for (VAR_9=0;VAR_9<sizeof(VAR_8)/sizeof(*VAR_8);VAR_9++)
    {
        UINT VAR_10;
        char VAR_11[10];

        VAR_6=FUNC_2( VAR_3, VAR_8[VAR_9], 0,
                               VAR_1 | VAR_0 );
        if (!FUNC_7(VAR_6,"SPI_SETMENUSHOWDELAY")) return;
        FUNC_4(VAR_6, "%d: rc=%d err=%d\n", VAR_9, VAR_6, FUNC_0());
        FUNC_6( VAR_3, 0 );
        FUNC_5( VAR_11, "%d", VAR_8[VAR_9] );
        FUNC_8( VAR_4,
                      VAR_5, VAR_11 );

        FUNC_2( VAR_2, 0, &VAR_10, 0 );
        FUNC_4(VAR_6, "%d: rc=%d err=%d\n", VAR_9, VAR_6, FUNC_0());
        FUNC_3( VAR_10, VAR_8[VAR_9], "SPI_{GET,SET}MENUSHOWDELAY", "%d" );
    }

    VAR_6=FUNC_2( VAR_3, VAR_7, 0,
                              VAR_1 );
    FUNC_4(VAR_6, "***warning*** failed to restore the original value: rc=%d err=%d\n", VAR_6, FUNC_0());
}
