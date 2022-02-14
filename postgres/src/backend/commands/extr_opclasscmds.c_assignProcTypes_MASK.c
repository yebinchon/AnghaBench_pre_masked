
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__* values; } ;
struct TYPE_7__ {int pronargs; scalar_t__ prorettype; TYPE_1__ proargtypes; } ;
struct TYPE_6__ {scalar_t__ number; scalar_t__ lefttype; scalar_t__ righttype; int object; } ;
typedef TYPE_2__ OpFamilyMember ;
typedef scalar_t__ Oid ;
typedef int HeapTuple ;
typedef TYPE_3__* Form_pg_proc ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_13 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ VAR_14 ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void
FUNC_10(OpFamilyMember *VAR_15, Oid VAR_16, Oid VAR_17)
{
 HeapTuple VAR_18;
 Form_pg_proc VAR_19;


 VAR_18 = FUNC_5(VAR_13, FUNC_2(VAR_15->object));
 if (!FUNC_1(VAR_18))
  FUNC_6(VAR_6, "cache lookup failed for function %u", VAR_15->object);
 VAR_19 = (Form_pg_proc) FUNC_0(VAR_18);
 if (VAR_16 == VAR_3)
 {
  if (VAR_15->number == VAR_2)
  {
   if (VAR_19->pronargs != 2)
    FUNC_7(VAR_6,
      (FUNC_8(VAR_5),
       FUNC_9("btree comparison functions must have two arguments")));
   if (VAR_19->prorettype != VAR_10)
    FUNC_7(VAR_6,
      (FUNC_8(VAR_5),
       FUNC_9("btree comparison functions must return integer")));





   if (!FUNC_3(VAR_15->lefttype))
    VAR_15->lefttype = VAR_19->proargtypes.values[0];
   if (!FUNC_3(VAR_15->righttype))
    VAR_15->righttype = VAR_19->proargtypes.values[1];
  }
  else if (VAR_15->number == VAR_4)
  {
   if (VAR_19->pronargs != 1 ||
    VAR_19->proargtypes.values[0] != VAR_12)
    FUNC_7(VAR_6,
      (FUNC_8(VAR_5),
       FUNC_9("btree sort support functions must accept type \"internal\"")));
   if (VAR_19->prorettype != VAR_14)
    FUNC_7(VAR_6,
      (FUNC_8(VAR_5),
       FUNC_9("btree sort support functions must return void")));




  }
  else if (VAR_15->number == VAR_1)
  {
   if (VAR_19->pronargs != 5)
    FUNC_7(VAR_6,
      (FUNC_8(VAR_5),
       FUNC_9("btree in_range functions must have five arguments")));
   if (VAR_19->prorettype != VAR_0)
    FUNC_7(VAR_6,
      (FUNC_8(VAR_5),
       FUNC_9("btree in_range functions must return boolean")));





   if (!FUNC_3(VAR_15->lefttype))
    VAR_15->lefttype = VAR_19->proargtypes.values[0];
   if (!FUNC_3(VAR_15->righttype))
    VAR_15->righttype = VAR_19->proargtypes.values[2];
  }
 }
 else if (VAR_16 == VAR_9)
 {
  if (VAR_15->number == VAR_8)
  {
   if (VAR_19->pronargs != 1)
    FUNC_7(VAR_6,
      (FUNC_8(VAR_5),
       FUNC_9("hash function 1 must have one argument")));
   if (VAR_19->prorettype != VAR_10)
    FUNC_7(VAR_6,
      (FUNC_8(VAR_5),
       FUNC_9("hash function 1 must return integer")));
  }
  else if (VAR_15->number == VAR_7)
  {
   if (VAR_19->pronargs != 2)
    FUNC_7(VAR_6,
      (FUNC_8(VAR_5),
       FUNC_9("hash function 2 must have two arguments")));
   if (VAR_19->prorettype != VAR_11)
    FUNC_7(VAR_6,
      (FUNC_8(VAR_5),
       FUNC_9("hash function 2 must return bigint")));
  }




  if (!FUNC_3(VAR_15->lefttype))
   VAR_15->lefttype = VAR_19->proargtypes.values[0];
  if (!FUNC_3(VAR_15->righttype))
   VAR_15->righttype = VAR_19->proargtypes.values[0];
 }






 if (!FUNC_3(VAR_15->lefttype))
  VAR_15->lefttype = VAR_17;
 if (!FUNC_3(VAR_15->righttype))
  VAR_15->righttype = VAR_17;

 if (!FUNC_3(VAR_15->lefttype) || !FUNC_3(VAR_15->righttype))
  FUNC_7(VAR_6,
    (FUNC_8(VAR_5),
     FUNC_9("associated data types must be specified for index support function")));

 FUNC_4(VAR_18);
}
