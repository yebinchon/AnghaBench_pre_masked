
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_2__ {scalar_t__ typelem; } ;
typedef scalar_t__ Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_7 ;
 int FUNC_5 (int ,char*,scalar_t__) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__,int *) ;

Oid
FUNC_11(Oid *VAR_8, int32 *VAR_9)
{
 Oid VAR_10 = *VAR_8;
 Oid VAR_11;
 HeapTuple VAR_12;
 Form_pg_type VAR_13;
 *VAR_8 = FUNC_10(*VAR_8, VAR_9);
 if (*VAR_8 == VAR_3)
  *VAR_8 = VAR_2;
 else if (*VAR_8 == VAR_6)
  *VAR_8 = VAR_5;


 VAR_12 = FUNC_4(VAR_7, FUNC_2(*VAR_8));
 if (!FUNC_1(VAR_12))
  FUNC_5(VAR_1, "cache lookup failed for type %u", *VAR_8);
 VAR_13 = (Form_pg_type) FUNC_0(VAR_12);



 VAR_11 = VAR_13->typelem;
 if (VAR_11 == VAR_4)
  FUNC_6(VAR_1,
    (FUNC_7(VAR_0),
     FUNC_8("cannot subscript type %s because it is not an array",
      FUNC_9(VAR_10))));

 FUNC_3(VAR_12);

 return VAR_11;
}
