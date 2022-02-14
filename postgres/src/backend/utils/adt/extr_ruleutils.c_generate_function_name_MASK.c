
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pronamespace; int provariadic; int proname; } ;
typedef scalar_t__ ParseExprKind ;
typedef scalar_t__ Oid ;
typedef int List ;
typedef int HeapTuple ;
typedef scalar_t__ FuncDetailCode ;
typedef TYPE_1__* Form_pg_proc ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_8 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_9 (int ,int ,int *,int,scalar_t__*,int,int,scalar_t__*,scalar_t__*,int*,int*,scalar_t__*,scalar_t__**,int *) ;
 char* FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*) ;
 char* FUNC_13 (char*,char*) ;
 scalar_t__ FUNC_14 (char*,char*) ;

__attribute__((used)) static char *
FUNC_15(Oid VAR_9, int VAR_10, List *VAR_11, Oid *VAR_12,
        bool VAR_13, bool *VAR_14,
        ParseExprKind VAR_15)
{
 char *VAR_16;
 HeapTuple VAR_17;
 Form_pg_proc VAR_18;
 char *VAR_19;
 bool VAR_20;
 char *VAR_21;
 FuncDetailCode VAR_22;
 Oid VAR_23;
 Oid VAR_24;
 bool VAR_25;
 int VAR_26;
 Oid VAR_27;
 Oid *VAR_28;
 bool VAR_29 = 0;

 VAR_17 = FUNC_7(VAR_8, FUNC_4(VAR_9));
 if (!FUNC_2(VAR_17))
  FUNC_8(VAR_0, "cache lookup failed for function %u", VAR_9);
 VAR_18 = (Form_pg_proc) FUNC_1(VAR_17);
 VAR_19 = FUNC_3(VAR_18->proname);





 if (VAR_15 == VAR_1)
 {
  if (FUNC_14(VAR_19, "cube") == 0 || FUNC_14(VAR_19, "rollup") == 0)
   VAR_29 = 1;
 }
 if (VAR_14)
 {

  FUNC_0(!VAR_13 || FUNC_5(VAR_18->provariadic));
  VAR_20 = VAR_13;
  *VAR_14 = VAR_20;
 }
 else
 {
  FUNC_0(!VAR_13);
  VAR_20 = 0;
 }
 if (!VAR_29)
  VAR_22 = FUNC_9(FUNC_11(FUNC_12(VAR_19)),
           VAR_7, VAR_11, VAR_10, VAR_12,
           !VAR_20, 1,
           &VAR_23, &VAR_24,
           &VAR_25, &VAR_26, &VAR_27,
           &VAR_28, ((void*)0));
 else
 {
  VAR_22 = VAR_4;
  VAR_23 = VAR_6;
 }

 if ((VAR_22 == VAR_3 ||
   VAR_22 == VAR_2 ||
   VAR_22 == VAR_5) &&
  VAR_23 == VAR_9)
  VAR_21 = ((void*)0);
 else
  VAR_21 = FUNC_10(VAR_18->pronamespace);

 VAR_16 = FUNC_13(VAR_21, VAR_19);

 FUNC_6(VAR_17);

 return VAR_16;
}
