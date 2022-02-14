
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int VAR_0 ;
 int FUNC_0 (char**,char*,int ,int ) ;
 int FUNC_1 (char*,char**,size_t*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(char **VAR_1, pid_t VAR_2)
{
 char *VAR_3;
 size_t VAR_4;
 int VAR_5;

 if (FUNC_0(&VAR_3, "%d/%d/comm", FUNC_3(), VAR_2) == -1)
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_3, VAR_1, &VAR_4);
 if (!VAR_5) {





  (*VAR_1)[VAR_4] = 0;
  FUNC_4(*VAR_1);
 }

 FUNC_2(VAR_3);
 return VAR_5;
}
