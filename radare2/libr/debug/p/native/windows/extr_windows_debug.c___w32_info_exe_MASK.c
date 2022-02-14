
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* user; } ;
struct TYPE_9__ {int exe; } ;
struct TYPE_7__ {int hProcess; } ;
struct TYPE_8__ {TYPE_1__ pi; } ;
typedef TYPE_2__ RIOW32Dbg ;
typedef TYPE_3__ RDebugInfo ;
typedef TYPE_4__ RDebug ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(RDebug *VAR_0, RDebugInfo *VAR_1) {
 RIOW32Dbg *VAR_2 = VAR_0->user;
 VAR_1->exe = FUNC_0 (VAR_2->pi.hProcess, ((void*)0));
}
