
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* data; } ;
typedef int ReindexType ;
typedef TYPE_1__ PQExpBufferData ;
typedef int PGconn ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;





 int FUNC_5 (TYPE_1__*,char) ;
 int FUNC_6 (TYPE_1__*,char const*) ;
 int FUNC_7 (TYPE_1__*,char const*,int *,int) ;
 int FUNC_8 (int *,char*,int) ;
 int FUNC_9 (int) ;
 char const* FUNC_10 (char const*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (char*,char const*,int ,...) ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_15(PGconn *VAR_0, ReindexType VAR_1, const char *VAR_2,
     bool VAR_3, bool VAR_4, bool VAR_5, bool VAR_6)
{
 PQExpBufferData VAR_7;
 bool VAR_8;

 FUNC_0(VAR_2);


 FUNC_11(&VAR_7);

 FUNC_6(&VAR_7, "REINDEX ");

 if (VAR_4)
  FUNC_6(&VAR_7, "(VERBOSE) ");


 switch (VAR_1)
 {
  case 132:
   FUNC_6(&VAR_7, "DATABASE ");
   break;
  case 131:
   FUNC_6(&VAR_7, "INDEX ");
   break;
  case 130:
   FUNC_6(&VAR_7, "SCHEMA ");
   break;
  case 129:
   FUNC_6(&VAR_7, "SYSTEM ");
   break;
  case 128:
   FUNC_6(&VAR_7, "TABLE ");
   break;
 }

 if (VAR_5)
  FUNC_6(&VAR_7, "CONCURRENTLY ");


 switch (VAR_1)
 {
  case 132:
  case 129:
   FUNC_6(&VAR_7, FUNC_10(VAR_2));
   break;
  case 131:
  case 128:
   FUNC_7(&VAR_7, VAR_2, VAR_0, VAR_3);
   break;
  case 130:
   FUNC_6(&VAR_7, VAR_2);
   break;
 }


 FUNC_5(&VAR_7, ';');

 if (VAR_6)
 {
  if (VAR_3)
   FUNC_13("%s\n", VAR_7.data);

  VAR_8 = FUNC_4(VAR_0, VAR_7.data) == 1;
 }
 else
  VAR_8 = FUNC_8(VAR_0, VAR_7.data, VAR_3);

 if (!VAR_8)
 {
  switch (VAR_1)
  {
   case 132:
    FUNC_12("reindexing of database \"%s\" failed: %s",
        FUNC_1(VAR_0), FUNC_2(VAR_0));
    break;
   case 131:
    FUNC_12("reindexing of index \"%s\" in database \"%s\" failed: %s",
        VAR_2, FUNC_1(VAR_0), FUNC_2(VAR_0));
    break;
   case 130:
    FUNC_12("reindexing of schema \"%s\" in database \"%s\" failed: %s",
        VAR_2, FUNC_1(VAR_0), FUNC_2(VAR_0));
    break;
   case 129:
    FUNC_12("reindexing of system catalogs on database \"%s\" failed: %s",
        FUNC_1(VAR_0), FUNC_2(VAR_0));
    break;
   case 128:
    FUNC_12("reindexing of table \"%s\" in database \"%s\" failed: %s",
        VAR_2, FUNC_1(VAR_0), FUNC_2(VAR_0));
    break;
  }
  if (!VAR_6)
  {
   FUNC_3(VAR_0);
   FUNC_9(1);
  }
 }

 FUNC_14(&VAR_7);
}
