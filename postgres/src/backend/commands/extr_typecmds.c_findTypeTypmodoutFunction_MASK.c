
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int List ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int,int *,int) ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ,...) ;
 int FUNC_6 (int *,int,int ,int *) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static Oid
FUNC_8(List *VAR_6)
{
 Oid VAR_7[1];
 Oid VAR_8;




 VAR_7[0] = VAR_4;

 VAR_8 = FUNC_0(VAR_6, 1, VAR_7, 1);
 if (!FUNC_2(VAR_8))
  FUNC_3(VAR_3,
    (FUNC_4(VAR_2),
     FUNC_5("function %s does not exist",
      FUNC_6(VAR_6, 1, VAR_5, VAR_7))));

 if (FUNC_7(VAR_8) != VAR_0)
  FUNC_3(VAR_3,
    (FUNC_4(VAR_1),
     FUNC_5("typmod_out function %s must return type %s",
      FUNC_1(VAR_6), "cstring")));

 return VAR_8;
}
