
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Oid ;
typedef int List ;
typedef scalar_t__ AclResult ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int *,scalar_t__,scalar_t__,int*) ;
 scalar_t__ FUNC_3 (char*,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (int *,char**) ;
 int FUNC_5 (scalar_t__,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_11 (char*,char const*) ;

__attribute__((used)) static Oid
FUNC_12(List *VAR_6, Oid VAR_7, Oid VAR_8,
       const char *VAR_9, Oid VAR_10,
       Oid VAR_11, Oid VAR_12, bool VAR_13)
{
 Oid VAR_14;
 bool VAR_15;
 char *VAR_16;
 Oid VAR_17;
 AclResult VAR_18;

 VAR_14 = FUNC_2(VAR_6,
          VAR_7,
          VAR_8,
          &VAR_15);

 if (FUNC_1(VAR_14))
 {

  return VAR_14;
 }

 VAR_17 = FUNC_4(VAR_6,
                &VAR_16);

 if (FUNC_11(VAR_16, VAR_9) == 0 &&
  VAR_17 == VAR_10 &&
  VAR_7 == VAR_11 &&
  VAR_8 == VAR_12)
 {




  if (!VAR_13)
   FUNC_6(VAR_3,
     (FUNC_7(VAR_2),
      FUNC_8("operator cannot be its own negator or sort operator")));
  return VAR_4;
 }



 VAR_18 = FUNC_10(VAR_17, FUNC_0(),
           VAR_1);
 if (VAR_18 != VAR_0)
  FUNC_5(VAR_18, VAR_5,
        FUNC_9(VAR_17));

 VAR_14 = FUNC_3(VAR_16,
          VAR_17,
          VAR_7,
          VAR_8);
 return VAR_14;
}
