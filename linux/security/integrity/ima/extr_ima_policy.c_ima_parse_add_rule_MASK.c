
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ima_rule_entry {int list; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,struct ima_rule_entry*) ;
 int VAR_3 ;
 int FUNC_2 (int ,int *,int *,char const*,char*,int,int) ;
 int FUNC_3 (struct ima_rule_entry*) ;
 struct ima_rule_entry* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (char**,char*) ;
 int FUNC_8 (char*,char*) ;

ssize_t FUNC_9(char *VAR_4)
{
 static const char VAR_5[] = "update_policy";
 char *VAR_6;
 struct ima_rule_entry *VAR_7;
 ssize_t VAR_8, VAR_9;
 int VAR_10 = 0;

 VAR_6 = FUNC_7(&VAR_4, "\n");
 VAR_9 = FUNC_6(VAR_6) + 1;
 VAR_6 += FUNC_8(VAR_6, " \t");

 if (*VAR_6 == '#' || *VAR_6 == '\0')
  return VAR_9;

 VAR_7 = FUNC_4(sizeof(*VAR_7), VAR_2);
 if (!VAR_7) {
  FUNC_2(VAR_0, ((void*)0),
        ((void*)0), VAR_5, "-ENOMEM", -VAR_1, VAR_10);
  return -VAR_1;
 }

 FUNC_0(&VAR_7->list);

 VAR_8 = FUNC_1(VAR_6, VAR_7);
 if (VAR_8) {
  FUNC_3(VAR_7);
  FUNC_2(VAR_0, ((void*)0),
        ((void*)0), VAR_5, "invalid-policy", VAR_8,
        VAR_10);
  return VAR_8;
 }

 FUNC_5(&VAR_7->list, &VAR_3);

 return VAR_9;
}
