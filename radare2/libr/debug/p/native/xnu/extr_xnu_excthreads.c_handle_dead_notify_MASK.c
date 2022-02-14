
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int msgh_id; } ;
struct TYPE_7__ {TYPE_1__ hdr; } ;
typedef TYPE_2__ exc_msg ;
struct TYPE_8__ {int pid; } ;
typedef TYPE_3__ RDebug ;



__attribute__((used)) static bool FUNC_0 (RDebug *VAR_0, exc_msg *VAR_1) {
 if (VAR_1->hdr.msgh_id == 0x48) {
  VAR_0->pid = -1;
  return 1;
 }
 return 0;
}
