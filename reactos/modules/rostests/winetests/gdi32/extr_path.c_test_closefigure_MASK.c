
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int x; int y; } ;
typedef TYPE_1__ POINT ;
typedef int HDC ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *,int *,int ) ;
 int FUNC_7 (int ,int,int) ;
 int FUNC_8 (int ,int,int,int *) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int,char*,...) ;

__attribute__((used)) static void FUNC_11(void) {
    int VAR_0, VAR_1;
    POINT VAR_2;
    HDC VAR_3 = FUNC_5(0);

    FUNC_8( VAR_3, 100, 100, ((void*)0) );
    FUNC_4( VAR_3, &VAR_2 );
    FUNC_10( VAR_2.x == 100 && VAR_2.y == 100, "wrong pos %d,%d\n", VAR_2.x, VAR_2.y );

    FUNC_1(VAR_3);
    FUNC_4( VAR_3, &VAR_2 );
    FUNC_10( VAR_2.x == 100 && VAR_2.y == 100, "wrong pos %d,%d\n", VAR_2.x, VAR_2.y );
    FUNC_8(VAR_3, 95, 95, ((void*)0));
    FUNC_4( VAR_3, &VAR_2 );
    FUNC_10( VAR_2.x == 95 && VAR_2.y == 95, "wrong pos %d,%d\n", VAR_2.x, VAR_2.y );
    FUNC_7(VAR_3, 95, 0);
    FUNC_4( VAR_3, &VAR_2 );
    FUNC_10( VAR_2.x == 95 && VAR_2.y == 0, "wrong pos %d,%d\n", VAR_2.x, VAR_2.y );
    FUNC_7(VAR_3, 0, 95);
    FUNC_4( VAR_3, &VAR_2 );
    FUNC_10( VAR_2.x == 0 && VAR_2.y == 95, "wrong pos %d,%d\n", VAR_2.x, VAR_2.y );

    FUNC_2(VAR_3);
    FUNC_4( VAR_3, &VAR_2 );
    FUNC_10( VAR_2.x == 0 && VAR_2.y == 95, "wrong pos %d,%d\n", VAR_2.x, VAR_2.y );
    FUNC_3(VAR_3);
    FUNC_4( VAR_3, &VAR_2 );
    FUNC_10( VAR_2.x == 0 && VAR_2.y == 95, "wrong pos %d,%d\n", VAR_2.x, VAR_2.y );
    VAR_0 = FUNC_6(VAR_3, ((void*)0), ((void*)0), 0);

    FUNC_0(VAR_3);

    FUNC_1(VAR_3);
    FUNC_8(VAR_3, 95, 95, ((void*)0));
    FUNC_7(VAR_3, 95, 0);
    FUNC_7(VAR_3, 0, 95);

    FUNC_3(VAR_3);
    VAR_1 = FUNC_6(VAR_3, ((void*)0), ((void*)0), 0);


    FUNC_10(VAR_0 == VAR_1, "Wrong number of points, no point should be added by CloseFigure\n");

    FUNC_9(0, VAR_3);
}
