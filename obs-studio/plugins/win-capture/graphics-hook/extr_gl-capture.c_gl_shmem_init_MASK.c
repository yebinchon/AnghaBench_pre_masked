
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cx; int format; int cy; int base_cy; int base_cx; int shmem_info; } ;
typedef int HWND ;


 int FUNC_0 (int *,int ,int ,int ,int,int ,int,int ,int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;

__attribute__((used)) static bool FUNC_4(HWND VAR_1)
{
 if (!FUNC_2()) {
  return 0;
 }
 if (!FUNC_1()) {
  return 0;
 }
 if (!FUNC_0(&VAR_0.shmem_info, VAR_1, VAR_0.base_cx,
    VAR_0.base_cy, VAR_0.cx, VAR_0.cy, VAR_0.cx * 4,
    VAR_0.format, 1)) {
  return 0;
 }

 FUNC_3("gl memory capture successful");
 return 1;
}
