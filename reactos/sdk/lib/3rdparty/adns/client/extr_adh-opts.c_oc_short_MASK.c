
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct optioninfo {char* sopt; } ;


 scalar_t__ FUNC_0 (char const*,char const*,int) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2(const char **VAR_0, const struct optioninfo *VAR_1) {
  const char *VAR_2;
  int VAR_3;

  VAR_2= VAR_1->sopt;
  if (!VAR_2) return 0;
  VAR_3= FUNC_1(VAR_2);
  if (FUNC_0(*VAR_0,VAR_2,VAR_3)) return 0;
  (*VAR_0) += VAR_3;
  return 1;
}
