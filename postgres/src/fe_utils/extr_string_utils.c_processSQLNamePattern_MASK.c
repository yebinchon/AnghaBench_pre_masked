
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {char* data; int len; } ;
typedef TYPE_1__ PQExpBufferData ;
typedef TYPE_1__* PQExpBuffer ;
typedef int PGconn ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char const*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*,char*,char const*) ;
 int FUNC_5 (TYPE_1__*,char const) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (TYPE_1__*,char*,int *) ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (unsigned char) ;
 char FUNC_10 (unsigned char) ;
 int FUNC_11 (TYPE_1__*) ;
 scalar_t__ FUNC_12 (char*,char) ;
 scalar_t__ FUNC_13 (char*,char*) ;
 int FUNC_14 (TYPE_1__*) ;

bool
FUNC_15(PGconn *VAR_0, PQExpBuffer VAR_1, const char *VAR_2,
       bool VAR_3, bool VAR_4,
       const char *VAR_5, const char *VAR_6,
       const char *VAR_7, const char *VAR_8)
{
 PQExpBufferData VAR_9;
 PQExpBufferData VAR_10;
 int VAR_11 = FUNC_0(VAR_0);
 bool VAR_12;
 const char *VAR_13;
 int VAR_14;
 bool VAR_15 = 0;





 if (VAR_2 == ((void*)0))
 {

  if (VAR_8)
  {
   (FUNC_6(VAR_1, VAR_3 ? "  AND " : "WHERE "), VAR_3 = 1, VAR_15 = 1);
   FUNC_4(VAR_1, "%s\n", VAR_8);
  }
  return VAR_15;
 }

 FUNC_8(&VAR_9);
 FUNC_8(&VAR_10);
 FUNC_6(&VAR_10, "^(");

 VAR_12 = 0;
 VAR_13 = VAR_2;

 while (*VAR_13)
 {
  char VAR_16 = *VAR_13;

  if (VAR_16 == '"')
  {
   if (VAR_12 && VAR_13[1] == '"')
   {

    FUNC_5(&VAR_10, '"');
    VAR_13++;
   }
   else
    VAR_12 = !VAR_12;
   VAR_13++;
  }
  else if (!VAR_12 && FUNC_9((unsigned char) VAR_16))
  {
   FUNC_5(&VAR_10,
          FUNC_10((unsigned char) VAR_16));
   VAR_13++;
  }
  else if (!VAR_12 && VAR_16 == '*')
  {
   FUNC_6(&VAR_10, ".*");
   VAR_13++;
  }
  else if (!VAR_12 && VAR_16 == '?')
  {
   FUNC_5(&VAR_10, '.');
   VAR_13++;
  }
  else if (!VAR_12 && VAR_16 == '.')
  {

   FUNC_11(&VAR_9);
   FUNC_6(&VAR_9, VAR_10.data);
   FUNC_11(&VAR_10);
   FUNC_6(&VAR_10, "^(");
   VAR_13++;
  }
  else if (VAR_16 == '$')
  {







   FUNC_6(&VAR_10, "\\$");
   VAR_13++;
  }
  else
  {
   if ((VAR_12 || VAR_4) &&
    FUNC_12("|*+?()[]{}.^$\\", VAR_16))
    FUNC_5(&VAR_10, '\\');
   VAR_14 = FUNC_1(VAR_13, VAR_11);
   while (VAR_14-- && *VAR_13)
   {
    FUNC_5(&VAR_10, *VAR_13);
    VAR_13++;
   }
  }
 }
 if (VAR_10.len > 2)
 {


  FUNC_6(&VAR_10, ")$");

  if (FUNC_13(VAR_10.data, "^(.*)$") != 0)
  {
   (FUNC_6(VAR_1, VAR_3 ? "  AND " : "WHERE "), VAR_3 = 1, VAR_15 = 1);
   if (VAR_7)
   {
    FUNC_4(VAR_1,
          "(%s OPERATOR(pg_catalog.~) ", VAR_6);
    FUNC_7(VAR_1, VAR_10.data, VAR_0);
    if (FUNC_2(VAR_0) >= 120000)
     FUNC_6(VAR_1, " COLLATE pg_catalog.default");
    FUNC_4(VAR_1,
          "\n        OR %s OPERATOR(pg_catalog.~) ",
          VAR_7);
    FUNC_7(VAR_1, VAR_10.data, VAR_0);
    if (FUNC_2(VAR_0) >= 120000)
     FUNC_6(VAR_1, " COLLATE pg_catalog.default");
    FUNC_6(VAR_1, ")\n");
   }
   else
   {
    FUNC_4(VAR_1, "%s OPERATOR(pg_catalog.~) ", VAR_6);
    FUNC_7(VAR_1, VAR_10.data, VAR_0);
    if (FUNC_2(VAR_0) >= 120000)
     FUNC_6(VAR_1, " COLLATE pg_catalog.default");
    FUNC_5(VAR_1, '\n');
   }
  }
 }

 if (VAR_9.len > 2)
 {


  FUNC_6(&VAR_9, ")$");

  if (FUNC_13(VAR_9.data, "^(.*)$") != 0 && VAR_5)
  {
   (FUNC_6(VAR_1, VAR_3 ? "  AND " : "WHERE "), VAR_3 = 1, VAR_15 = 1);
   FUNC_4(VAR_1, "%s OPERATOR(pg_catalog.~) ", VAR_5);
   FUNC_7(VAR_1, VAR_9.data, VAR_0);
   if (FUNC_2(VAR_0) >= 120000)
    FUNC_6(VAR_1, " COLLATE pg_catalog.default");
   FUNC_5(VAR_1, '\n');
  }
 }
 else
 {

  if (VAR_8)
  {
   (FUNC_6(VAR_1, VAR_3 ? "  AND " : "WHERE "), VAR_3 = 1, VAR_15 = 1);
   FUNC_4(VAR_1, "%s\n", VAR_8);
  }
 }

 FUNC_14(&VAR_9);
 FUNC_14(&VAR_10);

 return VAR_15;

}
