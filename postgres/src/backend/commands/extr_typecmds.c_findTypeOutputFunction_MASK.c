
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int List ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int,int *,int) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int ,...) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int,int ,int *) ;

__attribute__((used)) static Oid
FUNC_10(List *VAR_6, Oid VAR_7)
{
 Oid VAR_8[1];
 Oid VAR_9;







 VAR_8[0] = VAR_7;

 VAR_9 = FUNC_1(VAR_6, 1, VAR_8, 1);
 if (FUNC_3(VAR_9))
  return VAR_9;


 VAR_8[0] = VAR_4;

 VAR_9 = FUNC_1(VAR_6, 1, VAR_8, 1);

 if (FUNC_3(VAR_9))
 {

  FUNC_5(VAR_5,
    (FUNC_7("changing argument type of function %s from \"opaque\" to %s",
      FUNC_2(VAR_6), FUNC_8(VAR_7))));
  FUNC_4(VAR_9, 0, VAR_7);





  FUNC_0();

  return VAR_9;
 }


 VAR_8[0] = VAR_7;

 FUNC_5(VAR_1,
   (FUNC_6(VAR_0),
    FUNC_7("function %s does not exist",
     FUNC_9(VAR_6, 1, VAR_3, VAR_8))));

 return VAR_2;
}
