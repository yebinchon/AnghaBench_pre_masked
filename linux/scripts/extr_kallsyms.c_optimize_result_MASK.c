
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int** VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 () ;
 scalar_t__* VAR_2 ;

__attribute__((used)) static void FUNC_2(void)
{
 int VAR_3, VAR_4;



 for (VAR_3 = 255; VAR_3 >= 0; VAR_3--) {



  if (!VAR_1[VAR_3]) {


   VAR_4 = FUNC_1();
   if (VAR_2[VAR_4] == 0)
    break;


   VAR_1[VAR_3] = 2;
   VAR_0[VAR_3][0] = VAR_4 & 0xFF;
   VAR_0[VAR_3][1] = (VAR_4 >> 8) & 0xFF;


   FUNC_0(VAR_0[VAR_3], VAR_3);
  }
 }
}
