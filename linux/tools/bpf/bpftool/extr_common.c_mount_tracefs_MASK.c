
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*,char*,char*,int) ;
 int FUNC_1 (char*,char*) ;

int FUNC_2(const char *VAR_1)
{
 char VAR_2[VAR_0];
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1, "tracefs", VAR_2, VAR_0);
 if (VAR_3) {
  VAR_2[VAR_0 - 1] = '\0';
  FUNC_1("can't mount tracefs: %s", VAR_2);
 }

 return VAR_3;
}
