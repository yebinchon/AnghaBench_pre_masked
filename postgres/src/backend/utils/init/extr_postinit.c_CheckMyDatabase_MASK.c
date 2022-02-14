
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ datconnlimit; int datctype; int datcollate; int encoding; int datallowconn; int datname; } ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_database ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int ) ;
 char* FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (char*,char*,int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 () ;
 int FUNC_13 (int ,char*,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (char*,...) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (char*,...) ;
 scalar_t__ FUNC_19 (int ,int ,int ) ;
 int * FUNC_20 (int ,char*) ;
 scalar_t__ FUNC_21 (char const*,char*) ;

__attribute__((used)) static void
FUNC_22(const char *VAR_17, bool VAR_18, bool VAR_19)
{
 HeapTuple VAR_20;
 Form_pg_database VAR_21;
 char *VAR_22;
 char *VAR_23;


 VAR_20 = FUNC_9(VAR_2, FUNC_7(VAR_12));
 if (!FUNC_4(VAR_20))
  FUNC_13(VAR_7, "cache lookup failed for database %u", VAR_12);
 VAR_21 = (Form_pg_database) FUNC_1(VAR_20);


 if (FUNC_21(VAR_17, FUNC_6(VAR_21->datname)) != 0)
  FUNC_14(VAR_8,
    (FUNC_15(VAR_6),
     FUNC_18("database \"%s\" has disappeared from pg_database",
      VAR_17),
     FUNC_16("Database OID %u now seems to belong to \"%s\".",
         VAR_12, FUNC_6(VAR_21->datname))));
 if (VAR_9 && !FUNC_5())
 {



  if (!VAR_21->datallowconn && !VAR_19)
   FUNC_14(VAR_8,
     (FUNC_15(VAR_4),
      FUNC_18("database \"%s\" is not currently accepting connections",
       VAR_17)));






  if (!VAR_18 &&
   FUNC_19(VAR_12, FUNC_3(),
         VAR_1) != VAR_0)
   FUNC_14(VAR_8,
     (FUNC_15(VAR_3),
      FUNC_18("permission denied for database \"%s\"", VAR_17),
      FUNC_16("User does not have CONNECT privilege.")));
  if (VAR_21->datconnlimit >= 0 &&
   !VAR_18 &&
   FUNC_0(VAR_12) > VAR_21->datconnlimit)
   FUNC_14(VAR_8,
     (FUNC_15(VAR_5),
      FUNC_18("too many connections for database \"%s\"",
       VAR_17)));
 }





 FUNC_11(VAR_21->encoding);

 FUNC_10("server_encoding", FUNC_2(),
     VAR_14, VAR_16);

 FUNC_10("client_encoding", FUNC_2(),
     VAR_13, VAR_15);


 VAR_22 = FUNC_6(VAR_21->datcollate);
 VAR_23 = FUNC_6(VAR_21->datctype);

 if (FUNC_20(VAR_10, VAR_22) == ((void*)0))
  FUNC_14(VAR_8,
    (FUNC_18("database locale is incompatible with operating system"),
     FUNC_16("The database was initialized with LC_COLLATE \"%s\", "
         " which is not recognized by setlocale().", VAR_22),
     FUNC_17("Recreate the database with another locale or install the missing locale.")));

 if (FUNC_20(VAR_11, VAR_23) == ((void*)0))
  FUNC_14(VAR_8,
    (FUNC_18("database locale is incompatible with operating system"),
     FUNC_16("The database was initialized with LC_CTYPE \"%s\", "
         " which is not recognized by setlocale().", VAR_23),
     FUNC_17("Recreate the database with another locale or install the missing locale.")));


 FUNC_10("lc_collate", VAR_22, VAR_14, VAR_16);
 FUNC_10("lc_ctype", VAR_23, VAR_14, VAR_16);

 FUNC_12();

 FUNC_8(VAR_20);
}
