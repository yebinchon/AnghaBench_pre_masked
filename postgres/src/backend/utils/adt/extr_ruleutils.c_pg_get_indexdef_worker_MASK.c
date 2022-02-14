
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__* values; } ;
typedef TYPE_2__ oidvector ;
typedef int int32 ;
struct TYPE_17__ {int* values; } ;
typedef TYPE_3__ int2vector ;
typedef int int16 ;
struct TYPE_22__ {int amname; int amhandler; } ;
struct TYPE_21__ {scalar_t__ relam; scalar_t__ relkind; int relname; } ;
struct TYPE_15__ {scalar_t__* values; } ;
struct TYPE_20__ {scalar_t__ indrelid; scalar_t__ indexrelid; int indnatts; int indnkeyatts; TYPE_1__ indkey; scalar_t__ indisunique; } ;
struct TYPE_19__ {scalar_t__ amcanorder; } ;
struct TYPE_18__ {char* data; } ;
typedef TYPE_4__ StringInfoData ;
typedef scalar_t__ Oid ;
typedef int Node ;
typedef int ListCell ;
typedef int List ;
typedef TYPE_5__ IndexAmRoutine ;
typedef int HeapTuple ;
typedef TYPE_6__* Form_pg_index ;
typedef TYPE_7__* Form_pg_class ;
typedef TYPE_8__* Form_pg_am ;
typedef int Datum ;
typedef scalar_t__ AttrNumber ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_5__* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ,int ,int*) ;
 char* FUNC_11 (int ) ;
 int FUNC_12 (TYPE_4__*,char*,char*,...) ;
 int FUNC_13 (TYPE_4__*,char) ;
 int FUNC_14 (TYPE_4__*,char*) ;
 int * FUNC_15 (int ,scalar_t__) ;
 char* FUNC_16 (int *,int *,int,int,int,int ) ;
 int FUNC_17 (int ,char*,...) ;
 scalar_t__ FUNC_18 (int *) ;
 scalar_t__ FUNC_19 (int *) ;
 char* FUNC_20 (scalar_t__) ;
 char* FUNC_21 (scalar_t__) ;
 char* FUNC_22 (scalar_t__ const,scalar_t__,scalar_t__) ;
 int FUNC_23 (scalar_t__) ;
 int FUNC_24 (scalar_t__,int *) ;
 char* FUNC_25 (scalar_t__,scalar_t__,int) ;
 int FUNC_26 (scalar_t__,scalar_t__,scalar_t__*,int *,scalar_t__*) ;
 int FUNC_27 (scalar_t__,scalar_t__,TYPE_4__*) ;
 scalar_t__ FUNC_28 (scalar_t__) ;
 int FUNC_29 (scalar_t__) ;
 char* FUNC_30 (scalar_t__) ;
 int FUNC_31 (int ,int ,int *) ;
 int FUNC_32 (TYPE_4__*) ;
 scalar_t__ FUNC_33 (int *) ;
 int * FUNC_34 (int *) ;
 int * FUNC_35 (int *,int *) ;
 scalar_t__ FUNC_36 (int *) ;
 int FUNC_37 (char*) ;
 char* FUNC_38 (char*) ;
 scalar_t__ FUNC_39 (char*) ;

