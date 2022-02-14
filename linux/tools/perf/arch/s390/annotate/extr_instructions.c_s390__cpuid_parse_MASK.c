
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arch {unsigned int family; scalar_t__ model; } ;


 int FUNC_0 (char*,char*,unsigned int*,char*,char*,char*,char*) ;

__attribute__((used)) static int FUNC_1(struct arch *VAR_0, char *VAR_1)
{
 unsigned int VAR_2;
 char VAR_3[16], VAR_4[16], VAR_5[16], VAR_6[16];
 int VAR_7;





 VAR_7 = FUNC_0(VAR_1, "%*[^,],%u,%[^,],%[^,],%[^,],%s", &VAR_2, VAR_4,
       VAR_3, VAR_5, VAR_6);
 if (VAR_7 >= 2) {
  VAR_0->family = VAR_2;
  VAR_0->model = 0;
  return 0;
 }

 return -1;
}
