
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static bool
FUNC_5(char **VAR_1, char *VAR_2, int VAR_3,
     bool *VAR_4, bool *VAR_5,
     int VAR_6, char **VAR_7)
{
 int VAR_8;
 char *VAR_9 = VAR_2;
 char *VAR_10 = VAR_2 + (VAR_3 - 1);
 bool VAR_11 = 0;
 bool VAR_12 = 0;
 bool VAR_13 = 0;

 FUNC_0(VAR_10 > VAR_9);

 *VAR_4 = 0;
 *VAR_5 = 0;


 while ((VAR_8 = (*(*VAR_1)++)) != '\0' && (FUNC_4(VAR_8) || VAR_8 == ','))
  ;





 while (VAR_8 != '\0' &&
     (!FUNC_4(VAR_8) || VAR_11))
 {

  if (VAR_8 == '#' && !VAR_11)
  {
   while ((VAR_8 = (*(*VAR_1)++)) != '\0')
    ;
   break;
  }

  if (VAR_2 >= VAR_10)
  {
   *VAR_2 = '\0';
   FUNC_1(VAR_6,
     (FUNC_2(VAR_0),
      FUNC_3("authentication file token too long, skipping: \"%s\"",
       VAR_9)));
   *VAR_7 = "authentication file token too long";

   while ((VAR_8 = (*(*VAR_1)++)) != '\0')
    ;

   (*VAR_1)--;
   return 0;
  }


  if (VAR_8 == ',' && !VAR_11)
  {
   *VAR_5 = 1;
   break;
  }

  if (VAR_8 != '"' || VAR_12)
   *VAR_2++ = VAR_8;


  if (VAR_11 && VAR_8 == '"')
   VAR_12 = !VAR_12;
  else
   VAR_12 = 0;

  if (VAR_8 == '"')
  {
   VAR_11 = !VAR_11;
   VAR_13 = 1;
   if (VAR_2 == VAR_9)
    *VAR_4 = 1;
  }

  VAR_8 = *(*VAR_1)++;
 }





 (*VAR_1)--;

 *VAR_2 = '\0';

 return (VAR_13 || VAR_2 > VAR_9);
}
