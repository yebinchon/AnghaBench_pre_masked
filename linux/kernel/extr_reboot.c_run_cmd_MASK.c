
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char**) ;
 char** FUNC_1 (int ,char const*,int *) ;
 int FUNC_2 (char*,char**,char**,int ) ;

__attribute__((used)) static int FUNC_3(const char *VAR_3)
{
 char **VAR_4;
 static char *VAR_5[] = {
  "HOME=/",
  "PATH=/sbin:/bin:/usr/sbin:/usr/bin",
  ((void*)0)
 };
 int VAR_6;
 VAR_4 = FUNC_1(VAR_1, VAR_3, ((void*)0));
 if (VAR_4) {
  VAR_6 = FUNC_2(VAR_4[0], VAR_4, VAR_5, VAR_2);
  FUNC_0(VAR_4);
 } else {
  VAR_6 = -VAR_0;
 }

 return VAR_6;
}
