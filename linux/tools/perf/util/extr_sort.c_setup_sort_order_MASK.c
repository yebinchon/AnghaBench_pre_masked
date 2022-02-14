
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evlist {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char**,char*,int ,char*) ;
 int FUNC_1 (struct evlist*) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 char* VAR_2 ;

__attribute__((used)) static int FUNC_4(struct evlist *VAR_3)
{
 char *VAR_4;





 if (!VAR_2 || FUNC_2(VAR_2))
  return 0;

 if (VAR_2[1] == '\0') {
  FUNC_3("Invalid --sort key: `+'");
  return -VAR_0;
 }





 if (FUNC_0(&VAR_4, "%d,%s",
       FUNC_1(VAR_3), VAR_2 + 1) < 0) {
  FUNC_3("Not enough memory to set up --sort");
  return -VAR_1;
 }

 VAR_2 = VAR_4;
 return 0;
}
