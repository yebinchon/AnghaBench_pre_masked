
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int text ;
struct TYPE_3__ {int rm_so; int rm_eo; } ;
typedef TYPE_1__ regmatch_t ;
typedef int StringInfo ;


 int FUNC_0 (int) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char const*,int) ;
 int FUNC_4 (int ,char) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 () ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static void
FUNC_8(StringInfo VAR_0, text *VAR_1,
        regmatch_t *VAR_2,
        char *VAR_3, int VAR_4)
{
 const char *VAR_5 = FUNC_1(VAR_1);
 const char *VAR_6 = VAR_5 + FUNC_2(VAR_1);
 int VAR_7 = FUNC_6();

 for (;;)
 {
  const char *VAR_8 = VAR_5;
  int VAR_9;
  int VAR_10;


  if (VAR_7 == 1)
  {
   for (; VAR_5 < VAR_6 && *VAR_5 != '\\'; VAR_5++)
                   ;
  }
  else
  {
   for (; VAR_5 < VAR_6 && *VAR_5 != '\\'; VAR_5 += FUNC_7(VAR_5))
                   ;
  }


  if (VAR_5 > VAR_8)
   FUNC_3(VAR_0, VAR_8, VAR_5 - VAR_8);


  if (VAR_5 >= VAR_6)
   break;
  VAR_5++;

  if (VAR_5 >= VAR_6)
  {

   FUNC_4(VAR_0, '\\');
   break;
  }

  if (*VAR_5 >= '1' && *VAR_5 <= '9')
  {

   int VAR_11 = *VAR_5 - '0';

   VAR_9 = VAR_2[VAR_11].rm_so;
   VAR_10 = VAR_2[VAR_11].rm_eo;
   VAR_5++;
  }
  else if (*VAR_5 == '&')
  {

   VAR_9 = VAR_2[0].rm_so;
   VAR_10 = VAR_2[0].rm_eo;
   VAR_5++;
  }
  else if (*VAR_5 == '\\')
  {

   FUNC_4(VAR_0, '\\');
   VAR_5++;
   continue;
  }
  else
  {





   FUNC_4(VAR_0, '\\');
   continue;
  }

  if (VAR_9 != -1 && VAR_10 != -1)
  {




   char *VAR_12;
   int VAR_13;

   FUNC_0(VAR_9 >= VAR_4);
   VAR_12 = VAR_3;
   VAR_12 += FUNC_5(VAR_12, VAR_9 - VAR_4);
   VAR_13 = FUNC_5(VAR_12, VAR_10 - VAR_9);
   FUNC_3(VAR_0, VAR_12, VAR_13);
  }
 }
}
