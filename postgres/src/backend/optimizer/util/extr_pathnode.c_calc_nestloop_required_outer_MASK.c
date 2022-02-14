
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * Relids ;


 int FUNC_0 (int) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int * FUNC_6 (int *,int *) ;

Relids
FUNC_7(Relids VAR_0,
        Relids VAR_1,
        Relids VAR_2,
        Relids VAR_3)
{
 Relids VAR_4;


 FUNC_0(!FUNC_5(VAR_1, VAR_2));

 if (!VAR_3)
  return FUNC_1(VAR_1);

 VAR_4 = FUNC_6(VAR_1, VAR_3);

 VAR_4 = FUNC_2(VAR_4,
          VAR_0);

 if (FUNC_4(VAR_4))
 {
  FUNC_3(VAR_4);
  VAR_4 = ((void*)0);
 }
 return VAR_4;
}
