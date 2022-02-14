
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
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int,int *,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (scalar_t__,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int ,...) ;
 int FUNC_7 (int *,int,int ,int *) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ,int ,int ) ;

__attribute__((used)) static Oid
FUNC_12(List *VAR_9, Oid VAR_10)
{
 Oid VAR_11[2];
 Oid VAR_12;
 AclResult VAR_13;





 VAR_11[0] = VAR_10;
 VAR_11[1] = VAR_10;

 VAR_12 = FUNC_1(VAR_9, 2, VAR_11, 1);

 if (!FUNC_2(VAR_12))
  FUNC_4(VAR_4,
    (FUNC_5(VAR_3),
     FUNC_6("function %s does not exist",
      FUNC_7(VAR_9, 2, VAR_6, VAR_11))));

 if (FUNC_10(VAR_12) != VAR_5)
  FUNC_4(VAR_4,
    (FUNC_5(VAR_2),
     FUNC_6("range subtype diff function %s must return type %s",
      FUNC_7(VAR_9, 2, VAR_6, VAR_11),
      "double precision")));

 if (FUNC_8(VAR_12) != VAR_8)
  FUNC_4(VAR_4,
    (FUNC_5(VAR_2),
     FUNC_6("range subtype diff function %s must be immutable",
      FUNC_7(VAR_9, 2, VAR_6, VAR_11))));


 VAR_13 = FUNC_11(VAR_12, FUNC_0(), VAR_1);
 if (VAR_13 != VAR_0)
  FUNC_3(VAR_13, VAR_7, FUNC_9(VAR_12));

 return VAR_12;
}
