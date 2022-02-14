
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TCHAR ;
typedef int HWND ;
typedef scalar_t__ HFONT ;
typedef int HDC ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int *) ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_6 ;
 int FUNC_4 (int,int ,int) ;
 int VAR_7 ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ VAR_8 ;

void FUNC_6(HWND VAR_9, TCHAR *VAR_10, int VAR_11, BOOL VAR_12)
{
 int VAR_13;
 HDC VAR_14;
 HFONT VAR_15;

 VAR_14 = FUNC_2(VAR_9);

 VAR_13 = -FUNC_4(VAR_11, FUNC_3(VAR_14, VAR_6), 72);

 FUNC_5(VAR_9, VAR_14);

 VAR_15 = FUNC_0(VAR_13, 0, 0, 0, VAR_12 ? VAR_4: VAR_5, 0, 0, 0,
  VAR_0, VAR_7, VAR_2,
  VAR_1, VAR_3, VAR_10);

 if(VAR_15 != 0)
 {
  if(VAR_8 != 0)
   FUNC_1(VAR_8);

  VAR_8 = VAR_15;
 }
}
