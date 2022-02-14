
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_9__ {int ContextFlags; } ;
struct TYPE_8__ {int pid; int tid; } ;
typedef TYPE_1__ RDebug ;
typedef int * HANDLE ;
typedef TYPE_2__ CONTEXT ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 int FUNC_4 (int *,TYPE_2__*) ;
 int FUNC_5 (char*) ;
 int * FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(RDebug *VAR_2, int VAR_3, ut8 *VAR_4, int VAR_5) {



 CONTEXT VAR_6 __attribute__ ((aligned (16)));

 int VAR_7 = 0;
 int VAR_8 = VAR_2->pid;
 int VAR_9 = VAR_2->tid;
 HANDLE VAR_10 = ((void*)0);
 if (VAR_3 < -1) {
  VAR_7 = 1;
  VAR_3 = -VAR_3;
 }
 VAR_10 = FUNC_6 (VAR_8, VAR_9);
 FUNC_3(&VAR_6, 0, sizeof (CONTEXT));
 VAR_6.ContextFlags = VAR_0 ;
 if (FUNC_1 (VAR_10, &VAR_6) == VAR_1) {


   if (VAR_5 > sizeof (CONTEXT)) {
    VAR_5 = sizeof (CONTEXT);
   }
   FUNC_2 (VAR_4, &VAR_6, VAR_5);



 } else {
  FUNC_5 ("w32_reg_read/GetThreadContext");
  VAR_5 = 0;
 }
 if (VAR_7) {
  FUNC_4 (VAR_10, &VAR_6);
 }
 FUNC_0(VAR_10);
 return VAR_5;
}
