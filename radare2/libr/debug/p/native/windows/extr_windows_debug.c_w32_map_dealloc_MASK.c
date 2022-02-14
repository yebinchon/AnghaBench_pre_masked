
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ut64 ;
struct TYPE_7__ {TYPE_2__* user; } ;
struct TYPE_5__ {int hProcess; } ;
struct TYPE_6__ {TYPE_1__ pi; } ;
typedef TYPE_2__ RIOW32Dbg ;
typedef TYPE_3__ RDebug ;
typedef int LPVOID ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (char*) ;

int FUNC_2(RDebug *VAR_1, ut64 VAR_2, int VAR_3) {
 RIOW32Dbg *VAR_4 = VAR_1->user;
 if (!FUNC_0 (VAR_4->pi.hProcess, (LPVOID)VAR_2, 0, VAR_0)) {
  FUNC_1 ("w32_map_dealloc/VirtualFreeEx");
  return 0;
 }
 return 1;
}
