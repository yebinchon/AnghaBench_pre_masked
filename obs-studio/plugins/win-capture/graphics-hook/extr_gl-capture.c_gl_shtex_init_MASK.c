
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ handle; int format; int cy; int cx; int base_cy; int base_cx; int shtex_info; } ;
typedef int HWND ;


 int FUNC_0 (int *,int ,int ,int ,int ,int ,int ,int,uintptr_t) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (char*) ;

__attribute__((used)) static bool FUNC_7(HWND VAR_1)
{
 if (!FUNC_5()) {
  return 0;
 }
 if (!FUNC_2()) {
  return 0;
 }
 if (!FUNC_3()) {
  return 0;
 }
 if (!FUNC_4()) {
  return 0;
 }
 if (!FUNC_1()) {
  return 0;
 }
 if (!FUNC_0(&VAR_0.shtex_info, VAR_1, VAR_0.base_cx,
    VAR_0.base_cy, VAR_0.cx, VAR_0.cy, VAR_0.format,
    1, (uintptr_t)VAR_0.handle)) {
  return 0;
 }

 FUNC_6("gl shared texture capture successful");
 return 1;
}
