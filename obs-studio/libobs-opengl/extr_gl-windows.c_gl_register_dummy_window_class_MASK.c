
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wc ;
struct TYPE_4__ {int lpszClassName; int lpfnWndProc; int hInstance; int style; } ;
typedef TYPE_1__ WNDCLASSA ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int VAR_4 ;

__attribute__((used)) static bool FUNC_4(void)
{
 WNDCLASSA VAR_5;
 if (VAR_4)
  return 1;

 FUNC_3(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.style = VAR_0;
 VAR_5.hInstance = FUNC_0(((void*)0));
 VAR_5.lpfnWndProc = VAR_1;
 VAR_5.lpszClassName = VAR_3;

 if (!FUNC_1(&VAR_5)) {
  FUNC_2(VAR_2, "Could not create dummy window class");
  return 0;
 }

 VAR_4 = 1;
 return 1;
}
