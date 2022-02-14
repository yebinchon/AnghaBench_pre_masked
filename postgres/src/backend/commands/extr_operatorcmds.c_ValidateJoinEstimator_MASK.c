
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int List ;
typedef scalar_t__ AclResult ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 () ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int,int *,int) ;
 int FUNC_2 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int ,char*) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,int ,int ) ;

__attribute__((used)) static Oid
FUNC_10(List *VAR_9)
{
 Oid VAR_10[5];
 Oid VAR_11;
 AclResult VAR_12;

 VAR_10[0] = VAR_6;
 VAR_10[1] = VAR_8;
 VAR_10[2] = VAR_6;
 VAR_10[3] = VAR_5;
 VAR_10[4] = VAR_6;






 VAR_11 = FUNC_1(VAR_9, 5, VAR_10, 1);
 if (!FUNC_3(VAR_11))
  VAR_11 = FUNC_1(VAR_9, 4, VAR_10, 1);

 if (!FUNC_3(VAR_11))
  VAR_11 = FUNC_1(VAR_9, 5, VAR_10, 0);


 if (FUNC_8(VAR_11) != VAR_4)
  FUNC_5(VAR_3,
    (FUNC_6(VAR_2),
     FUNC_7("join estimator function %s must return type %s",
      FUNC_2(VAR_9), "float8")));


 VAR_12 = FUNC_9(VAR_11, FUNC_0(), VAR_1);
 if (VAR_12 != VAR_0)
  FUNC_4(VAR_12, VAR_7,
        FUNC_2(VAR_9));

 return VAR_11;
}
