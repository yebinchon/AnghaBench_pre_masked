
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (int ,char*,char const*,char const*,...) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*,int ) ;
 char* FUNC_3 (char*,char) ;

__attribute__((used)) static char *FUNC_4(const char *VAR_1, const char *VAR_2, const char *VAR_3)
{
 char *VAR_4;
 char *VAR_5;
 char *VAR_6;

 VAR_6 = FUNC_2(VAR_2, VAR_0);
 if (!VAR_6)
  return ((void*)0);
 VAR_5 = FUNC_3(VAR_6, '.');
 if (VAR_5)
  *VAR_5 = '\0';
 if (VAR_1)
  VAR_4 = FUNC_0(VAR_0, "%s/%s.%s", VAR_1, VAR_6, VAR_3);
 else
  VAR_4 = FUNC_0(VAR_0, "%s.%s", VAR_6, VAR_3);
 FUNC_1(VAR_6);

 return VAR_4;
}
