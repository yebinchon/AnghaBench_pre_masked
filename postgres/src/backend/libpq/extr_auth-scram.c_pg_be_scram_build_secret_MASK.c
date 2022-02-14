
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pg_saslprep_rc ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char const*,char**) ;
 int FUNC_5 (char*,int) ;
 char* FUNC_6 (char*,int,int ,char const*) ;

char *
FUNC_7(const char *VAR_5)
{
 char *VAR_6;
 pg_saslprep_rc VAR_7;
 char VAR_8[VAR_4];
 char *VAR_9;






 VAR_7 = FUNC_4(VAR_5, &VAR_6);
 if (VAR_7 == VAR_2)
  VAR_5 = (const char *) VAR_6;


 if (!FUNC_5(VAR_8, VAR_4))
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("could not generate random salt")));

 VAR_9 = FUNC_6(VAR_8, VAR_4,
          VAR_3, VAR_5);

 if (VAR_6)
  FUNC_3(VAR_6);

 return VAR_9;
}
