
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int values ;
typedef int replaces ;
typedef int nulls ;
struct TYPE_15__ {int attname; } ;
struct TYPE_14__ {int t_self; } ;
struct TYPE_13__ {int grantees; int behavior; int grant_option; int is_grant; } ;
typedef int Relation ;
typedef int Oid ;
typedef TYPE_1__ InternalGrant ;
typedef TYPE_2__* HeapTuple ;
typedef TYPE_3__* Form_pg_attribute ;
typedef int Datum ;
typedef int AttrNumber ;
typedef int AclMode ;
typedef int Acl ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *,TYPE_2__*) ;
 int * FUNC_2 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int*,int,int) ;
 int FUNC_8 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int VAR_6 ;
 int FUNC_12 (TYPE_2__*) ;
 TYPE_2__* FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (int ,TYPE_2__*,int,int*) ;
 int * FUNC_15 (int const*,int *) ;
 int * FUNC_16 (int ,int ) ;
 int FUNC_17 (int *,int **) ;
 int FUNC_18 (int ,char*,int ,int ) ;
 TYPE_2__* FUNC_19 (TYPE_2__*,int ,int*,int*,int*) ;
 int * FUNC_20 (int *,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int ,int ,int ,int *) ;
 int FUNC_23 (int ,int ,int,int ,int ,int ,int ,char const*,int ,int ) ;
 int FUNC_24 (int ,int ,int *,int ,int *,int *) ;
 int FUNC_25 (int ,int ,int ,int ,int,int *,int,int *) ;

__attribute__((used)) static void
FUNC_26(InternalGrant *VAR_7, Oid VAR_8, const char *VAR_9,
     AttrNumber VAR_10, Oid VAR_11, AclMode VAR_12,
     Relation VAR_13, const Acl *VAR_14)
{
 HeapTuple VAR_15;
 Form_pg_attribute VAR_16;
 Acl *VAR_17;
 Acl *VAR_18;
 Acl *VAR_19;
 Datum VAR_20;
 bool VAR_21;
 Oid VAR_22;
 AclMode VAR_23;
 bool VAR_24;
 HeapTuple VAR_25;
 Datum VAR_26[VAR_4];
 bool VAR_27[VAR_4];
 bool VAR_28[VAR_4];
 int VAR_29;
 int VAR_30;
 Oid *VAR_31;
 Oid *VAR_32;

 VAR_15 = FUNC_13(VAR_1,
         FUNC_9(VAR_8),
         FUNC_6(VAR_10));
 if (!FUNC_5(VAR_15))
  FUNC_18(VAR_3, "cache lookup failed for attribute %d of relation %u",
    VAR_10, VAR_8);
 VAR_16 = (Form_pg_attribute) FUNC_3(VAR_15);





 VAR_20 = FUNC_14(VAR_1, VAR_15, VAR_2,
          &VAR_21);
 if (VAR_21)
 {
  VAR_17 = FUNC_16(VAR_5, VAR_11);

  VAR_29 = 0;
  VAR_31 = ((void*)0);
 }
 else
 {
  VAR_17 = FUNC_2(VAR_20);

  VAR_29 = FUNC_17(VAR_17, &VAR_31);
 }







 VAR_19 = FUNC_15(VAR_14, VAR_17);


 FUNC_24(FUNC_4(), VAR_12,
      VAR_19, VAR_11,
      &VAR_22, &VAR_23);

 FUNC_21(VAR_19);
 VAR_12 =
  FUNC_23(VAR_7->is_grant, VAR_23,
         (VAR_12 == VAR_0),
         VAR_12,
         VAR_8, VAR_22, VAR_5,
         VAR_9, VAR_10,
         FUNC_8(VAR_16->attname));




 VAR_18 = FUNC_20(VAR_17, VAR_7->is_grant,
           VAR_7->grant_option,
           VAR_7->behavior, VAR_7->grantees,
           VAR_12, VAR_22,
           VAR_11);





 VAR_30 = FUNC_17(VAR_18, &VAR_32);


 FUNC_7(VAR_26, 0, sizeof(VAR_26));
 FUNC_7(VAR_27, 0, sizeof(VAR_27));
 FUNC_7(VAR_28, 0, sizeof(VAR_28));
 if (FUNC_0(VAR_18) > 0)
 {
  VAR_26[VAR_2 - 1] = FUNC_10(VAR_18);
  VAR_24 = 1;
 }
 else
 {
  VAR_27[VAR_2 - 1] = 1;
  VAR_24 = !VAR_21;
 }
 VAR_28[VAR_2 - 1] = 1;

 if (VAR_24)
 {
  VAR_25 = FUNC_19(VAR_15, FUNC_11(VAR_13),
          VAR_26, VAR_27, VAR_28);

  FUNC_1(VAR_13, &VAR_25->t_self, VAR_25);


  FUNC_22(VAR_8, VAR_6, VAR_10,
        FUNC_0(VAR_18) > 0 ? VAR_18 : ((void*)0));


  FUNC_25(VAR_6, VAR_8, VAR_10,
         VAR_11,
         VAR_29, VAR_31,
         VAR_30, VAR_32);
 }

 FUNC_21(VAR_18);

 FUNC_12(VAR_15);
}
