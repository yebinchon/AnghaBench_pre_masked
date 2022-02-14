
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ksym {int dummy; } ;
typedef int buf ;
struct TYPE_3__ {long addr; int name; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char*,char*) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*,int,int,int ) ;
 int FUNC_4 (char*,char*,void**,char*,char*) ;
 int FUNC_5 (char*) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;

int FUNC_6(void)
{
 FILE *VAR_4 = FUNC_2("/proc/kallsyms", "r");
 char VAR_5[256], VAR_6[256];
 char VAR_7;
 void *VAR_8;
 int VAR_9 = 0;

 if (!VAR_4)
  return -VAR_0;

 while (FUNC_1(VAR_6, sizeof(VAR_6), VAR_4)) {
  if (FUNC_4(VAR_6, "%p %c %s", &VAR_8, &VAR_7, VAR_5) != 3)
   break;
  if (!VAR_8)
   continue;
  VAR_3[VAR_9].addr = (long) VAR_8;
  VAR_3[VAR_9].name = FUNC_5(VAR_5);
  VAR_9++;
 }
 FUNC_0(VAR_4);
 VAR_2 = VAR_9;
 FUNC_3(VAR_3, VAR_2, sizeof(struct ksym), VAR_1);
 return 0;
}
