
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
typedef int DWORD ;


 int FUNC_0 (int ,int ,int,int ,int *) ;
 int FUNC_1 (int) ;

int FUNC_2(RDebug *VAR_0, ut64 VAR_1, int VAR_2, int VAR_3) {
 DWORD VAR_4;
 RIOW32Dbg *VAR_5 = VAR_0->user;
 return FUNC_0 (VAR_5->pi.hProcess, (LPVOID)(size_t)VAR_1,
  VAR_2, FUNC_1 (VAR_3), &VAR_4);
}
