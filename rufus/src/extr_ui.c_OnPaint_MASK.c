
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HPEN ;
typedef int HDC ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int ,scalar_t__,int ) ;
 int FUNC_3 (int ,scalar_t__,int ,int *) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 float VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;

void FUNC_6(HDC VAR_4)
{
 int VAR_5;
 HPEN VAR_6 = FUNC_1(0, (VAR_0 < 1.5f) ? 2 : 3, FUNC_4(0, 0, 0));
 FUNC_5(VAR_4, VAR_6);
 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_3); VAR_5++) {
  FUNC_3(VAR_4, VAR_2 + 10, VAR_3[VAR_5], ((void*)0));
  FUNC_2(VAR_4, VAR_2 + VAR_1, VAR_3[VAR_5]);
 }
}
