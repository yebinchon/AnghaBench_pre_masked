
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_7__ {scalar_t__ refclassid; scalar_t__ refobjid; scalar_t__ deptype; } ;
struct TYPE_6__ {int t_self; } ;
typedef int SysScanDesc ;
typedef scalar_t__ SharedDependencyType ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef scalar_t__ Oid ;
typedef TYPE_1__* HeapTuple ;
typedef TYPE_2__* Form_pg_shdepend ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (int *,int ,int ,int ,int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ,int ,int,int *,int,int *) ;
 int FUNC_9 (int ) ;
 TYPE_1__* FUNC_10 (int ) ;

__attribute__((used)) static void
FUNC_11(Relation VAR_9,
     Oid VAR_10, Oid VAR_11, int32 VAR_12,
     bool VAR_13,
     Oid VAR_14, Oid VAR_15,
     SharedDependencyType VAR_16)
{
 ScanKeyData VAR_17[4];
 int VAR_18;
 SysScanDesc VAR_19;
 HeapTuple VAR_20;


 FUNC_6(&VAR_17[0],
    VAR_1,
    VAR_4, VAR_6,
    FUNC_4(FUNC_7(VAR_10)));
 FUNC_6(&VAR_17[1],
    VAR_0,
    VAR_4, VAR_6,
    FUNC_4(VAR_10));
 FUNC_6(&VAR_17[2],
    VAR_2,
    VAR_4, VAR_6,
    FUNC_4(VAR_11));
 if (VAR_13)
  VAR_18 = 3;
 else
 {
  FUNC_6(&VAR_17[3],
     VAR_3,
     VAR_4, VAR_5,
     FUNC_3(VAR_12));
  VAR_18 = 4;
 }

 VAR_19 = FUNC_8(VAR_9, VAR_8, 1,
         ((void*)0), VAR_18, VAR_17);

 while (FUNC_2(VAR_20 = FUNC_10(VAR_19)))
 {
  Form_pg_shdepend VAR_21 = (Form_pg_shdepend) FUNC_1(VAR_20);


  if (FUNC_5(VAR_14) && VAR_21->refclassid != VAR_14)
   continue;
  if (FUNC_5(VAR_15) && VAR_21->refobjid != VAR_15)
   continue;
  if (VAR_16 != VAR_7 &&
   VAR_21->deptype != VAR_16)
   continue;


  FUNC_0(VAR_9, &VAR_20->t_self);
 }

 FUNC_9(VAR_19);
}
