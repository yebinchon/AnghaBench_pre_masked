
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int opcintype; int oid; } ;
typedef int Oid ;
typedef int List ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_opclass ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char**,char**) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,int) ;
 int * VAR_5 ;
 char* FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ,int ,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (char*,char*,char const*) ;
 char const* FUNC_18 (int ) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 char* FUNC_21 (int ) ;
 scalar_t__ FUNC_22 (char*,char*) ;

Oid
FUNC_23(List *VAR_6, Oid VAR_7,
      const char *VAR_8, Oid VAR_9)
{
 char *VAR_10;
 char *VAR_11;
 HeapTuple VAR_12;
 Form_pg_opclass VAR_13;
 Oid VAR_14,
    VAR_15;
 if (FUNC_20(VAR_6) == 1)
 {
  char *VAR_16 = FUNC_21(FUNC_19(VAR_6));

  if (FUNC_22(VAR_16, "network_ops") == 0 ||
   FUNC_22(VAR_16, "timespan_ops") == 0 ||
   FUNC_22(VAR_16, "datetime_ops") == 0 ||
   FUNC_22(VAR_16, "lztext_ops") == 0 ||
   FUNC_22(VAR_16, "timestamp_ops") == 0 ||
   FUNC_22(VAR_16, "bigbox_ops") == 0)
   VAR_6 = VAR_5;
 }

 if (VAR_6 == VAR_5)
 {

  VAR_14 = FUNC_2(VAR_7, VAR_9);
  if (!FUNC_8(VAR_14))
   FUNC_14(VAR_4,
     (FUNC_15(VAR_3),
      FUNC_17("data type %s has no default operator class for access method \"%s\"",
       FUNC_18(VAR_7), VAR_8),
      FUNC_16("You must specify an operator class for the index or define a default operator class for the data type.")));
  return VAR_14;
 }






 FUNC_0(VAR_6, &VAR_10, &VAR_11);

 if (VAR_10)
 {

  Oid VAR_17;

  VAR_17 = FUNC_5(VAR_10, 0);
  VAR_12 = FUNC_13(VAR_0,
        FUNC_7(VAR_9),
        FUNC_10(VAR_11),
        FUNC_7(VAR_17));
 }
 else
 {

  VAR_14 = FUNC_9(VAR_9, VAR_11);
  if (!FUNC_8(VAR_14))
   FUNC_14(VAR_4,
     (FUNC_15(VAR_3),
      FUNC_17("operator class \"%s\" does not exist for access method \"%s\"",
       VAR_11, VAR_8)));
  VAR_12 = FUNC_12(VAR_1, FUNC_7(VAR_14));
 }

 if (!FUNC_3(VAR_12))
  FUNC_14(VAR_4,
    (FUNC_15(VAR_3),
     FUNC_17("operator class \"%s\" does not exist for access method \"%s\"",
      FUNC_6(VAR_6), VAR_8)));





 VAR_13 = (Form_pg_opclass) FUNC_1(VAR_12);
 VAR_14 = VAR_13->oid;
 VAR_15 = VAR_13->opcintype;

 if (!FUNC_4(VAR_7, VAR_15))
  FUNC_14(VAR_4,
    (FUNC_15(VAR_2),
     FUNC_17("operator class \"%s\" does not accept data type %s",
      FUNC_6(VAR_6), FUNC_18(VAR_7))));

 FUNC_11(VAR_12);

 return VAR_14;
}
