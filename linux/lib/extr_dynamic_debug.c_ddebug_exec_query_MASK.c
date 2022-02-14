
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ddebug_query {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ddebug_query*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_1 (char*,unsigned int*,unsigned int*) ;
 scalar_t__ FUNC_2 (char**,int,struct ddebug_query*,char const*) ;
 int FUNC_3 (char*,char**,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct ddebug_query*,char*) ;

__attribute__((used)) static int FUNC_6(char *VAR_2, const char *VAR_3)
{
 unsigned int VAR_4 = 0, VAR_5 = 0;
 struct ddebug_query VAR_6;

 int VAR_7, VAR_8;
 char *VAR_9[9];

 VAR_7 = FUNC_3(VAR_2, VAR_9, 9);
 if (VAR_7 <= 0) {
  FUNC_4("tokenize failed\n");
  return -VAR_0;
 }

 if (FUNC_1(VAR_9[VAR_7-1], &VAR_4, &VAR_5)) {
  FUNC_4("flags parse failed\n");
  return -VAR_0;
 }
 if (FUNC_2(VAR_9, VAR_7-1, &VAR_6, VAR_3)) {
  FUNC_4("query parse failed\n");
  return -VAR_0;
 }

 VAR_8 = FUNC_0(&VAR_6, VAR_4, VAR_5);
 FUNC_5(&VAR_6, VAR_8 ? "applied" : "no-match");

 return VAR_8;
}
