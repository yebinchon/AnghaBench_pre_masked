
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (float) ;
 double FUNC_1 (char const*,char**) ;

float
FUNC_2(const char *VAR_2, char **VAR_3)
{
 int VAR_4 = VAR_1;
 double VAR_5;
 float VAR_6;

 VAR_1 = 0;
 VAR_5 = FUNC_1(VAR_2, VAR_3);
 VAR_6 = (float) VAR_5;

 if (VAR_1 == 0)
 {



  if (VAR_5 != 0 && VAR_6 == 0)
   VAR_4 = VAR_0;
  if (!FUNC_0(VAR_5) && FUNC_0(VAR_6))
   VAR_4 = VAR_0;
 }
 else
  VAR_4 = VAR_1;

 VAR_1 = VAR_4;
 return VAR_6;
}
