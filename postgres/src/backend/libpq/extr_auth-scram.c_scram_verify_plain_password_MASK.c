
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef scalar_t__ pg_saslprep_rc ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,char const*) ;
 scalar_t__ FUNC_2 (int *,int *,int) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char const*,int*,char**,int *,int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int ,char*,int) ;
 scalar_t__ FUNC_8 (char const*,char**) ;
 int FUNC_9 (char const*,char*,int,int,int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (char*) ;

bool
FUNC_12(const char *VAR_3, const char *VAR_4,
       const char *VAR_5)
{
 char *VAR_6;
 char *VAR_7;
 int VAR_8;
 int VAR_9;
 uint8 VAR_10[VAR_2];
 uint8 VAR_11[VAR_2];
 uint8 VAR_12[VAR_2];
 uint8 VAR_13[VAR_2];
 char *VAR_14;
 pg_saslprep_rc VAR_15;

 if (!FUNC_4(VAR_5, &VAR_9, &VAR_6,
         VAR_11, VAR_12))
 {



  FUNC_0(VAR_0,
    (FUNC_1("invalid SCRAM secret for user \"%s\"", VAR_3)));
  return 0;
 }

 VAR_8 = FUNC_6(FUNC_11(VAR_6));
 VAR_7 = FUNC_3(VAR_8);
 VAR_8 = FUNC_7(VAR_6, FUNC_11(VAR_6), VAR_7,
       VAR_8);
 if (VAR_8 < 0)
 {
  FUNC_0(VAR_0,
    (FUNC_1("invalid SCRAM secret for user \"%s\"", VAR_3)));
  return 0;
 }


 VAR_15 = FUNC_8(VAR_4, &VAR_14);
 if (VAR_15 == VAR_1)
  VAR_4 = VAR_14;


 FUNC_9(VAR_4, VAR_7, VAR_8, VAR_9, VAR_10);
 FUNC_10(VAR_10, VAR_13);

 if (VAR_14)
  FUNC_5(VAR_14);





 return FUNC_2(VAR_13, VAR_12, VAR_2) == 0;
}
