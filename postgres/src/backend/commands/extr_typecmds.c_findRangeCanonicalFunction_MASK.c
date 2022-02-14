
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
 int VAR_4 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int *,int,scalar_t__*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (scalar_t__,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int *,int,int ,scalar_t__*) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__,int ,int ) ;

__attribute__((used)) static Oid
FUNC_12(List *VAR_8, Oid VAR_9)
{
 Oid VAR_10[1];
 Oid VAR_11;
 AclResult VAR_12;





 VAR_10[0] = VAR_9;

 VAR_11 = FUNC_1(VAR_8, 1, VAR_10, 1);

 if (!FUNC_2(VAR_11))
  FUNC_4(VAR_4,
    (FUNC_5(VAR_3),
     FUNC_6("function %s does not exist",
      FUNC_7(VAR_8, 1, VAR_5, VAR_10))));

 if (FUNC_10(VAR_11) != VAR_9)
  FUNC_4(VAR_4,
    (FUNC_5(VAR_2),
     FUNC_6("range canonical function %s must return range type",
      FUNC_7(VAR_8, 1, VAR_5, VAR_10))));

 if (FUNC_8(VAR_11) != VAR_7)
  FUNC_4(VAR_4,
    (FUNC_5(VAR_2),
     FUNC_6("range canonical function %s must be immutable",
      FUNC_7(VAR_8, 1, VAR_5, VAR_10))));


 VAR_12 = FUNC_11(VAR_11, FUNC_0(), VAR_1);
 if (VAR_12 != VAR_0)
  FUNC_3(VAR_12, VAR_6, FUNC_9(VAR_11));

 return VAR_11;
}
