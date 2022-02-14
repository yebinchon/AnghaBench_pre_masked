
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rusage {scalar_t__ ru_inblock; scalar_t__ ru_oublock; scalar_t__ ru_maxrss; } ;
typedef int r ;


 int VAR_0 ;
 int FUNC_0 (int ,struct rusage*) ;
 int FUNC_1 (struct rusage*,int ,int) ;
 int FUNC_2 (char*,int,int,int) ;

__attribute__((used)) static void FUNC_3(void){
  struct rusage VAR_1;
  FUNC_1(&VAR_1, 0, sizeof(VAR_1));

  FUNC_0(VAR_0, &VAR_1);
  FUNC_2("# getrusage: { ru_maxrss %d ru_oublock %d ru_inblock %d }\n",
      (int)VAR_1.ru_maxrss, (int)VAR_1.ru_oublock, (int)VAR_1.ru_inblock
  );
}
