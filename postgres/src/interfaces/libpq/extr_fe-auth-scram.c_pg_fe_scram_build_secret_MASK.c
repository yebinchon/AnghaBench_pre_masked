
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pg_saslprep_rc ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*,char**) ;
 int FUNC_2 (char*,int) ;
 char* FUNC_3 (char*,int,int ,char const*) ;

char *
FUNC_4(const char *VAR_4)
{
 char *VAR_5;
 pg_saslprep_rc VAR_6;
 char VAR_7[VAR_3];
 char *VAR_8;






 VAR_6 = FUNC_1(VAR_4, &VAR_5);
 if (VAR_6 == VAR_0)
  return ((void*)0);
 if (VAR_6 == VAR_1)
  VAR_4 = (const char *) VAR_5;


 if (!FUNC_2(VAR_7, VAR_3))
 {
  if (VAR_5)
   FUNC_0(VAR_5);
  return ((void*)0);
 }

 VAR_8 = FUNC_3(VAR_7, VAR_3,
          VAR_2, VAR_4);

 if (VAR_5)
  FUNC_0(VAR_5);

 return VAR_8;
}
