
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PQconninfoOption ;
typedef int PQExpBuffer ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,char*,int ,int,int) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (unsigned char) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,int ,...) ;
 char* FUNC_8 (char const*) ;

__attribute__((used)) static PQconninfoOption *
FUNC_9(const char *VAR_0, PQExpBuffer VAR_1,
      bool VAR_2)
{
 char *VAR_3;
 char *VAR_4;
 char *VAR_5;
 char *VAR_6;
 char *VAR_7;
 PQconninfoOption *VAR_8;


 VAR_8 = FUNC_2(VAR_1);
 if (VAR_8 == ((void*)0))
  return ((void*)0);


 if ((VAR_5 = FUNC_8(VAR_0)) == ((void*)0))
 {
  FUNC_7(VAR_1,
        FUNC_6("out of memory\n"));
  FUNC_0(VAR_8);
  return ((void*)0);
 }
 VAR_6 = VAR_5;

 while (*VAR_6)
 {

  if (FUNC_5((unsigned char) *VAR_6))
  {
   VAR_6++;
   continue;
  }


  VAR_3 = VAR_6;
  while (*VAR_6)
  {
   if (*VAR_6 == '=')
    break;
   if (FUNC_5((unsigned char) *VAR_6))
   {
    *VAR_6++ = '\0';
    while (*VAR_6)
    {
     if (!FUNC_5((unsigned char) *VAR_6))
      break;
     VAR_6++;
    }
    break;
   }
   VAR_6++;
  }


  if (*VAR_6 != '=')
  {
   FUNC_7(VAR_1,
         FUNC_6("missing \"=\" after \"%s\" in connection info string\n"),
         VAR_3);
   FUNC_0(VAR_8);
   FUNC_4(VAR_5);
   return ((void*)0);
  }
  *VAR_6++ = '\0';


  while (*VAR_6)
  {
   if (!FUNC_5((unsigned char) *VAR_6))
    break;
   VAR_6++;
  }


  VAR_4 = VAR_6;

  if (*VAR_6 != '\'')
  {
   VAR_7 = VAR_4;
   while (*VAR_6)
   {
    if (FUNC_5((unsigned char) *VAR_6))
    {
     *VAR_6++ = '\0';
     break;
    }
    if (*VAR_6 == '\\')
    {
     VAR_6++;
     if (*VAR_6 != '\0')
      *VAR_7++ = *VAR_6++;
    }
    else
     *VAR_7++ = *VAR_6++;
   }
   *VAR_7 = '\0';
  }
  else
  {
   VAR_7 = VAR_4;
   VAR_6++;
   for (;;)
   {
    if (*VAR_6 == '\0')
    {
     FUNC_7(VAR_1,
           FUNC_6("unterminated quoted string in connection info string\n"));
     FUNC_0(VAR_8);
     FUNC_4(VAR_5);
     return ((void*)0);
    }
    if (*VAR_6 == '\\')
    {
     VAR_6++;
     if (*VAR_6 != '\0')
      *VAR_7++ = *VAR_6++;
     continue;
    }
    if (*VAR_6 == '\'')
    {
     *VAR_7 = '\0';
     VAR_6++;
     break;
    }
    *VAR_7++ = *VAR_6++;
   }
  }




  if (!FUNC_3(VAR_8, VAR_3, VAR_4, VAR_1, 0, 0))
  {
   FUNC_0(VAR_8);
   FUNC_4(VAR_5);
   return ((void*)0);
  }
 }


 FUNC_4(VAR_5);




 if (VAR_2)
 {
  if (!FUNC_1(VAR_8, VAR_1))
  {
   FUNC_0(VAR_8);
   return ((void*)0);
  }
 }

 return VAR_8;
}
