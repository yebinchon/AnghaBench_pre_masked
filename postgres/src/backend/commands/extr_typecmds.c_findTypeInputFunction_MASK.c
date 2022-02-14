
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int List ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int,int *,int) ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int VAR_8 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (int *,int,int ,int *) ;

__attribute__((used)) static Oid
FUNC_9(List *VAR_9, Oid VAR_10)
{
 Oid VAR_11[3];
 Oid VAR_12;
 VAR_11[0] = VAR_0;

 VAR_12 = FUNC_1(VAR_9, 1, VAR_11, 1);
 if (FUNC_3(VAR_12))
  return VAR_12;

 VAR_11[1] = VAR_6;
 VAR_11[2] = VAR_3;

 VAR_12 = FUNC_1(VAR_9, 3, VAR_11, 1);
 if (FUNC_3(VAR_12))
  return VAR_12;


 VAR_11[0] = VAR_7;

 VAR_12 = FUNC_1(VAR_9, 1, VAR_11, 1);

 if (!FUNC_3(VAR_12))
 {
  VAR_11[1] = VAR_6;
  VAR_11[2] = VAR_3;

  VAR_12 = FUNC_1(VAR_9, 3, VAR_11, 1);
 }

 if (FUNC_3(VAR_12))
 {

  FUNC_5(VAR_8,
    (FUNC_7("changing argument type of function %s from \"opaque\" to \"cstring\"",
      FUNC_2(VAR_9))));
  FUNC_4(VAR_12, 0, VAR_0);





  FUNC_0();

  return VAR_12;
 }


 VAR_11[0] = VAR_0;

 FUNC_5(VAR_2,
   (FUNC_6(VAR_1),
    FUNC_7("function %s does not exist",
     FUNC_8(VAR_9, 1, VAR_5, VAR_11))));

 return VAR_4;
}
