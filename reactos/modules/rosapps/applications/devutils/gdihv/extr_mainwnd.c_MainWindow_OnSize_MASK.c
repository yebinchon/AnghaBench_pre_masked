
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bottom; int right; } ;
typedef TYPE_1__ RECT ;
typedef int LRESULT ;
typedef int HWND ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int,int,int,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static LRESULT
FUNC_3(HWND VAR_6)
{
 HWND VAR_7, VAR_8, VAR_9, VAR_10;
 RECT VAR_11;

 VAR_7 = FUNC_1(VAR_6, VAR_1);
 VAR_8 = FUNC_1(VAR_6, VAR_0);
 VAR_9 = FUNC_1(VAR_6, VAR_3);
 VAR_10 = FUNC_1(VAR_6, VAR_2);

 FUNC_0(VAR_6, &VAR_11);


 FUNC_2(VAR_7, 5, 5, VAR_5 - 5, VAR_11.bottom - 40, VAR_4);
 FUNC_2(VAR_8, VAR_5 + 5, 5, VAR_11.right - VAR_5 - 5, VAR_11.bottom - 40, VAR_4);
 FUNC_2(VAR_9, VAR_5 - 90, VAR_11.bottom - 30, 90, 25, VAR_4);
 FUNC_2(VAR_10, VAR_11.right - 90, VAR_11.bottom - 30, 90, 25, VAR_4);

 return 0;
}
