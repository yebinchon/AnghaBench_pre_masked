
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned long first; unsigned long last; } ;
struct TYPE_3__ {unsigned long first; unsigned long last; } ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int *,char*,unsigned long*,unsigned long*,char*,char*) ;
 TYPE_2__ VAR_0 ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 TYPE_1__ VAR_1 ;

int FUNC_5(void)
{
 unsigned long VAR_2, VAR_3;
 char VAR_4, VAR_5[128];
 FILE *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1("/proc/self/maps", "r");
 if (!VAR_6) {
  FUNC_3("fopen");
  return -1;
 }

 do {

  VAR_7 = FUNC_2(VAR_6, "%lx-%lx %*c%*c%c%*c %*x %*d:%*d %*d %127s\n",
       &VAR_2, &VAR_3, &VAR_4, VAR_5);
  if (VAR_7 <= 0)
   break;

  if (VAR_4 != 'x')
   continue;

  if (FUNC_4(VAR_5, "libc")) {
   VAR_0.first = VAR_2;
   VAR_0.last = VAR_3 - 1;
  } else if (FUNC_4(VAR_5, "[vdso]")) {
   VAR_1.first = VAR_2;
   VAR_1.last = VAR_3 - 1;
  }
 } while(1);

 FUNC_0(VAR_6);

 return 0;
}
