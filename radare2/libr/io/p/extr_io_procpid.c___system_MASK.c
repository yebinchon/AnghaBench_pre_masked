
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int (* cb_printf ) (char*,int) ;} ;
struct TYPE_7__ {scalar_t__ data; } ;
struct TYPE_6__ {int pid; } ;
typedef TYPE_1__ RIOProcpid ;
typedef TYPE_2__ RIODesc ;
typedef TYPE_3__ RIO ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*,char*,int) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static char *FUNC_4(RIO *VAR_0, RIODesc *VAR_1, const char *VAR_2) {
 RIOProcpid *VAR_3 = (RIOProcpid*)VAR_1->data;
 if (!FUNC_2 (VAR_2, "pid", 3)) {
  int VAR_4 = FUNC_0 (VAR_2 + 3);
  if (VAR_4 > 0) {
   VAR_3->pid = VAR_4;
  }
  VAR_0->cb_printf ("%d\n", VAR_3->pid);
 } else {
  FUNC_1 ("Try: '=!pid'\n");
 }
 return ((void*)0);
}
