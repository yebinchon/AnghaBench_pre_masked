
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_8__ {scalar_t__ names; scalar_t__ arrayBounds; int location; scalar_t__ pct_type; int typeOid; } ;
typedef TYPE_1__ TypeName ;
typedef int * Type ;
struct TYPE_9__ {void* relname; void* schemaname; void* catalogname; } ;
typedef TYPE_2__ RangeVar ;
typedef int ParseState ;
typedef int ParseCallbackState ;
typedef int Oid ;
typedef scalar_t__ HeapTuple ;
typedef scalar_t__ AttrNumber ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,char**,char**) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (char*,int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (scalar_t__) ;
 int VAR_8 ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 char* FUNC_11 (TYPE_1__ const*) ;
 int FUNC_12 (char*,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,char*,int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (char*,char*,...) ;
 void* FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 scalar_t__ FUNC_20 (int ,char*) ;
 int FUNC_21 (int ,scalar_t__) ;
 int FUNC_22 (scalar_t__) ;
 int FUNC_23 (scalar_t__) ;
 int FUNC_24 (scalar_t__) ;
 int FUNC_25 (scalar_t__) ;
 int FUNC_26 (scalar_t__) ;
 TYPE_2__* FUNC_27 (int *,int *,int ) ;
 int FUNC_28 (int *,int ) ;
 int FUNC_29 (int *,int *,int ) ;
 void* FUNC_30 (int ) ;
 int FUNC_31 (int *,TYPE_1__ const*,int *) ;

Type
FUNC_32(ParseState *VAR_11,
        const TypeName *VAR_12, int32 *VAR_13,
        bool VAR_14, bool VAR_15)
{
 Oid VAR_16;
 HeapTuple VAR_17;
 int32 VAR_18;

 if (VAR_12->names == VAR_6)
 {

  VAR_16 = VAR_12->typeOid;
 }
 else if (VAR_12->pct_type)
 {

  RangeVar *VAR_19 = FUNC_27(((void*)0), ((void*)0), VAR_12->location);
  char *VAR_20 = ((void*)0);
  Oid VAR_21;
  AttrNumber VAR_22;


  switch (FUNC_24(VAR_12->names))
  {
   case 1:
    FUNC_15(VAR_3,
      (FUNC_16(VAR_1),
       FUNC_17("improper %%TYPE reference (too few dotted names): %s",
        FUNC_5(VAR_12->names)),
       FUNC_28(VAR_11, VAR_12->location)));
    break;
   case 2:
    VAR_19->relname = FUNC_30(FUNC_23(VAR_12->names));
    VAR_20 = FUNC_30(FUNC_25(VAR_12->names));
    break;
   case 3:
    VAR_19->schemaname = FUNC_30(FUNC_23(VAR_12->names));
    VAR_19->relname = FUNC_30(FUNC_25(VAR_12->names));
    VAR_20 = FUNC_30(FUNC_26(VAR_12->names));
    break;
   case 4:
    VAR_19->catalogname = FUNC_30(FUNC_23(VAR_12->names));
    VAR_19->schemaname = FUNC_30(FUNC_25(VAR_12->names));
    VAR_19->relname = FUNC_30(FUNC_26(VAR_12->names));
    VAR_20 = FUNC_30(FUNC_22(VAR_12->names));
    break;
   default:
    FUNC_15(VAR_3,
      (FUNC_16(VAR_1),
       FUNC_17("improper %%TYPE reference (too many dotted names): %s",
        FUNC_5(VAR_12->names)),
       FUNC_28(VAR_11, VAR_12->location)));
    break;
  }
  VAR_21 = FUNC_9(VAR_19, VAR_8, VAR_15);
  VAR_22 = FUNC_20(VAR_21, VAR_20);
  if (VAR_22 == VAR_4)
  {
   if (VAR_15)
    VAR_16 = VAR_5;
   else
    FUNC_15(VAR_3,
      (FUNC_16(VAR_2),
       FUNC_17("column \"%s\" of relation \"%s\" does not exist",
        VAR_20, VAR_19->relname),
       FUNC_28(VAR_11, VAR_12->location)));
  }
  else
  {
   VAR_16 = FUNC_21(VAR_21, VAR_22);


   FUNC_0(VAR_12->arrayBounds == VAR_6);


   FUNC_15(VAR_7,
     (FUNC_17("type reference %s converted to %s",
       FUNC_11(VAR_12),
       FUNC_18(VAR_16))));
  }
 }
 else
 {

  char *VAR_23;
  char *VAR_24;


  FUNC_1(VAR_12->names, &VAR_23, &VAR_24);

  if (VAR_23)
  {

   Oid VAR_25;
   ParseCallbackState VAR_26;

   FUNC_29(&VAR_26, VAR_11, VAR_12->location);

   VAR_25 = FUNC_4(VAR_23, VAR_15);
   if (FUNC_7(VAR_25))
    VAR_16 = FUNC_2(VAR_9, VAR_0,
           FUNC_8(VAR_24),
           FUNC_6(VAR_25));
   else
    VAR_16 = VAR_5;

   FUNC_13(&VAR_26);
  }
  else
  {

   VAR_16 = FUNC_12(VAR_24, VAR_14);
  }


  if (VAR_12->arrayBounds != VAR_6)
   VAR_16 = FUNC_19(VAR_16);
 }

 if (!FUNC_7(VAR_16))
 {
  if (VAR_13)
   *VAR_13 = -1;
  return ((void*)0);
 }

 VAR_17 = FUNC_10(VAR_10, FUNC_6(VAR_16));
 if (!FUNC_3(VAR_17))
  FUNC_14(VAR_3, "cache lookup failed for type %u", VAR_16);

 VAR_18 = FUNC_31(VAR_11, VAR_12, (Type) VAR_17);

 if (VAR_13)
  *VAR_13 = VAR_18;

 return (Type) VAR_17;
}
