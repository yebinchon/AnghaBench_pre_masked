
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,int,char*,int ,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char) ;
 char* FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5(const char *VAR_3, char **VAR_4)
{
 char *VAR_5, *VAR_6, *VAR_7;
 char VAR_8[64];
 int VAR_9;

 VAR_7 = FUNC_4(VAR_3);
 if (!VAR_7)
  return -VAR_1;

 VAR_5 = FUNC_0(VAR_7);
 if (!VAR_5) {
  VAR_9 = -VAR_0;
  goto out;
 }

 for (VAR_6 = VAR_5; *VAR_6 != '\0'; VAR_6++) {
  if (!FUNC_3(*VAR_6) && *VAR_6 != '_') {
   *VAR_6 = '\0';
   break;
  }
 }

 VAR_9 = FUNC_1(VAR_8, 64, "%s_%s", VAR_2, VAR_5);
 if (VAR_9 < 0)
  goto out;

 *VAR_4 = FUNC_4(VAR_8);
 VAR_9 = *VAR_4 ? 0 : -VAR_1;

out:
 FUNC_2(VAR_7);
 return VAR_9;
}
