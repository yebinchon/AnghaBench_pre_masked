
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ lanvalidator; int lanname; } ;
struct TYPE_3__ {scalar_t__ prolang; int proname; } ;
typedef scalar_t__ Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_proc ;
typedef TYPE_2__* Form_pg_language ;
typedef scalar_t__ AclResult ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (scalar_t__) ;
 int VAR_9 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (scalar_t__,int ,int ) ;
 int FUNC_8 (int ,char*,scalar_t__) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,scalar_t__,...) ;
 scalar_t__ FUNC_12 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_13 (scalar_t__,int ,int ) ;

bool
FUNC_14(Oid VAR_10, Oid VAR_11)
{
 HeapTuple VAR_12;
 HeapTuple VAR_13;
 Form_pg_proc VAR_14;
 Form_pg_language VAR_15;
 AclResult VAR_16;





 VAR_12 = FUNC_6(VAR_9, FUNC_4(VAR_11));
 if (!FUNC_2(VAR_12))
  FUNC_9(VAR_5,
    (FUNC_10(VAR_4),
     FUNC_11("function with OID %u does not exist", VAR_11)));
 VAR_14 = (Form_pg_proc) FUNC_0(VAR_12);





 VAR_13 = FUNC_6(VAR_6, FUNC_4(VAR_14->prolang));
 if (!FUNC_2(VAR_13))
  FUNC_8(VAR_5, "cache lookup failed for language %u", VAR_14->prolang);
 VAR_15 = (Form_pg_language) FUNC_0(VAR_13);

 if (VAR_15->lanvalidator != VAR_10)
  FUNC_9(VAR_5,
    (FUNC_10(VAR_3),
     FUNC_11("language validation function %u called for language %u instead of %u",
      VAR_10, VAR_14->prolang,
      VAR_15->lanvalidator)));


 VAR_16 = FUNC_12(VAR_14->prolang, FUNC_1(),
          VAR_2);
 if (VAR_16 != VAR_0)
  FUNC_7(VAR_16, VAR_8,
        FUNC_3(VAR_15->lanname));






 VAR_16 = FUNC_13(VAR_11, FUNC_1(), VAR_1);
 if (VAR_16 != VAR_0)
  FUNC_7(VAR_16, VAR_7, FUNC_3(VAR_14->proname));

 FUNC_5(VAR_12);
 FUNC_5(VAR_13);

 return 1;
}
