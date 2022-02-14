
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char const*,char const*,char const*,char const*,int ) ;
 scalar_t__ FUNC_1 (char const*,char const*) ;
 int FUNC_2 (int ) ;

void
FUNC_3(const char *VAR_1, const char *VAR_2,
   const char *VAR_3, const char *VAR_4)
{
 if (FUNC_1(VAR_1, VAR_2) < 0)
  FUNC_0("error while creating link for relation \"%s.%s\" (\"%s\" to \"%s\"): %s\n",
     VAR_3, VAR_4, VAR_1, VAR_2, FUNC_2(VAR_0));
}
