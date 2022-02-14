
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int dbname ;
struct TYPE_8__ {char* databaseId; } ;
struct TYPE_7__ {scalar_t__ canAcceptConnections; } ;
struct TYPE_6__ {char* oid; scalar_t__ dattablespace; int datname; } ;
typedef char* Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_database ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 () ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_5 (int ) ;
 char* FUNC_6 (char*,scalar_t__) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 int FUNC_20 () ;
 int FUNC_21 (char const*,char*) ;
 int FUNC_22 () ;
 scalar_t__ VAR_16 ;
 int FUNC_23 () ;
 scalar_t__ FUNC_24 () ;
 scalar_t__ FUNC_25 () ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_26 () ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int FUNC_27 (int ,char*,int ,int ) ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 char* VAR_24 ;
 scalar_t__ VAR_25 ;
 TYPE_5__* VAR_26 ;
 TYPE_2__* VAR_27 ;
 int VAR_28 ;
 char const* FUNC_28 (int ) ;
 scalar_t__ FUNC_29 (char*) ;
 int FUNC_30 (TYPE_2__*) ;
 long VAR_29 ;
 int FUNC_31 (scalar_t__) ;
 int FUNC_32 () ;
 int FUNC_33 (int ,int ) ;
 int FUNC_34 () ;
 int FUNC_35 () ;
 int FUNC_36 () ;
 int FUNC_37 (int) ;
 scalar_t__ VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_38 () ;
 int FUNC_39 (char*) ;
 int FUNC_40 (int) ;
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_41 () ;
 int FUNC_42 () ;
 int VAR_35 ;
 char* VAR_36 ;
 int FUNC_43 () ;
 int FUNC_44 (char*) ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int FUNC_45 (char*,int ) ;
 int VAR_40 ;
 scalar_t__ VAR_41 ;
 int FUNC_46 (int ,int ) ;
 int FUNC_47 (int ,char*,...) ;
 int FUNC_48 (int ,int ) ;
 int FUNC_49 (int ) ;
 int FUNC_50 () ;
 int FUNC_51 (char*,...) ;
 int FUNC_52 (char*,char const*) ;
 int FUNC_53 (char*,...) ;
 scalar_t__ VAR_42 ;
 int FUNC_54 (int ) ;
 int FUNC_55 () ;
 int FUNC_56 (int ,int ) ;
 int FUNC_57 (long) ;
 int FUNC_58 () ;
 int FUNC_59 () ;
 int FUNC_60 (char*,int ) ;
 int FUNC_61 (TYPE_2__*,int) ;
 int FUNC_62 (char*,char*) ;
 int FUNC_63 (char*,char const*,int) ;
 int FUNC_64 () ;

