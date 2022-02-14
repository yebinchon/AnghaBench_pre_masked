
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct libbpf_nla_policy {size_t type; int minlen; int maxlen; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 char* FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct nlattr*) ;
 unsigned int* VAR_3 ;
 int FUNC_2 (struct nlattr*) ;

__attribute__((used)) static int FUNC_3(struct nlattr *VAR_4, int VAR_5,
   struct libbpf_nla_policy *VAR_6)
{
 struct libbpf_nla_policy *VAR_7;
 unsigned int VAR_8 = 0;
 int VAR_9 = FUNC_2(VAR_4);

 if (VAR_9 < 0 || VAR_9 > VAR_5)
  return 0;

 VAR_7 = &VAR_6[VAR_9];

 if (VAR_7->type > VAR_1)
  return 0;

 if (VAR_7->minlen)
  VAR_8 = VAR_7->minlen;
 else if (VAR_7->type != VAR_2)
  VAR_8 = VAR_3[VAR_7->type];

 if (FUNC_1(VAR_4) < VAR_8)
  return -1;

 if (VAR_7->maxlen && FUNC_1(VAR_4) > VAR_7->maxlen)
  return -1;

 if (VAR_7->type == VAR_0) {
  char *VAR_10 = FUNC_0(VAR_4);

  if (VAR_10[FUNC_1(VAR_4) - 1] != '\0')
   return -1;
 }

 return 0;
}
