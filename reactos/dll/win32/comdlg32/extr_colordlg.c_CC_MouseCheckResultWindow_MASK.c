
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RECT ;
typedef int POINT ;
typedef int LPARAM ;
typedef int HWND ;
typedef int BOOL ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static BOOL FUNC_6( HWND VAR_5, LPARAM VAR_6 )
{
 HWND VAR_7;
 POINT VAR_8;
 RECT VAR_9;

 FUNC_0(VAR_6, &VAR_8);
 FUNC_1(VAR_5, &VAR_8);
 VAR_7 = FUNC_2(VAR_5, VAR_2);
 FUNC_3(VAR_7, &VAR_9);
 if (FUNC_5(&VAR_9, VAR_8))
 {
  FUNC_4(VAR_5, VAR_4, VAR_1, 0);
  return VAR_3;
 }
 return VAR_0;
}