void
FUNC_65(const char *VAR_43, Oid VAR_44, const char *VAR_45,
    Oid VAR_46, char *VAR_47, bool VAR_48)
{
 bool VAR_49 = FUNC_26();
 bool VAR_50;
 char *VAR_51;
 char VAR_52[VAR_28];

 FUNC_47(VAR_4, "InitPostgres");






 FUNC_17();







 VAR_23 = VAR_16;

 FUNC_40(0);

 if (VAR_23 > VAR_22 || VAR_23 <= 0)
  FUNC_47(VAR_12, "bad backend ID: %d", VAR_23);


 FUNC_31(VAR_23);





 if (!VAR_49)
 {
  FUNC_33(VAR_3, VAR_1);
  FUNC_33(VAR_32, VAR_35);
  FUNC_33(VAR_20, VAR_21);
  FUNC_33(VAR_14,
      VAR_15);
 }




 FUNC_14();




 if (VAR_19)
 {






  (void) FUNC_32();
 }
 else
 {
  FUNC_3();

  FUNC_42();

  FUNC_37(1);

  VAR_2 = ((void*)0);

  FUNC_56(VAR_34, 0);
 }







 FUNC_34();
 FUNC_15();
 FUNC_16();


 FUNC_4();


 if (!VAR_49)
  FUNC_59();





 FUNC_35();
 FUNC_46(VAR_33, 0);


 if (FUNC_24())
 {

  FUNC_58();

  return;
 }
 if (!VAR_49)
 {

  FUNC_38();
  FUNC_41();







  VAR_39 = VAR_38;

  (void) FUNC_10();
 }
 if (VAR_49 || FUNC_25())
 {
  FUNC_22();
  VAR_50 = 1;
 }
 else if (!VAR_19)
 {
  FUNC_22();
  VAR_50 = 1;
  if (!FUNC_43())
   FUNC_48(VAR_37,
     (FUNC_49(VAR_11),
      FUNC_53("no roles are defined in this database system"),
      FUNC_52("You should immediately run CREATE USER \"%s\" SUPERUSER;.",
        VAR_45 != ((void*)0) ? VAR_45 : "postgres")));
 }
 else if (VAR_17)
 {
  if (VAR_45 == ((void*)0) && !FUNC_29(VAR_46))
  {
   FUNC_22();
   VAR_50 = 1;
  }
  else
  {
   FUNC_21(VAR_45, VAR_46);
   VAR_50 = FUNC_64();
  }
 }
 else
 {

  FUNC_0(VAR_27 != ((void*)0));
  FUNC_30(VAR_27);
  FUNC_21(VAR_45, VAR_46);
  VAR_50 = FUNC_64();
 }





 if ((!VAR_50 || VAR_41) &&
  VAR_27 != ((void*)0) &&
  VAR_27->canAcceptConnections == VAR_0)
 {
  if (VAR_41)
   FUNC_48(VAR_12,
     (FUNC_49(VAR_8),
      FUNC_53("new replication connections are not allowed during database shutdown")));
  else
   FUNC_48(VAR_12,
     (FUNC_49(VAR_8),
      FUNC_53("must be superuser to connect during database shutdown")));
 }




 if (VAR_18 && !VAR_50)
 {
  FUNC_48(VAR_12,
    (FUNC_49(VAR_8),
     FUNC_53("must be superuser to connect in binary upgrade mode")));
 }






 if (!VAR_50 && !VAR_41 &&
  VAR_30 > 0 &&
  !FUNC_12(VAR_30))
  FUNC_48(VAR_12,
    (FUNC_49(VAR_9),
     FUNC_53("remaining connection slots are reserved for non-replication superuser connections")));


 if (VAR_41)
 {
  FUNC_0(!VAR_49);

  if (!FUNC_64() && !FUNC_54(FUNC_11()))
   FUNC_48(VAR_12,
     (FUNC_49(VAR_8),
      FUNC_53("must be superuser or replication role to start walsender")));
 }







 if (VAR_41 && !VAR_40)
 {

  if (VAR_27 != ((void*)0))
   FUNC_61(VAR_27, VAR_50);


  if (VAR_29 > 0)
   FUNC_57(VAR_29 * 1000000L);


  FUNC_18();


  FUNC_58();


  FUNC_2();

  return;
 }
 if (VAR_49)
 {
  VAR_24 = VAR_36;
  VAR_25 = VAR_5;
 }
 else if (VAR_43 != ((void*)0))
 {
  HeapTuple VAR_53;
  Form_pg_database VAR_54;

  VAR_53 = FUNC_7(VAR_43);
  if (!FUNC_13(VAR_53))
   FUNC_48(VAR_12,
     (FUNC_49(VAR_10),
      FUNC_53("database \"%s\" does not exist", VAR_43)));
  VAR_54 = (Form_pg_database) FUNC_5(VAR_53);
  VAR_24 = VAR_54->oid;
  VAR_25 = VAR_54->dattablespace;

  FUNC_63(VAR_52, VAR_43, sizeof(VAR_52));
 }
 else if (FUNC_29(VAR_44))
 {

  HeapTuple VAR_55;
  Form_pg_database VAR_56;

  VAR_55 = FUNC_8(VAR_44);
  if (!FUNC_13(VAR_55))
   FUNC_48(VAR_12,
     (FUNC_49(VAR_10),
      FUNC_53("database %u does not exist", VAR_44)));
  VAR_56 = (Form_pg_database) FUNC_5(VAR_55);
  VAR_24 = VAR_56->oid;
  VAR_25 = VAR_56->dattablespace;
  FUNC_0(VAR_24 == VAR_44);
  FUNC_63(VAR_52, FUNC_28(VAR_56->datname), sizeof(VAR_52));

  if (VAR_47)
   FUNC_62(VAR_47, VAR_52);
 }
 else
 {






  if (!VAR_49)
  {
   FUNC_58();
   FUNC_2();
  }
  return;
 }
 if (!VAR_49)
  FUNC_27(VAR_6, VAR_24, 0,
       VAR_31);
 VAR_26->databaseId = VAR_24;







 FUNC_23();






 if (!VAR_49)
 {
  HeapTuple VAR_57;

  VAR_57 = FUNC_7(VAR_52);
  if (!FUNC_13(VAR_57) ||
   VAR_24 != ((Form_pg_database) FUNC_5(VAR_57))->oid ||
   VAR_25 != ((Form_pg_database) FUNC_5(VAR_57))->dattablespace)
   FUNC_48(VAR_12,
     (FUNC_49(VAR_10),
      FUNC_53("database \"%s\" does not exist", VAR_52),
      FUNC_51("It seems to have just been dropped or renamed.")));
 }





 VAR_51 = FUNC_6(VAR_24, VAR_25);

 if (!VAR_49)
 {
  if (FUNC_45(VAR_51, VAR_13) == -1)
  {
   if (VAR_42 == VAR_7)
    FUNC_48(VAR_12,
      (FUNC_49(VAR_10),
       FUNC_53("database \"%s\" does not exist",
        VAR_52),
       FUNC_51("The database subdirectory \"%s\" is missing.",
           VAR_51)));
   else
    FUNC_48(VAR_12,
      (FUNC_50(),
       FUNC_53("could not access directory \"%s\": %m",
        VAR_51)));
  }

  FUNC_44(VAR_51);
 }

 FUNC_39(VAR_51);







 FUNC_36();


 FUNC_55();







 if (!VAR_49)
  FUNC_1(VAR_52, VAR_50, VAR_48);






 if (VAR_27 != ((void*)0))
  FUNC_61(VAR_27, VAR_50);


 FUNC_60(VAR_24, FUNC_9());


 if (VAR_29 > 0)
  FUNC_57(VAR_29 * 1000000L);







 FUNC_19();


 FUNC_18();


 FUNC_20();


 if (!VAR_49)
  FUNC_58();


 if (!VAR_49)
  FUNC_2();
}
