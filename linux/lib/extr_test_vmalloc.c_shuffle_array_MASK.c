
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rnd ;


 int FUNC_0 (unsigned int*,int) ;

__attribute__((used)) static void FUNC_1(int *VAR_0, int VAR_1)
{
 unsigned int VAR_2;
 int VAR_3, VAR_4, VAR_5;

 for (VAR_3 = VAR_1 - 1; VAR_3 > 0; VAR_3--) {
  FUNC_0(&VAR_2, sizeof(VAR_2));


  VAR_4 = VAR_2 % VAR_3;


  VAR_5 = VAR_0[VAR_3];
  VAR_0[VAR_3] = VAR_0[VAR_4];
  VAR_0[VAR_4] = VAR_5;
 }
}
