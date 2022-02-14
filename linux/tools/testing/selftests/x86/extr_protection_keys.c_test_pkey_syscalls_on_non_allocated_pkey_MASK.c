
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*,int ,int ,int) ;
 int FUNC_3 (int) ;

void FUNC_4(int *VAR_3, u16 VAR_4)
{
 int VAR_5;
 int VAR_6;


 for (VAR_6 = 1; VAR_6 < VAR_0; VAR_6++) {
  if (VAR_4 == VAR_6)
   continue;

  FUNC_0("trying get/set/free to non-allocated pkey: %2d\n", VAR_6);
  VAR_5 = FUNC_3(VAR_6);
  FUNC_1(VAR_5);

  VAR_5 = FUNC_3(VAR_6);
  FUNC_1(VAR_5);

  VAR_5 = FUNC_2(VAR_3, VAR_1, VAR_2, VAR_6);
  FUNC_1(VAR_5);
 }
}
