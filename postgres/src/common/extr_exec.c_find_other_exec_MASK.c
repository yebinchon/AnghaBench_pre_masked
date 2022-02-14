
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int line ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,int,char*,char const*,...) ;
 scalar_t__ FUNC_5 (char*,char const*) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*) ;

int
FUNC_8(const char *VAR_2, const char *VAR_3,
    const char *VAR_4, char *VAR_5)
{
 char VAR_6[VAR_1];
 char VAR_7[VAR_1];

 if (FUNC_1(VAR_2, VAR_5) < 0)
  return -1;


 *FUNC_2(VAR_5) = '\0';
 FUNC_0(VAR_5);


 FUNC_4(VAR_5 + FUNC_6(VAR_5), VAR_1 - FUNC_6(VAR_5),
    "/%s%s", VAR_3, VAR_0);

 if (FUNC_7(VAR_5) != 0)
  return -1;

 FUNC_4(VAR_6, sizeof(VAR_6), "\"%s\" -V", VAR_5);

 if (!FUNC_3(VAR_6, VAR_7, sizeof(VAR_7)))
  return -1;

 if (FUNC_5(VAR_7, VAR_4) != 0)
  return -2;

 return 0;
}
