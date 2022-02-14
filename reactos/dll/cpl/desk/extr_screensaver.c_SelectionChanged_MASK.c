
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_3__ {scalar_t__ Selection; } ;
typedef TYPE_1__* PDATA ;
typedef scalar_t__ INT ;
typedef int HWND ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__,int ) ;

__attribute__((used)) static VOID
FUNC_3(HWND VAR_10, PDATA VAR_11)
{
    HWND VAR_12;
    BOOL VAR_13;
    INT VAR_14;

    VAR_12 = FUNC_1(VAR_10, VAR_3);

    VAR_14 = (INT)FUNC_2(VAR_12, VAR_0, 0, 0);
    VAR_14 = (INT)FUNC_2(VAR_12, VAR_1, VAR_14, 0);

    VAR_11->Selection = VAR_14;

    VAR_13 = (VAR_14 != 0);

    FUNC_0(FUNC_1(VAR_10, VAR_4), VAR_13);
    FUNC_0(FUNC_1(VAR_10, VAR_5), VAR_13);
    FUNC_0(FUNC_1(VAR_10, VAR_8), VAR_13);
    FUNC_0(FUNC_1(VAR_10, VAR_7), VAR_13);
    FUNC_0(FUNC_1(VAR_10, VAR_6), VAR_13);
    FUNC_0(FUNC_1(VAR_10, VAR_9), VAR_13);
    FUNC_0(FUNC_1(VAR_10, VAR_2), VAR_13);
}
