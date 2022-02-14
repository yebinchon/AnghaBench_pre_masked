
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bottom; int right; } ;
typedef TYPE_1__ RECT ;
typedef int * HWND ;
typedef int HDC ;
typedef int HBITMAP ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int VAR_0 ;
 int FUNC_8 (int ,int ) ;

void FUNC_9(HBITMAP VAR_1)
{
 HDC VAR_2,VAR_3;
 HWND VAR_4;
 RECT VAR_5;
 HBITMAP VAR_6;

 if((VAR_4 = FUNC_4()) == ((void*)0))
  return;

 VAR_2 = FUNC_6(VAR_4);
 FUNC_5(VAR_4,&VAR_5);

 VAR_3 = FUNC_1(0);
 VAR_6 = FUNC_8(VAR_3, VAR_1);
 FUNC_0(VAR_2, 0, 0, VAR_5.right, VAR_5.bottom, VAR_3, 0, 0, VAR_0);
 FUNC_8(VAR_3, VAR_6);
 FUNC_2(VAR_3);
 FUNC_3(VAR_6);
 FUNC_7(VAR_4, VAR_2);
}
