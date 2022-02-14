
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,char*,int *) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char const*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 scalar_t__ FUNC_5 (char const*) ;

__attribute__((used)) static int FUNC_6(const char *VAR_2)
{
 int VAR_3;
 char *VAR_4;

 VAR_3 = 10;
 if (VAR_2 != ((void*)0))
  VAR_3 += FUNC_5(VAR_2);

 VAR_4 = FUNC_1(VAR_3);
 if (!VAR_4)
  return -VAR_1;

 FUNC_2(VAR_4, "cpupower");
 if ((VAR_2 != ((void*)0)) && FUNC_4(VAR_2, "help")) {
  FUNC_3(VAR_4, "-");
  FUNC_3(VAR_4, VAR_2);
 }

 FUNC_0("man", "man", VAR_4, ((void*)0));


 return -VAR_0;
}
