
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmd_parms ;


 char const* FUNC_0 (int *,void*,char const*,char*,int) ;
 int FUNC_1 (char const*,char*) ;

__attribute__((used)) static const char *FUNC_2(cmd_parms *VAR_0, void *VAR_1, const char *VAR_2, const char *VAR_3, int VAR_4)
{
 char VAR_5[2];

 if (!FUNC_1(VAR_3, "On") || (VAR_3[0] == '1' && VAR_3[1] == '\0')) {
  VAR_5[0] = '1';
 } else {
  VAR_5[0] = '0';
 }
 VAR_5[1] = 0;

 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_5, VAR_4);
}