__attribute__((used)) static char *
FUNC_40(Oid VAR_14, int VAR_15,
        const Oid *VAR_16,
        bool VAR_17, bool VAR_18,
        bool VAR_19, bool VAR_20,
        int VAR_21, bool VAR_22)
{

 bool VAR_23 = (VAR_16 != ((void*)0));
 HeapTuple VAR_24;
 HeapTuple VAR_25;
 HeapTuple VAR_26;
 Form_pg_index VAR_27;
 Form_pg_class VAR_28;
 Form_pg_am VAR_29;
 IndexAmRoutine *VAR_30;
 List *VAR_31;
 ListCell *VAR_32;
 List *VAR_33;
 Oid VAR_34;
 int VAR_35;
 Datum VAR_36;
 Datum VAR_37;
 Datum VAR_38;
 bool VAR_39;
 oidvector *VAR_40;
 oidvector *VAR_41;
 int2vector *VAR_42;
 StringInfoData VAR_43;
 char *VAR_44;
 char *VAR_45;




 VAR_24 = FUNC_9(VAR_7, FUNC_6(VAR_14));
 if (!FUNC_4(VAR_24))
 {
  if (VAR_22)
   return ((void*)0);
  FUNC_17(VAR_6, "cache lookup failed for index %u", VAR_14);
 }
 VAR_27 = (Form_pg_index) FUNC_2(VAR_24);

 VAR_34 = VAR_27->indrelid;
 FUNC_0(VAR_14 == VAR_27->indexrelid);


 VAR_36 = FUNC_10(VAR_7, VAR_24,
           VAR_2, &VAR_39);
 FUNC_0(!VAR_39);
 VAR_40 = (oidvector *) FUNC_1(VAR_36);

 VAR_37 = FUNC_10(VAR_7, VAR_24,
         VAR_1, &VAR_39);
 FUNC_0(!VAR_39);
 VAR_41 = (oidvector *) FUNC_1(VAR_37);

 VAR_38 = FUNC_10(VAR_7, VAR_24,
          VAR_4, &VAR_39);
 FUNC_0(!VAR_39);
 VAR_42 = (int2vector *) FUNC_1(VAR_38);




 VAR_25 = FUNC_9(VAR_13, FUNC_6(VAR_14));
 if (!FUNC_4(VAR_25))
  FUNC_17(VAR_6, "cache lookup failed for relation %u", VAR_14);
 VAR_28 = (Form_pg_class) FUNC_2(VAR_25);




 VAR_26 = FUNC_9(VAR_0, FUNC_6(VAR_28->relam));
 if (!FUNC_4(VAR_26))
  FUNC_17(VAR_6, "cache lookup failed for access method %u",
    VAR_28->relam);
 VAR_29 = (Form_pg_am) FUNC_2(VAR_26);


 VAR_30 = FUNC_3(VAR_29->amhandler);






 if (!FUNC_31(VAR_24, VAR_3, ((void*)0)))
 {
  Datum VAR_46;
  bool VAR_47;
  char *VAR_48;

  VAR_46 = FUNC_10(VAR_7, VAR_24,
          VAR_3, &VAR_47);
  FUNC_0(!VAR_47);
  VAR_48 = FUNC_11(VAR_46);
  VAR_31 = (List *) FUNC_39(VAR_48);
  FUNC_37(VAR_48);
 }
 else
  VAR_31 = VAR_10;

 VAR_32 = FUNC_34(VAR_31);

 VAR_33 = FUNC_15(FUNC_29(VAR_34), VAR_34);





 FUNC_32(&VAR_43);

 if (!VAR_17)
 {
  if (!VAR_23)
   FUNC_12(&VAR_43, "CREATE %sINDEX %s ON %s%s USING %s (",
        VAR_27->indisunique ? "UNIQUE " : "",
        FUNC_38(FUNC_5(VAR_28->relname)),
        VAR_28->relkind == VAR_12
        && !VAR_20 ? "ONLY " : "",
        (VAR_21 & VAR_11) ?
        FUNC_24(VAR_34, VAR_10) :
        FUNC_23(VAR_34),
        FUNC_38(FUNC_5(VAR_29->amname)));
  else
   FUNC_12(&VAR_43, "EXCLUDE USING %s (",
        FUNC_38(FUNC_5(VAR_29->amname)));
 }




 VAR_45 = "";
 for (VAR_35 = 0; VAR_35 < VAR_27->indnatts; VAR_35++)
 {
  AttrNumber VAR_49 = VAR_27->indkey.values[VAR_35];
  Oid VAR_50;
  Oid VAR_51;




  if (VAR_18 && VAR_35 >= VAR_27->indnkeyatts)
   break;


  if (!VAR_15 && VAR_35 == VAR_27->indnkeyatts)
  {
   FUNC_14(&VAR_43, ") INCLUDE (");
   VAR_45 = "";
  }

  if (!VAR_15)
   FUNC_14(&VAR_43, VAR_45);
  VAR_45 = ", ";

  if (VAR_49 != 0)
  {

   char *VAR_52;
   int32 VAR_53;

   VAR_52 = FUNC_25(VAR_34, VAR_49, 0);
   if (!VAR_15 || VAR_15 == VAR_35 + 1)
    FUNC_14(&VAR_43, FUNC_38(VAR_52));
   FUNC_26(VAR_34, VAR_49,
          &VAR_50, &VAR_53,
          &VAR_51);
  }
  else
  {

   Node *VAR_54;

   if (VAR_32 == ((void*)0))
    FUNC_17(VAR_6, "too few entries in indexprs list");
   VAR_54 = (Node *) FUNC_33(VAR_32);
   VAR_32 = FUNC_35(VAR_31, VAR_32);

   VAR_44 = FUNC_16(VAR_54, VAR_33, 0, 0,
           VAR_21, 0);
   if (!VAR_15 || VAR_15 == VAR_35 + 1)
   {

    if (FUNC_36(VAR_54))
     FUNC_14(&VAR_43, VAR_44);
    else
     FUNC_12(&VAR_43, "(%s)", VAR_44);
   }
   VAR_50 = FUNC_19(VAR_54);
   VAR_51 = FUNC_18(VAR_54);
  }


  if (!VAR_17 && VAR_35 < VAR_27->indnkeyatts &&
   (!VAR_15 || VAR_15 == VAR_35 + 1))
  {
   int16 VAR_55 = VAR_42->values[VAR_35];
   Oid VAR_56 = VAR_40->values[VAR_35];


   if (FUNC_7(VAR_56) && VAR_56 != VAR_51)
    FUNC_12(&VAR_43, " COLLATE %s",
         FUNC_21((VAR_56)));


   FUNC_27(VAR_41->values[VAR_35], VAR_50, &VAR_43);


   if (VAR_30->amcanorder)
   {

    if (VAR_55 & VAR_8)
    {
     FUNC_14(&VAR_43, " DESC");

     if (!(VAR_55 & VAR_9))
      FUNC_14(&VAR_43, " NULLS LAST");
    }
    else
    {
     if (VAR_55 & VAR_9)
      FUNC_14(&VAR_43, " NULLS FIRST");
    }
   }


   if (VAR_16 != ((void*)0))
    FUNC_12(&VAR_43, " WITH %s",
         FUNC_22(VAR_16[VAR_35],
              VAR_50,
              VAR_50));
  }
 }

 if (!VAR_17)
 {
  FUNC_13(&VAR_43, ')');




  VAR_44 = FUNC_20(VAR_14);
  if (VAR_44)
  {
   FUNC_12(&VAR_43, " WITH (%s)", VAR_44);
   FUNC_37(VAR_44);
  }




  if (VAR_19)
  {
   Oid VAR_57;

   VAR_57 = FUNC_28(VAR_14);
   if (FUNC_7(VAR_57))
   {
    if (VAR_23)
     FUNC_14(&VAR_43, " USING INDEX");
    FUNC_12(&VAR_43, " TABLESPACE %s",
         FUNC_38(FUNC_30(VAR_57)));
   }
  }




  if (!FUNC_31(VAR_24, VAR_5, ((void*)0)))
  {
   Node *VAR_58;
   Datum VAR_59;
   bool VAR_60;
   char *VAR_61;


   VAR_59 = FUNC_10(VAR_7, VAR_24,
          VAR_5, &VAR_60);
   FUNC_0(!VAR_60);
   VAR_61 = FUNC_11(VAR_59);
   VAR_58 = (Node *) FUNC_39(VAR_61);
   FUNC_37(VAR_61);


   VAR_44 = FUNC_16(VAR_58, VAR_33, 0, 0,
           VAR_21, 0);
   if (VAR_23)
    FUNC_12(&VAR_43, " WHERE (%s)", VAR_44);
   else
    FUNC_12(&VAR_43, " WHERE %s", VAR_44);
  }
 }


 FUNC_8(VAR_24);
 FUNC_8(VAR_25);
 FUNC_8(VAR_26);

 return VAR_43.data;
}
