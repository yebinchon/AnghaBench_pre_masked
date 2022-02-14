
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ left; scalar_t__ top; int right; int bottom; } ;
typedef TYPE_1__ RECT ;
typedef int HRGN ;
typedef int HDC ;
typedef int HBITMAP ;


 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_8 (int ,TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (TYPE_1__*,int,int,int,int) ;
 int FUNC_11 (int,char*,int) ;
 int FUNC_12 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_13(void)
{
    HDC VAR_3;
    HRGN VAR_4, VAR_5;
    HBITMAP VAR_6;
    RECT VAR_7;
    int VAR_8;

    VAR_3 = FUNC_1(0);
    VAR_5 = FUNC_2(0, 0, 0, 0);
    VAR_4 = FUNC_2(0, 0, 0, 0);
    VAR_6 = FUNC_0(VAR_3, 100, 100);

    VAR_8 = FUNC_6(VAR_3, VAR_4);
    FUNC_11(VAR_8 == 0, "expected 0, got %d\n", VAR_8);

    VAR_8 = FUNC_5(VAR_3, VAR_5, VAR_1);
    FUNC_11(VAR_8 == VAR_2, "expected SIMPLEREGION, got %d\n", VAR_8);

    VAR_8 = FUNC_6(VAR_3, VAR_4);
    FUNC_11(VAR_8 == 1, "expected 1, got %d\n", VAR_8);

    VAR_8 = FUNC_7(VAR_4, &VAR_7);
    FUNC_11(VAR_8 == VAR_2, "expected SIMPLEREGION, got %d\n", VAR_8);
    FUNC_11(VAR_7.left == 0 && VAR_7.top == 0 && VAR_7.right == 1 && VAR_7.bottom == 1,
       "expected 0,0-1,1, got %s\n", FUNC_12(&VAR_7));

    VAR_8 = FUNC_5(VAR_3, 0, VAR_0);
    FUNC_11(VAR_8 == VAR_2, "expected SIMPLEREGION, got %d\n", VAR_8);

    VAR_8 = FUNC_6(VAR_3, VAR_4);
    FUNC_11(VAR_8 == 0, "expected 0, got %d\n", VAR_8);

    VAR_8 = FUNC_5(VAR_3, 0, VAR_1);
    FUNC_11(VAR_8 == 0, "expected 0, got %d\n", VAR_8);

    VAR_8 = FUNC_6(VAR_3, VAR_4);
    FUNC_11(VAR_8 == 0, "expected 0, got %d\n", VAR_8);

    FUNC_9(VAR_3, VAR_6);

    VAR_8 = FUNC_5(VAR_3, VAR_5, VAR_1);
    FUNC_11(VAR_8 == VAR_2, "expected SIMPLEREGION, got %d\n", VAR_8);

    VAR_8 = FUNC_6(VAR_3, VAR_4);
    FUNC_11(VAR_8 == 1, "expected 1, got %d\n", VAR_8);

    VAR_8 = FUNC_7(VAR_4, &VAR_7);
    FUNC_11(VAR_8 == VAR_2, "expected SIMPLEREGION, got %d\n", VAR_8);
    FUNC_11(VAR_7.left == 0 && VAR_7.top == 0 && VAR_7.right == 100 && VAR_7.bottom == 100,
       "expected 0,0-100,100, got %s\n", FUNC_12(&VAR_7));

    FUNC_10( &VAR_7, 10, 10, 20, 20 );
    VAR_8 = FUNC_8( VAR_3, &VAR_7 );
    FUNC_11(VAR_8, "RectVisible failed for %s\n", FUNC_12(&VAR_7));

    FUNC_10( &VAR_7, 20, 20, 10, 10 );
    VAR_8 = FUNC_8( VAR_3, &VAR_7 );
    FUNC_11(VAR_8, "RectVisible failed for %s\n", FUNC_12(&VAR_7));

    VAR_8 = FUNC_5(VAR_3, 0, VAR_1);
    FUNC_11(VAR_8 == 0, "expected 0, got %d\n", VAR_8);

    VAR_8 = FUNC_6(VAR_3, VAR_4);
    FUNC_11(VAR_8 == 1, "expected 1, got %d\n", VAR_8);

    VAR_8 = FUNC_7(VAR_4, &VAR_7);
    FUNC_11(VAR_8 == VAR_2, "expected SIMPLEREGION, got %d\n", VAR_8);
    FUNC_11(VAR_7.left == 0 && VAR_7.top == 0 && VAR_7.right == 100 && VAR_7.bottom == 100,
       "expected 0,0-100,100, got %s\n", FUNC_12(&VAR_7));

    FUNC_3(VAR_3);
    FUNC_4(VAR_4);
    FUNC_4(VAR_5);
    FUNC_4(VAR_6);
}
