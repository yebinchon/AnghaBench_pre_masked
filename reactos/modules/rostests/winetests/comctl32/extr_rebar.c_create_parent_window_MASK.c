
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HWND ;


 int VAR_0 ;
 int * FUNC_0 (int ,char*,char*,int ,int ,int ,int,int,int *,int *,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,int ) ;
 int VAR_5 ;
 int FUNC_4 () ;

__attribute__((used)) static HWND FUNC_5(void)
{
    HWND VAR_6;

    if (!FUNC_4()) return ((void*)0);

    VAR_6 = FUNC_0(0, "MyTestWnd", "Blah", VAR_5,
      VAR_0, VAR_0, 672+2*FUNC_2(VAR_1),
      226+FUNC_2(VAR_2)+2*FUNC_2(VAR_3),
      ((void*)0), ((void*)0), FUNC_1(((void*)0)), 0);

    FUNC_3(VAR_6, VAR_4);
    return VAR_6;
}
