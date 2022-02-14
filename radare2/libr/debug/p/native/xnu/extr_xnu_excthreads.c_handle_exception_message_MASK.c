
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int kern_return_t ;
struct TYPE_6__ {int name; } ;
struct TYPE_5__ {int name; } ;
struct TYPE_7__ {int exception; TYPE_2__ thread; TYPE_1__ task; } ;
typedef TYPE_3__ exc_msg ;
typedef int RDebug ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4 (RDebug *VAR_6, exc_msg *VAR_7, int *VAR_8) {
 int VAR_9 = VAR_5;
 kern_return_t VAR_10;
 *VAR_8 = VAR_1;
 switch (VAR_7->exception) {
 case 132:
  VAR_9 = VAR_4;
  *VAR_8 = VAR_0;
  VAR_10 = FUNC_3 (VAR_7->task.name);
  if (VAR_10 != VAR_1) {
   FUNC_0 ("failed to suspend task bad access\n");
  }
  FUNC_0 ("EXC_BAD_ACCESS\n");
  break;
 case 131:
  VAR_9 = VAR_3;
  *VAR_8 = VAR_0;
  VAR_10 = FUNC_3 (VAR_7->task.name);
  if (VAR_10 != VAR_1) {
   FUNC_0 ("failed to suspend task bad instruction\n");
  }
  FUNC_0 ("EXC_BAD_INSTRUCTION\n");
  break;
 case 133:
  FUNC_0 ("EXC_ARITHMETIC\n");
  break;
 case 129:
  FUNC_0 ("EXC_EMULATION\n");
  break;
 case 128:
  FUNC_0 ("EXC_SOFTWARE\n");
  break;
 case 130:
  VAR_10 = FUNC_3 (VAR_7->task.name);
  if (VAR_10 != VAR_1) {
   FUNC_0 ("failed to suspend task breakpoint\n");
  }
  VAR_9 = VAR_2;
  break;
 default:
  FUNC_0 ("UNKNOWN\n");
  break;
 }
 VAR_10 = FUNC_1 (FUNC_2 (), VAR_7->task.name);
 if (VAR_10 != VAR_1) {
  FUNC_0 ("failed to deallocate task port\n");
 }
 VAR_10 = FUNC_1 (FUNC_2 (), VAR_7->thread.name);
 if (VAR_10 != VAR_1) {
  FUNC_0 ("failed to deallocated task port\n");
 }
 return VAR_9;
}
