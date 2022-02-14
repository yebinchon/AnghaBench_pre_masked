
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hwnd; } ;


 int FUNC_0 (int ,int ,char*,int,int ,int ,int,int,int *,int *,int ,int *) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static inline bool FUNC_4(void)
{
 VAR_4.hwnd = FUNC_0(
  0, VAR_0, L"Dummy GL window, ignore",
  VAR_3 | VAR_1 | VAR_2, 0, 0, 2, 2, ((void*)0),
  ((void*)0), FUNC_2(((void*)0)), ((void*)0));
 if (!VAR_4.hwnd) {
  FUNC_3("gl_shtex_init_window: failed to create window: %d",
       FUNC_1());
  return 0;
 }

 return 1;
}
