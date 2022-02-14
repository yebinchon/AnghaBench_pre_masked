
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int total_size; int timestamp; int id; } ;
struct jr_code_close {TYPE_1__ p; } ;
typedef int rec ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct jr_code_close*,int,int,int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;

int
FUNC_5(void *VAR_1)
{
 struct jr_code_close VAR_2;
 FILE *VAR_3 = VAR_1;

 if (!VAR_3) {
  FUNC_4("jvmti: invalid fd in close_agent");
  return -1;
 }

 VAR_2.p.id = VAR_0;
 VAR_2.p.total_size = sizeof(VAR_2);

 VAR_2.p.timestamp = FUNC_3();

 if (!FUNC_1(&VAR_2, sizeof(VAR_2), 1, VAR_3))
  return -1;

 FUNC_0(VAR_3);

 VAR_3 = ((void*)0);

 FUNC_2();

 return 0;
}
