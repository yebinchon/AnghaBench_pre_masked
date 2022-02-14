
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__* VAR_0 ;
 int FUNC_0 (char const*,int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (char const*) ;

const char *
FUNC_3(const char *VAR_4)
{





 int VAR_5 = 0;
 bool VAR_6;
 const char *VAR_7;
 char *VAR_8;
 char *VAR_9;





 VAR_6 = ((VAR_4[0] >= 'a' && VAR_4[0] <= 'z') || VAR_4[0] == '_');

 for (VAR_7 = VAR_4; *VAR_7; VAR_7++)
 {
  char VAR_10 = *VAR_7;

  if ((VAR_10 >= 'a' && VAR_10 <= 'z') ||
   (VAR_10 >= '0' && VAR_10 <= '9') ||
   (VAR_10 == '_'))
  {

  }
  else
  {
   VAR_6 = 0;
   if (VAR_10 == '"')
    VAR_5++;
  }
 }

 if (VAR_3)
  VAR_6 = 0;

 if (VAR_6)
 {
  int VAR_11 = FUNC_0(VAR_4, &VAR_1);

  if (VAR_11 >= 0 && VAR_0[VAR_11] != VAR_2)
   VAR_6 = 0;
 }

 if (VAR_6)
  return VAR_4;

 VAR_8 = (char *) FUNC_1(FUNC_2(VAR_4) + VAR_5 + 2 + 1);

 VAR_9 = VAR_8;
 *VAR_9++ = '"';
 for (VAR_7 = VAR_4; *VAR_7; VAR_7++)
 {
  char VAR_12 = *VAR_7;

  if (VAR_12 == '"')
   *VAR_9++ = '"';
  *VAR_9++ = VAR_12;
 }
 *VAR_9++ = '"';
 *VAR_9 = '\0';

 return VAR_8;
}
