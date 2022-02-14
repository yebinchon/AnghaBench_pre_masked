
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int x; int y; } ;
struct TYPE_7__ {int cx; int cy; } ;
typedef TYPE_1__ SIZE ;
typedef scalar_t__ PVOID ;
typedef TYPE_2__ POINT ;
typedef int HDC ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,TYPE_1__*) ;
 int FUNC_6 (int ,TYPE_2__*) ;
 int FUNC_7 (int ,TYPE_1__*) ;
 int FUNC_8 (int ,TYPE_2__*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_9 (int,int,int) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 int FUNC_11 (int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_12 (int,char*,int) ;

__attribute__((used)) static
void
FUNC_13(HDC VAR_11, BOOL VAR_12)
{
    POINT VAR_13;
    SIZE VAR_14;


    FUNC_11(FUNC_10(VAR_11, FUNC_4(VAR_0)) == VAR_7);
    FUNC_11(FUNC_10(VAR_11, FUNC_4(VAR_1)) == VAR_9);
    FUNC_11(FUNC_10(VAR_11, FUNC_4(VAR_3)) == VAR_8);
    if (VAR_12)
    {
        FUNC_11(FUNC_10(VAR_11, FUNC_4(VAR_2)) == VAR_6);
        FUNC_11(FUNC_10(VAR_11, VAR_10) == (PVOID)1);
    }
    else
    {
        FUNC_11(FUNC_10(VAR_11, FUNC_4(VAR_2)) == 0);
        FUNC_11(FUNC_10(VAR_11, VAR_10) == (PVOID)2);
    }


    FUNC_11(FUNC_0(VAR_11) == FUNC_9(12,34,56));
    FUNC_11(FUNC_1(VAR_11) == FUNC_9(23,34,45));


    FUNC_11(FUNC_3(VAR_11) == VAR_5);
    FUNC_11(FUNC_2(VAR_11) == VAR_4);
    FUNC_8(VAR_11, &VAR_13);
    FUNC_11(VAR_13.x == 12);
    FUNC_11(VAR_13.y == 34);
    FUNC_6(VAR_11, &VAR_13);
    FUNC_11(VAR_13.x == 56);
    FUNC_11(VAR_13.y == 78);
    FUNC_7(VAR_11, &VAR_14);
    FUNC_12(VAR_14.cx == 123, "sz.cx == %ld\n", VAR_14.cx);
    FUNC_12(VAR_14.cy == 456, "sz.cy == %ld\n", VAR_14.cy);
    FUNC_5(VAR_11, &VAR_14);
    FUNC_11(VAR_14.cx == 234);
    FUNC_11(VAR_14.cy == 567);


}
