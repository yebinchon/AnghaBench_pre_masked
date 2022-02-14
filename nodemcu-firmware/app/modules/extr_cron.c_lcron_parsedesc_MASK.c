
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cronent_desc {void* dow; void* mon; void* dom; void* hour; void* min; } ;
typedef int lua_State ;


 void* FUNC_0 (int *,char*,char**,int,int) ;
 int FUNC_1 (int *,char*,int) ;

__attribute__((used)) static int FUNC_2(lua_State *VAR_0, char *VAR_1, struct cronent_desc *VAR_2) {
  char *VAR_3 = VAR_1;
  VAR_2->min = FUNC_0(VAR_0, VAR_3, &VAR_3, 0, 59);
  if (*VAR_3 != ' ' && *VAR_3 != '\t') return FUNC_1(VAR_0, "invalid spec (separator @%d)", VAR_3 - VAR_1);
  VAR_2->hour = FUNC_0(VAR_0, VAR_3 + 1, &VAR_3, 0, 23);
  if (*VAR_3 != ' ' && *VAR_3 != '\t') return FUNC_1(VAR_0, "invalid spec (separator @%d)", VAR_3 - VAR_1);
  VAR_2->dom = FUNC_0(VAR_0, VAR_3 + 1, &VAR_3, 1, 31);
  if (*VAR_3 != ' ' && *VAR_3 != '\t') return FUNC_1(VAR_0, "invalid spec (separator @%d)", VAR_3 - VAR_1);
  VAR_2->mon = FUNC_0(VAR_0, VAR_3 + 1, &VAR_3, 1, 12);
  if (*VAR_3 != ' ' && *VAR_3 != '\t') return FUNC_1(VAR_0, "invalid spec (separator @%d)", VAR_3 - VAR_1);
  VAR_2->dow = FUNC_0(VAR_0, VAR_3 + 1, &VAR_3, 0, 6);
  while (*VAR_3 != '\0' && (*VAR_3 == ' ' || *VAR_3 == '\t')) {
    VAR_3++;
  }
  if (*VAR_3 != 0) return FUNC_1(VAR_0, "invalid spec (trailing @%d)", VAR_3 - VAR_1);
  return 0;
}
