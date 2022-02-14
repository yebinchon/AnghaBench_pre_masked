
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,char const*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 scalar_t__ FUNC_2 (char const*,char*,size_t) ;
 size_t FUNC_3 (char const*) ;

bool
FUNC_4(const char *VAR_0, const char *VAR_1, bool *VAR_2)
{
 size_t VAR_3;
 bool VAR_4 = 1;


 if (VAR_0 == ((void*)0))
  VAR_0 = "";

 VAR_3 = FUNC_3(VAR_0);

 if (VAR_3 > 0 && FUNC_2(VAR_0, "true", VAR_3) == 0)
  *VAR_2 = 1;
 else if (VAR_3 > 0 && FUNC_2(VAR_0, "false", VAR_3) == 0)
  *VAR_2 = 0;
 else if (VAR_3 > 0 && FUNC_2(VAR_0, "yes", VAR_3) == 0)
  *VAR_2 = 1;
 else if (VAR_3 > 0 && FUNC_2(VAR_0, "no", VAR_3) == 0)
  *VAR_2 = 0;

 else if (FUNC_2(VAR_0, "on", (VAR_3 > 2 ? VAR_3 : 2)) == 0)
  *VAR_2 = 1;
 else if (FUNC_2(VAR_0, "off", (VAR_3 > 2 ? VAR_3 : 2)) == 0)
  *VAR_2 = 0;
 else if (FUNC_1(VAR_0, "1") == 0)
  *VAR_2 = 1;
 else if (FUNC_1(VAR_0, "0") == 0)
  *VAR_2 = 0;
 else
 {

  if (VAR_1)
   FUNC_0("unrecognized value \"%s\" for \"%s\": Boolean expected",
       VAR_0, VAR_1);
  VAR_4 = 0;
 }
 return VAR_4;
}
