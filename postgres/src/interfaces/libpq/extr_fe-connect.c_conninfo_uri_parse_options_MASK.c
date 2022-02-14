
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char const* data; } ;
typedef int PQconninfoOption ;
typedef TYPE_1__ PQExpBufferData ;
typedef int PQExpBuffer ;


 scalar_t__ FUNC_0 (TYPE_1__) ;
 int FUNC_1 (TYPE_1__*,char) ;
 int FUNC_2 (TYPE_1__*,char const*) ;
 int FUNC_3 (int *,char*,char const*,int ,int,int) ;
 int FUNC_4 (char*,int *,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,int ,...) ;
 char* FUNC_9 (char const*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (char const*) ;

__attribute__((used)) static bool
FUNC_12(PQconninfoOption *VAR_0, const char *VAR_1,
         PQExpBuffer VAR_2)
{
 int VAR_3;
 char *VAR_4;
 char *VAR_5 = ((void*)0);
 char *VAR_6;
 char VAR_7 = '\0';
 char *VAR_8 = ((void*)0);
 char *VAR_9 = ((void*)0);
 bool VAR_10 = 0;
 PQExpBufferData VAR_11;
 PQExpBufferData VAR_12;

 FUNC_6(&VAR_11);
 FUNC_6(&VAR_12);
 if (FUNC_0(VAR_11) || FUNC_0(VAR_12))
 {
  FUNC_8(VAR_2,
        FUNC_7("out of memory\n"));
  goto cleanup;
 }


 VAR_5 = FUNC_9(VAR_1);
 if (VAR_5 == ((void*)0))
 {
  FUNC_8(VAR_2,
        FUNC_7("out of memory\n"));
  goto cleanup;
 }
 VAR_6 = VAR_5;


 VAR_3 = FUNC_11(VAR_1);
 if (VAR_3 == 0)
 {

  FUNC_8(VAR_2,
        FUNC_7("invalid URI propagated to internal parser routine: \"%s\"\n"),
        VAR_1);
  goto cleanup;
 }
 VAR_6 += VAR_3;
 VAR_4 = VAR_6;


 while (*VAR_4 && *VAR_4 != '@' && *VAR_4 != '/')
  ++VAR_4;
 if (*VAR_4 == '@')
 {




  VAR_8 = VAR_6;

  VAR_4 = VAR_8;
  while (*VAR_4 != ':' && *VAR_4 != '@')
   ++VAR_4;


  VAR_7 = *VAR_4;
  *VAR_4 = '\0';

  if (*VAR_8 &&
   !FUNC_3(VAR_0, "user", VAR_8,
          VAR_2, 0, 1))
   goto cleanup;

  if (VAR_7 == ':')
  {
   const char *VAR_13 = VAR_4 + 1;

   while (*VAR_4 != '@')
    ++VAR_4;
   *VAR_4 = '\0';

   if (*VAR_13 &&
    !FUNC_3(VAR_0, "password", VAR_13,
           VAR_2, 0, 1))
    goto cleanup;
  }


  ++VAR_4;
 }
 else
 {



  VAR_4 = VAR_6;
 }
 for (;;)
 {



  if (*VAR_4 == '[')
  {
   VAR_9 = ++VAR_4;
   while (*VAR_4 && *VAR_4 != ']')
    ++VAR_4;
   if (!*VAR_4)
   {
    FUNC_8(VAR_2,
          FUNC_7("end of string reached when looking for matching \"]\" in IPv6 host address in URI: \"%s\"\n"),
          VAR_1);
    goto cleanup;
   }
   if (VAR_4 == VAR_9)
   {
    FUNC_8(VAR_2,
          FUNC_7("IPv6 host address may not be empty in URI: \"%s\"\n"),
          VAR_1);
    goto cleanup;
   }


   *(VAR_4++) = '\0';





   if (*VAR_4 && *VAR_4 != ':' && *VAR_4 != '/' && *VAR_4 != '?' && *VAR_4 != ',')
   {
    FUNC_8(VAR_2,
          FUNC_7("unexpected character \"%c\" at position %d in URI (expected \":\" or \"/\"): \"%s\"\n"),
          *VAR_4, (int) (VAR_4 - VAR_5 + 1), VAR_1);
    goto cleanup;
   }
  }
  else
  {

   VAR_9 = VAR_4;





   while (*VAR_4 && *VAR_4 != ':' && *VAR_4 != '/' && *VAR_4 != '?' && *VAR_4 != ',')
    ++VAR_4;
  }


  VAR_7 = *VAR_4;
  *VAR_4 = '\0';

  FUNC_2(&VAR_11, VAR_9);

  if (VAR_7 == ':')
  {
   const char *VAR_14 = ++VAR_4;

   while (*VAR_4 && *VAR_4 != '/' && *VAR_4 != '?' && *VAR_4 != ',')
    ++VAR_4;

   VAR_7 = *VAR_4;
   *VAR_4 = '\0';

   FUNC_2(&VAR_12, VAR_14);
  }

  if (VAR_7 != ',')
   break;
  ++VAR_4;
  FUNC_1(&VAR_11, ',');
  FUNC_1(&VAR_12, ',');
 }


 if (FUNC_0(VAR_11) || FUNC_0(VAR_12))
  goto cleanup;
 if (VAR_11.data[0] &&
  !FUNC_3(VAR_0, "host", VAR_11.data,
         VAR_2, 0, 1))
  goto cleanup;
 if (VAR_12.data[0] &&
  !FUNC_3(VAR_0, "port", VAR_12.data,
         VAR_2, 0, 1))
  goto cleanup;

 if (VAR_7 && VAR_7 != '?')
 {
  const char *VAR_15 = ++VAR_4;


  while (*VAR_4 && *VAR_4 != '?')
   ++VAR_4;

  VAR_7 = *VAR_4;
  *VAR_4 = '\0';






  if (*VAR_15 &&
   !FUNC_3(VAR_0, "dbname", VAR_15,
          VAR_2, 0, 1))
   goto cleanup;
 }

 if (VAR_7)
 {
  ++VAR_4;

  if (!FUNC_4(VAR_4, VAR_0, VAR_2))
   goto cleanup;
 }


 VAR_10 = 1;

cleanup:
 FUNC_10(&VAR_11);
 FUNC_10(&VAR_12);
 if (VAR_5)
  FUNC_5(VAR_5);
 return VAR_10;
}
