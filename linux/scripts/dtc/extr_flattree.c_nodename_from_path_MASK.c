
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,char const*) ;
 int FUNC_1 (char const*,char*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*,char const*) ;
 char* FUNC_4 (char const*) ;

__attribute__((used)) static char *FUNC_5(const char *VAR_0, const char *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_2(VAR_0);

 if (!FUNC_3(VAR_1, VAR_0))
  FUNC_0("Path \"%s\" is not valid as a child of \"%s\"\n",
      VAR_1, VAR_0);


 if (!FUNC_1(VAR_0, "/"))
  VAR_2++;

 return FUNC_4(VAR_1 + VAR_2);
}
