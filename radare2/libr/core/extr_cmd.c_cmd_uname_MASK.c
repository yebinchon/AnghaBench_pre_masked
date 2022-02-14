
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int release; int sysname; } ;
typedef TYPE_1__ RSysInfo ;


 int FUNC_0 () ;
 int FUNC_1 (char*,int ) ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

__attribute__((used)) static int FUNC_5(void *VAR_0, const char *VAR_1) {
 RSysInfo *VAR_2 = FUNC_2();
 if (VAR_2) {
  FUNC_1 ("%s", VAR_2->sysname);
  if (FUNC_4 (VAR_1, "-r")) {
   FUNC_1 (" %s", VAR_2->release);
  }
  FUNC_0 ();
  FUNC_3 (VAR_2);
 }
 return 0;
}
