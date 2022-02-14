
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int text ;
typedef int TextPositionState ;
typedef int Oid ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int ,int *) ;

__attribute__((used)) static int
FUNC_5(text *VAR_0, text *VAR_1, Oid VAR_2)
{
 TextPositionState VAR_3;
 int VAR_4;


 if (FUNC_0(VAR_1) < 1)
  return 1;


 if (FUNC_0(VAR_0) < FUNC_0(VAR_1))
  return 0;

 FUNC_4(VAR_0, VAR_1, VAR_2, &VAR_3);
 if (!FUNC_3(&VAR_3))
  VAR_4 = 0;
 else
  VAR_4 = FUNC_2(&VAR_3);
 FUNC_1(&VAR_3);
 return VAR_4;
}
