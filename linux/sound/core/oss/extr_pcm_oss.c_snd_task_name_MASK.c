
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {char* comm; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct task_struct *VAR_1, char *VAR_2, size_t VAR_3)
{
 unsigned int VAR_4;

 if (FUNC_0(!VAR_1 || !VAR_2 || VAR_3 < 2))
  return -VAR_0;
 for (VAR_4 = 0; VAR_4 < sizeof(VAR_1->comm) && VAR_4 + 1 < VAR_3; VAR_4++)
  VAR_2[VAR_4] = VAR_1->comm[VAR_4];
 VAR_2[VAR_4] = '\0';
 return 0;
}
