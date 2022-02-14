
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int client_encoding; int errorMessage; } ;
typedef TYPE_1__ PGconn ;


 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int) ;
 int * FUNC_3 (char const*,int ,int) ;
 int FUNC_4 (char*,char const*,int) ;
 int FUNC_5 (int ,char const*) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static char *
FUNC_7(PGconn *VAR_0, const char *VAR_1, size_t VAR_2, bool VAR_3)
{
 const char *VAR_4;
 char *VAR_5;
 char *VAR_6;
 int VAR_7 = 0;
 int VAR_8 = 0;
 int VAR_9;
 int VAR_10;
 char VAR_11 = VAR_3 ? '"' : '\'';


 if (!VAR_0)
  return ((void*)0);


 for (VAR_4 = VAR_1; (VAR_4 - VAR_1) < VAR_2 && *VAR_4 != '\0'; ++VAR_4)
 {
  if (*VAR_4 == VAR_11)
   ++VAR_7;
  else if (*VAR_4 == '\\')
   ++VAR_8;
  else if (FUNC_0(*VAR_4))
  {
   int VAR_12;


   VAR_12 = FUNC_5(VAR_0->client_encoding, VAR_4);


   if ((VAR_4 - VAR_1) + VAR_12 > VAR_2 || FUNC_3(VAR_4, 0, VAR_12) != ((void*)0))
   {
    FUNC_6(&VAR_0->errorMessage,
          FUNC_1("incomplete multibyte character\n"));
    return ((void*)0);
   }


   VAR_4 += VAR_12 - 1;
  }
 }


 VAR_9 = VAR_4 - VAR_1;
 VAR_10 = VAR_9 + VAR_7 + 3;
 if (!VAR_3 && VAR_8 > 0)
  VAR_10 += VAR_8 + 2;
 VAR_5 = VAR_6 = (char *) FUNC_2(VAR_10);
 if (VAR_6 == ((void*)0))
 {
  FUNC_6(&VAR_0->errorMessage,
        FUNC_1("out of memory\n"));
  return ((void*)0);
 }
 if (!VAR_3 && VAR_8 > 0)
 {
  *VAR_6++ = ' ';
  *VAR_6++ = 'E';
 }


 *VAR_6++ = VAR_11;
 if (VAR_7 == 0 && (VAR_8 == 0 || VAR_3))
 {
  FUNC_4(VAR_6, VAR_1, VAR_9);
  VAR_6 += VAR_9;
 }
 else
 {
  for (VAR_4 = VAR_1; VAR_4 - VAR_1 < VAR_9; ++VAR_4)
  {
   if (*VAR_4 == VAR_11 || (!VAR_3 && *VAR_4 == '\\'))
   {
    *VAR_6++ = *VAR_4;
    *VAR_6++ = *VAR_4;
   }
   else if (!FUNC_0(*VAR_4))
    *VAR_6++ = *VAR_4;
   else
   {
    int VAR_13 = FUNC_5(VAR_0->client_encoding, VAR_4);

    while (1)
    {
     *VAR_6++ = *VAR_4;
     if (--VAR_13 == 0)
      break;
     ++VAR_4;
    }
   }
  }
 }


 *VAR_6++ = VAR_11;
 *VAR_6 = '\0';

 return VAR_5;
}
