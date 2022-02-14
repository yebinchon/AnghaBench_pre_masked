
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int,int ,int) ;
 int FUNC_3 (int ,int **,int*) ;
 int FUNC_4 (int *) ;

Oid
FUNC_5(Oid VAR_0,
       Oid VAR_1,
       Oid *VAR_2,
       int VAR_3)
{

 if (FUNC_1(VAR_1))
 {

  Oid *VAR_4;
  int VAR_5;

  (void) FUNC_3(VAR_0, &VAR_4, &VAR_5);





  FUNC_0(VAR_5 <= VAR_3);

  VAR_1 = FUNC_2(VAR_2,
              VAR_4,
              VAR_5,
              VAR_1,
              0);
  FUNC_4(VAR_4);
 }
 return VAR_1;
}
