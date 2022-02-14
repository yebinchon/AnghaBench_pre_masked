
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arch {unsigned int family; unsigned int model; } ;


 int FUNC_0 (char*,char*,unsigned int*,unsigned int*,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct arch *VAR_0, char *VAR_1)
{
 unsigned int VAR_2, VAR_3, VAR_4;
 int VAR_5;




 VAR_5 = FUNC_0(VAR_1, "%*[^,],%u,%u,%u", &VAR_2, &VAR_3, &VAR_4);
 if (VAR_5 == 3) {
  VAR_0->family = VAR_2;
  VAR_0->model = VAR_3;
  return 0;
 }

 return -1;
}
