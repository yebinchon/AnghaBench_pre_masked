
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ ut64 ;
struct TYPE_9__ {TYPE_2__* user; } ;
struct TYPE_7__ {int hProcess; } ;
struct TYPE_8__ {TYPE_1__ pi; } ;
typedef int SIZE_T ;
typedef TYPE_2__ RIOW32Dbg ;
typedef int RDebugMap ;
typedef TYPE_3__ RDebug ;
typedef scalar_t__ LPVOID ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,int ,int ,int ) ;
 int * FUNC_1 (TYPE_3__*,scalar_t__) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (char*) ;

RDebugMap *FUNC_4(RDebug *VAR_2, ut64 VAR_3, int VAR_4) {
 RIOW32Dbg *VAR_5 = VAR_2->user;
 LPVOID VAR_6 = FUNC_0 (VAR_5->pi.hProcess, (LPVOID)VAR_3, (SIZE_T)VAR_4, VAR_0, VAR_1);
 if (!VAR_6) {
  FUNC_3 ("w32_map_alloc/VirtualAllocEx");
  return ((void*)0);
 }
 FUNC_2 (VAR_2);
 return FUNC_1 (VAR_2, (ut64)VAR_6);
}
