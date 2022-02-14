
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tomoyo_policy_namespace {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tomoyo_policy_namespace*) ;
 struct tomoyo_policy_namespace* FUNC_1 (int,int ) ;
 int FUNC_2 (char*,char const*,unsigned int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char const*) ;
 struct tomoyo_policy_namespace* FUNC_6 (char const*,unsigned int) ;
 int FUNC_7 (struct tomoyo_policy_namespace*) ;
 scalar_t__ FUNC_8 (struct tomoyo_policy_namespace*) ;
 int VAR_2 ;

struct tomoyo_policy_namespace *FUNC_9(const char *VAR_3)
{
 struct tomoyo_policy_namespace *VAR_4;
 struct tomoyo_policy_namespace *VAR_5;
 const char *VAR_6 = VAR_3;
 unsigned int VAR_7 = 0;

 while (*VAR_6 && *VAR_6++ != ' ')
  VAR_7++;
 VAR_4 = FUNC_6(VAR_3, VAR_7);
 if (VAR_4)
  return VAR_4;
 if (VAR_7 >= VAR_1 - 10 || !FUNC_5(VAR_3))
  return ((void*)0);
 VAR_5 = FUNC_1(sizeof(*VAR_5) + VAR_7 + 1, VAR_0);
 if (!VAR_5)
  return ((void*)0);
 if (FUNC_3(&VAR_2))
  goto out;
 VAR_4 = FUNC_6(VAR_3, VAR_7);
 if (!VAR_4 && FUNC_8(VAR_5)) {
  char *VAR_8 = (char *) (VAR_5 + 1);

  VAR_4 = VAR_5;
  FUNC_2(VAR_8, VAR_3, VAR_7);
  VAR_8[VAR_7] = '\0';
  VAR_5->name = VAR_8;
  FUNC_7(VAR_5);
  VAR_5 = ((void*)0);
 }
 FUNC_4(&VAR_2);
out:
 FUNC_0(VAR_5);
 return VAR_4;
}
