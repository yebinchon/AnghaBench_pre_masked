
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,char*,int) ;
 char* FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,char**,int) ;

bool
FUNC_9(const char *VAR_2, int *VAR_3, char **VAR_4,
      uint8 *VAR_5, uint8 *VAR_6)
{
 char *VAR_7;
 char *VAR_8;
 char *VAR_9;
 char *VAR_10;
 char *VAR_11;
 char *VAR_12;
 char *VAR_13;
 int VAR_14;
 char *VAR_15;
 char *VAR_16;
 char *VAR_17;






 VAR_7 = FUNC_4(VAR_2);
 if ((VAR_9 = FUNC_7(VAR_7, "$")) == ((void*)0))
  goto invalid_secret;
 if ((VAR_11 = FUNC_7(((void*)0), ":")) == ((void*)0))
  goto invalid_secret;
 if ((VAR_10 = FUNC_7(((void*)0), "$")) == ((void*)0))
  goto invalid_secret;
 if ((VAR_12 = FUNC_7(((void*)0), ":")) == ((void*)0))
  goto invalid_secret;
 if ((VAR_13 = FUNC_7(((void*)0), "")) == ((void*)0))
  goto invalid_secret;


 if (FUNC_5(VAR_9, "SCRAM-SHA-256") != 0)
  goto invalid_secret;

 VAR_1 = 0;
 *VAR_3 = FUNC_8(VAR_11, &VAR_8, 10);
 if (*VAR_8 || VAR_1 != 0)
  goto invalid_secret;





 VAR_14 = FUNC_2(FUNC_6(VAR_10));
 VAR_15 = FUNC_1(VAR_14);
 VAR_14 = FUNC_3(VAR_10, FUNC_6(VAR_10),
        VAR_15, VAR_14);
 if (VAR_14 < 0)
  goto invalid_secret;
 *VAR_4 = FUNC_4(VAR_10);




 VAR_14 = FUNC_2(FUNC_6(VAR_12));
 VAR_16 = FUNC_1(VAR_14);
 VAR_14 = FUNC_3(VAR_12, FUNC_6(VAR_12),
        VAR_16, VAR_14);
 if (VAR_14 != VAR_0)
  goto invalid_secret;
 FUNC_0(VAR_5, VAR_16, VAR_0);

 VAR_14 = FUNC_2(FUNC_6(VAR_13));
 VAR_17 = FUNC_1(VAR_14);
 VAR_14 = FUNC_3(VAR_13, FUNC_6(VAR_13),
        VAR_17, VAR_14);
 if (VAR_14 != VAR_0)
  goto invalid_secret;
 FUNC_0(VAR_6, VAR_17, VAR_0);

 return 1;

invalid_secret:
 *VAR_4 = ((void*)0);
 return 0;
}
