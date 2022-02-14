
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
struct debug_expect {int dummy; } ;
typedef int PGP_Context ;


 int VAR_0 ;
 char* FUNC_0 (int *,int) ;
 char* FUNC_1 (char*,char**,int*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,char*,char*,struct debug_expect*) ;

__attribute__((used)) static int
FUNC_4(PGP_Context *VAR_1, uint8 *VAR_2, int VAR_3,
     struct debug_expect *VAR_4)
{
 char *VAR_5 = FUNC_0(VAR_2, VAR_3);
 char *VAR_6,
      *VAR_7;
 int VAR_8,
    VAR_9;
 int VAR_10 = 0;
 char *VAR_11 = VAR_5;

 while (*VAR_11)
 {
  VAR_10 = VAR_0;
  VAR_11 = FUNC_1(VAR_11, &VAR_6, &VAR_8);
  if (*VAR_11++ != '=')
   break;
  VAR_11 = FUNC_1(VAR_11, &VAR_7, &VAR_9);
  if (*VAR_11 == '\0')
   ;
  else if (*VAR_11++ != ',')
   break;

  if (*VAR_6 == 0 || *VAR_7 == 0 || VAR_9 == 0)
   break;

  VAR_6[VAR_8] = 0;
  VAR_7[VAR_9] = 0;

  VAR_10 = FUNC_3(VAR_1, VAR_6, VAR_7, VAR_4);
  if (VAR_10 < 0)
   break;
 }
 FUNC_2(VAR_5);
 return VAR_10;
}
