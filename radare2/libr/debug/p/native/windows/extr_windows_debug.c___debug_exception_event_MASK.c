
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned long ExceptionCode; } ;
struct TYPE_7__ {TYPE_1__ ExceptionRecord; } ;
struct TYPE_8__ {TYPE_2__ Exception; } ;
struct TYPE_9__ {scalar_t__ dwThreadId; scalar_t__ dwProcessId; TYPE_3__ u; } ;
typedef TYPE_4__ DEBUG_EVENT ;







 int FUNC_0 (unsigned long) ;
 int FUNC_1 (char*,int,int,int) ;

__attribute__((used)) static int FUNC_2(DEBUG_EVENT *VAR_0) {
 unsigned long VAR_1 = VAR_0->u.Exception.ExceptionRecord.ExceptionCode;
 switch (VAR_1) {

 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
  FUNC_1 ("(%d) Fatal exception (%s) in thread %d\n",
   (int)VAR_0->dwProcessId,
   FUNC_0 (VAR_1),
   (int)VAR_0->dwThreadId);
  break;

 case 0x406D1388:
  FUNC_1 ("(%d) MS_VC_EXCEPTION (%x) in thread %d\n",
   (int)VAR_0->dwProcessId, (int)VAR_1, (int)VAR_0->dwThreadId);
  return 1;
 default:
  FUNC_1 ("(%d) Unknown exception %x in thread %d\n",
   (int)VAR_0->dwProcessId, (int)VAR_1, (int)VAR_0->dwThreadId);
  break;
 }
 return 0;
}
