
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int cmd; int fVirt; int key; } ;
typedef int * HACCEL ;
typedef TYPE_1__ ACCEL ;


 int FUNC_0 (int *,TYPE_1__*,int) ;
 int * FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int *) ;
 void* VAR_0 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int,int) ;
 int FUNC_5 (int,char*,...) ;

__attribute__((used)) static void FUNC_6(void)
{
    ACCEL VAR_1[2], VAR_2[2];
    HACCEL VAR_3;
    int VAR_4;

    VAR_1[0].cmd = 0;
    VAR_1[0].fVirt = 0;
    VAR_1[0].key = 0;

    VAR_1[1].cmd = 0;
    VAR_1[1].fVirt = 0;
    VAR_1[1].key = 0;







    VAR_3 = FUNC_1( &VAR_1[0], 0 );
    FUNC_5( !VAR_3 || FUNC_3(VAR_3 != ((void*)0)), "fail\n");
    if (!VAR_3) FUNC_5( !FUNC_2( VAR_3 ), "destroy failed\n");


    VAR_3 = FUNC_1( &VAR_1[0], 1 );
    FUNC_5( VAR_3 != ((void*)0) , "fail\n");
    FUNC_5( 1 == FUNC_0( VAR_3, VAR_2, 1 ), "copy failed\n");
    FUNC_5( FUNC_2( VAR_3 ), "destroy failed\n");


    VAR_3 = FUNC_1( &VAR_1[0], 2);
    FUNC_5( VAR_3 != ((void*)0) , "fail\n");
    VAR_4 = FUNC_0( VAR_3, ((void*)0), 100 );
    FUNC_5( VAR_4 == 2, "copy null failed %d\n", VAR_4);
    VAR_4 = FUNC_0( VAR_3, ((void*)0), 0 );
    FUNC_5( VAR_4 == 2, "copy null failed %d\n", VAR_4);
    VAR_4 = FUNC_0( VAR_3, ((void*)0), 1 );
    FUNC_5( VAR_4 == 2, "copy null failed %d\n", VAR_4);
    FUNC_5( 1 == FUNC_0( VAR_3, VAR_2, 1 ), "copy 1 failed\n");
    FUNC_5( 2 == FUNC_0( VAR_3, VAR_2, 2 ), "copy 2 failed\n");
    FUNC_5( FUNC_2( VAR_3 ), "destroy failed\n");



    VAR_1[0].key = 0x20;
    VAR_1[1].key = 0x20;
    VAR_3 = FUNC_1( &VAR_1[0], 2);
    FUNC_5( VAR_3 != ((void*)0) , "fail\n");
    FUNC_5( 2 == FUNC_0( VAR_3, VAR_2, 2 ), "copy 2 failed\n");
    FUNC_5( FUNC_2( VAR_3 ), "destroy failed\n");



    VAR_1[0].fVirt = VAR_0;
    VAR_1[0].key = 0x40;
    VAR_1[1].fVirt = VAR_0;
    VAR_1[1].key = 0x40;
    VAR_3 = FUNC_1( &VAR_1[0], 2);
    FUNC_5( VAR_3 != ((void*)0) , "fail\n");
    FUNC_5( 2 == FUNC_0( VAR_3, VAR_2, 2 ), "copy 2 failed\n");

    FUNC_5( FUNC_2( VAR_3 ), "destroy failed\n");


    VAR_1[0].fVirt = VAR_0;
    VAR_3 = FUNC_1( &VAR_1[0], 1);
    FUNC_5( VAR_3 != ((void*)0) , "fail\n");
    FUNC_5( 1 == FUNC_0( VAR_3, VAR_2, 2 ), "copy 2 failed\n");

    FUNC_5( FUNC_2( VAR_3 ), "destroy failed\n");


    VAR_1[0].cmd = 0xffff;
    VAR_1[0].fVirt = 0xff;
    VAR_1[0].key = 0xffff;
    VAR_3 = FUNC_1( &VAR_1[0], 1);
    FUNC_5( VAR_3 != ((void*)0) , "fail\n");
    FUNC_5( 1 == FUNC_0( VAR_3, VAR_2, 1 ), "copy 1 failed\n");

    FUNC_5( VAR_2[0].cmd == VAR_1[0].cmd, "cmd modified\n");
    FUNC_5( VAR_2[0].fVirt == (VAR_1[0].fVirt&0x7f), "fVirt not modified\n");
    FUNC_5( VAR_2[0].key == VAR_1[0].key, "key modified\n");
    FUNC_5( FUNC_2( VAR_3 ), "destroy failed\n");


    FUNC_4( VAR_1, 0xff, sizeof VAR_1 );
    VAR_3 = FUNC_1( &VAR_1[0], 2);
    FUNC_5( VAR_3 != ((void*)0) , "fail\n");
    VAR_4 = FUNC_0( VAR_3, VAR_2, 2 );
    FUNC_5( VAR_4 == 2, "copy 2 failed %d\n", VAR_4);

    FUNC_5( VAR_2[0].cmd == VAR_1[0].cmd, "cmd modified\n");
    FUNC_5( VAR_2[0].fVirt == (VAR_1[0].fVirt&0x7f), "fVirt not modified\n");
    FUNC_5( VAR_2[0].key == VAR_1[0].key, "key modified\n");
    if (VAR_4 == 2)
    {
        FUNC_5( VAR_2[1].cmd == VAR_1[1].cmd, "cmd modified\n");
        FUNC_5( VAR_2[1].fVirt == (VAR_1[1].fVirt&0x7f), "fVirt not modified\n");
        FUNC_5( VAR_2[1].key == VAR_1[1].key, "key modified\n");
    }
    FUNC_5( FUNC_2( VAR_3 ), "destroy failed\n");
}
