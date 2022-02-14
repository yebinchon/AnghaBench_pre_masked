
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int left; int top; int right; int bottom; } ;
typedef TYPE_1__ RECT ;
typedef int PAINTSTRUCT ;
typedef int HDC ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int,int,int *,TYPE_1__*) ;
 int FUNC_4 (int ,int,int,int *,TYPE_1__*,int ,int *,int) ;
 int FUNC_5 (TYPE_1__*,int,int,int,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ,int,int,int *) ;
 int FUNC_8 (int ,int,int,int *) ;
 int FUNC_9 (int ) ;
 int VAR_2 ;
 int FUNC_10 (int,char*,int ) ;
 int FUNC_11 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_12(void)
{
    PAINTSTRUCT VAR_3;
    HDC VAR_4;
    RECT VAR_5, VAR_6;



    FUNC_9( VAR_2 );
    FUNC_5( &VAR_5, 25, 25, 50, 50 );
    FUNC_3( VAR_2, -5, -10, ((void*)0), &VAR_5 );
    VAR_4 = FUNC_0( VAR_2, &VAR_3 );
    FUNC_6( &VAR_6 );
    FUNC_2( VAR_4, &VAR_6 );
    FUNC_10( VAR_6.left >= 25 && VAR_6.top >= 25 && VAR_6.right <= 50 && VAR_6.bottom <= 50,
        "invalid clip box %s\n", FUNC_11( &VAR_6 ));
    FUNC_1( VAR_2, &VAR_3 );

    FUNC_7( VAR_4, 2, 3, ((void*)0) );
    FUNC_8( VAR_4, 30, 20, ((void*)0) );

    FUNC_3( VAR_2, -5, -10, ((void*)0), &VAR_5 );
    VAR_4 = FUNC_0( VAR_2, &VAR_3 );
    FUNC_6( &VAR_6 );
    FUNC_2( VAR_4, &VAR_6 );
    FUNC_10( VAR_6.left >= 25 && VAR_6.top >= 25 && VAR_6.right <= 50 && VAR_6.bottom <= 50,
        "invalid clip box %s\n", FUNC_11( &VAR_6 ));
    FUNC_1( VAR_2, &VAR_3 );

    FUNC_4( VAR_2, -5, -10, ((void*)0), &VAR_5, 0, ((void*)0), VAR_1 | VAR_0 );
    VAR_4 = FUNC_0( VAR_2, &VAR_3 );
    FUNC_6( &VAR_6 );
    FUNC_2( VAR_4, &VAR_6 );
    FUNC_10( VAR_6.left >= -5 && VAR_6.top >= 5 && VAR_6.right <= 20 && VAR_6.bottom <= 30,
        "invalid clip box %s\n", FUNC_11( &VAR_6 ));
    FUNC_1( VAR_2, &VAR_3 );

    FUNC_7( VAR_4, 1, 1, ((void*)0) );
    FUNC_8( VAR_4, 0, 0, ((void*)0) );

    FUNC_4( VAR_2, -5, -10, ((void*)0), &VAR_5, 0, ((void*)0), VAR_1 | VAR_0 );
    VAR_4 = FUNC_0( VAR_2, &VAR_3 );
    FUNC_6( &VAR_6 );
    FUNC_2( VAR_4, &VAR_6 );
    FUNC_10( VAR_6.left >= 25 && VAR_6.top >= 25 && VAR_6.right <= 50 && VAR_6.bottom <= 50,
        "invalid clip box %s\n", FUNC_11( &VAR_6 ));
    FUNC_1( VAR_2, &VAR_3 );
}
