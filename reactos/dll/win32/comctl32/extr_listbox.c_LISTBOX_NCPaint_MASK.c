
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int self; } ;
struct TYPE_8__ {int left; int top; scalar_t__ bottom; scalar_t__ right; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__ LB_DESCR ;
typedef int HTHEME ;
typedef int HRGN ;
typedef int HDC ;
typedef int DWORD ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int,int,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int ,int ,TYPE_1__*,int ) ;
 int FUNC_3 (int ,int ,TYPE_1__*) ;
 int FUNC_4 (int ,int,int,scalar_t__,scalar_t__) ;
 int VAR_2 ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,TYPE_1__*) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (TYPE_1__*,int,int) ;
 int VAR_3 ;
 int FUNC_13 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_14( LB_DESCR *VAR_7, HRGN VAR_8 )
{
    DWORD VAR_9 = FUNC_8( VAR_7->self, VAR_2);
    HTHEME VAR_10 = FUNC_10( VAR_7->self );
    HRGN VAR_11 = VAR_8;
    int VAR_12, VAR_13;
    HDC VAR_14;
    RECT VAR_15;

    if (!VAR_10 || !(VAR_9 & VAR_6))
        return;

    VAR_12 = FUNC_6(VAR_4),
    VAR_13 = FUNC_6(VAR_5);

    FUNC_9(VAR_7->self, &VAR_15);


    VAR_11 = FUNC_1(VAR_15.left + VAR_12, VAR_15.top + VAR_13,
        VAR_15.right - VAR_12, VAR_15.bottom - VAR_13);
    if (VAR_8 != (HRGN)1)
        FUNC_0(VAR_11, VAR_11, VAR_8, VAR_3);
    FUNC_12(&VAR_15, -VAR_15.left, -VAR_15.top);
    VAR_14 = FUNC_5(VAR_7->self, VAR_8, VAR_1|VAR_0);
    FUNC_12(&VAR_15, -VAR_15.left, -VAR_15.top);


    if (FUNC_11 (VAR_10, 0, 0))
        FUNC_3(VAR_7->self, VAR_14, &VAR_15);
    FUNC_2 (VAR_10, VAR_14, 0, 0, &VAR_15, 0);
    FUNC_13(VAR_7->self, VAR_14);
}
