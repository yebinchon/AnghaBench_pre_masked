
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int buf ;
struct TYPE_4__ {char* keyword; int * val; } ;
typedef TYPE_1__ PQconninfoOption ;
typedef int PQExpBuffer ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 char* FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char const*,char*) ;
 scalar_t__ FUNC_3 (unsigned char) ;
 int FUNC_4 (char*,TYPE_1__*,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int ,...) ;
 char* FUNC_7 (char*,char) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 int * FUNC_9 (char*) ;
 int FUNC_10 (char const*) ;
 scalar_t__ FUNC_11 (char*,char const*,int) ;

__attribute__((used)) static int
FUNC_12(const char *VAR_1,
     const char *VAR_2,
     PQconninfoOption *VAR_3,
     PQExpBuffer VAR_4,
     bool *VAR_5)
{
 int VAR_6 = 0,
    VAR_7;
 FILE *VAR_8;
 char VAR_9[VAR_0],
      *VAR_10;

 VAR_8 = FUNC_2(VAR_1, "r");
 if (VAR_8 == ((void*)0))
 {
  FUNC_6(VAR_4, FUNC_5("service file \"%s\" not found\n"),
        VAR_1);
  return 1;
 }

 while ((VAR_10 = FUNC_1(VAR_9, sizeof(VAR_9), VAR_8)) != ((void*)0))
 {
  int VAR_11;

  VAR_6++;

  if (FUNC_10(VAR_10) >= sizeof(VAR_9) - 1)
  {
   FUNC_0(VAR_8);
   FUNC_6(VAR_4,
         FUNC_5("line %d too long in service file \"%s\"\n"),
         VAR_6,
         VAR_1);
   return 2;
  }


  VAR_11 = FUNC_10(VAR_10);
  while (VAR_11 > 0 && FUNC_3((unsigned char) VAR_10[VAR_11 - 1]))
   VAR_10[--VAR_11] = '\0';


  while (*VAR_10 && FUNC_3((unsigned char) VAR_10[0]))
   VAR_10++;


  if (VAR_10[0] == '\0' || VAR_10[0] == '#')
   continue;


  if (VAR_10[0] == '[')
  {
   if (*VAR_5)
   {

    FUNC_0(VAR_8);
    return 0;
   }

   if (FUNC_11(VAR_10 + 1, VAR_2, FUNC_10(VAR_2)) == 0 &&
    VAR_10[FUNC_10(VAR_2) + 1] == ']')
    *VAR_5 = 1;
   else
    *VAR_5 = 0;
  }
  else
  {
   if (*VAR_5)
   {



    char *VAR_12,
         *VAR_13;
    bool VAR_14;
    VAR_12 = VAR_10;
    VAR_13 = FUNC_7(VAR_10, '=');
    if (VAR_13 == ((void*)0))
    {
     FUNC_6(VAR_4,
           FUNC_5("syntax error in service file \"%s\", line %d\n"),
           VAR_1,
           VAR_6);
     FUNC_0(VAR_8);
     return 3;
    }
    *VAR_13++ = '\0';

    if (FUNC_8(VAR_12, "service") == 0)
    {
     FUNC_6(VAR_4,
           FUNC_5("nested service specifications not supported in service file \"%s\", line %d\n"),
           VAR_1,
           VAR_6);
     FUNC_0(VAR_8);
     return 3;
    }





    VAR_14 = 0;
    for (VAR_7 = 0; VAR_3[VAR_7].keyword; VAR_7++)
    {
     if (FUNC_8(VAR_3[VAR_7].keyword, VAR_12) == 0)
     {
      if (VAR_3[VAR_7].val == ((void*)0))
       VAR_3[VAR_7].val = FUNC_9(VAR_13);
      if (!VAR_3[VAR_7].val)
      {
       FUNC_6(VAR_4,
             FUNC_5("out of memory\n"));
       FUNC_0(VAR_8);
       return 3;
      }
      VAR_14 = 1;
      break;
     }
    }

    if (!VAR_14)
    {
     FUNC_6(VAR_4,
           FUNC_5("syntax error in service file \"%s\", line %d\n"),
           VAR_1,
           VAR_6);
     FUNC_0(VAR_8);
     return 3;
    }
   }
  }
 }

 FUNC_0(VAR_8);

 return 0;
}
