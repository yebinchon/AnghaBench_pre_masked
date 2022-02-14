
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Oid ;
typedef int List ;
typedef scalar_t__ FuncDetailCode ;
typedef scalar_t__ AclResult ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_4 (scalar_t__*,scalar_t__*,int,scalar_t__,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int ) ;
 scalar_t__ FUNC_8 (int *,int ,int ,int,scalar_t__*,int,int,scalar_t__*,scalar_t__*,int*,int*,scalar_t__*,scalar_t__**,int *) ;
 int FUNC_9 (int *,int,int ,scalar_t__*) ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__,int ,int ) ;

__attribute__((used)) static Oid
FUNC_12(List *VAR_9,
     int VAR_10,
     Oid *VAR_11,
     Oid VAR_12,
     Oid *VAR_13)
{
 Oid VAR_14;
 bool VAR_15;
 int VAR_16;
 Oid VAR_17;
 Oid *VAR_18;
 FuncDetailCode VAR_19;
 AclResult VAR_20;
 int VAR_21;
 VAR_19 = FUNC_8(VAR_9, VAR_7, VAR_7,
          VAR_10, VAR_11, 0, 0,
          &VAR_14, VAR_13, &VAR_15,
          &VAR_16, &VAR_17,
          &VAR_18, ((void*)0));


 if (VAR_19 != VAR_6 || !FUNC_2(VAR_14))
  FUNC_5(VAR_5,
    (FUNC_6(VAR_4),
     FUNC_7("function %s does not exist",
      FUNC_9(VAR_9, VAR_10,
             VAR_7, VAR_11))));
 if (VAR_15)
  FUNC_5(VAR_5,
    (FUNC_6(VAR_3),
     FUNC_7("function %s returns a set",
      FUNC_9(VAR_9, VAR_10,
             VAR_7, VAR_11))));
 if (VAR_12 == VAR_2 && VAR_17 != VAR_2)
  FUNC_5(VAR_5,
    (FUNC_6(VAR_3),
     FUNC_7("function %s must accept VARIADIC ANY to be used in this aggregate",
      FUNC_9(VAR_9, VAR_10,
             VAR_7, VAR_11))));






 *VAR_13 = FUNC_4(VAR_11,
            VAR_18,
            VAR_10,
            *VAR_13,
            1);





 for (VAR_21 = 0; VAR_21 < VAR_10; VAR_21++)
 {
  if (!FUNC_1(VAR_11[VAR_21], VAR_18[VAR_21]))
   FUNC_5(VAR_5,
     (FUNC_6(VAR_3),
      FUNC_7("function %s requires run-time type coercion",
       FUNC_9(VAR_9, VAR_10,
              VAR_7, VAR_18))));
 }


 VAR_20 = FUNC_11(VAR_14, FUNC_0(), VAR_1);
 if (VAR_20 != VAR_0)
  FUNC_3(VAR_20, VAR_8, FUNC_10(VAR_14));

 return VAR_14;
}
