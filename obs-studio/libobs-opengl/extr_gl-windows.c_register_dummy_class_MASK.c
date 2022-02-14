
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ WNDPROC ;
struct TYPE_3__ {int lpszClassName; scalar_t__ lpfnWndProc; int hInstance; int style; int member_0; } ;
typedef TYPE_1__ WNDCLASSA ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static bool FUNC_4(void)
{
 static bool VAR_4 = 0;

 WNDCLASSA VAR_5 = {0};
 VAR_5.style = VAR_0;
 VAR_5.hInstance = FUNC_1(((void*)0));
 VAR_5.lpfnWndProc = (WNDPROC)VAR_2;
 VAR_5.lpszClassName = VAR_1;

 if (VAR_4)
  return 1;

 if (!FUNC_2(&VAR_5)) {
  FUNC_3(VAR_3, "Failed to register dummy GL window class, %lu",
       FUNC_0());
  return 0;
 }

 VAR_4 = 1;
 return 1;
}
