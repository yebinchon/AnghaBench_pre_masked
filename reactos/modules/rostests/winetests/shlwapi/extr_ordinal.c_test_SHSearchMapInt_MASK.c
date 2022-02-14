
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int values ;
typedef int keys ;


 int FUNC_0 (int*,int ,int) ;
 int FUNC_1 (int,char*,int,...) ;
 int FUNC_2 (int*,int*,int,int) ;

__attribute__((used)) static void FUNC_3(void)
{
  int VAR_0[8], VAR_1[8];
  int VAR_2 = 0;

  if (!&FUNC_2)
    return;

  FUNC_0(VAR_0, 0, sizeof(VAR_0));
  FUNC_0(VAR_1, 0, sizeof(VAR_1));
  VAR_0[0] = 99; VAR_1[0] = 101;




  VAR_2 = FUNC_2(VAR_0, VAR_1, 1, VAR_0[0]);
  FUNC_1(VAR_2 == VAR_1[0], "Len 1, expected %d, got %d\n", VAR_1[0], VAR_2);


  VAR_2 = FUNC_2(VAR_0, VAR_1, 1, 100);
  FUNC_1(VAR_2 == -1, "Len 1 - bad key, expected -1, got %d\n", VAR_2);


  VAR_2 = FUNC_2(VAR_0, VAR_1, 0, VAR_0[0]);
  FUNC_1(VAR_2 == -1, "Len 1 - passed len 0, expected -1, got %d\n", VAR_2);


  VAR_0[1] = 98; VAR_1[1] = 102;
  VAR_2 = FUNC_2(VAR_0, VAR_1, 1, VAR_0[1]);
  FUNC_1(VAR_2 == -1, "Len 1 - array len 2, expected -1, got %d\n", VAR_2);


  VAR_2 = FUNC_2(VAR_0, VAR_1, 2, VAR_0[1]);
  FUNC_1(VAR_2 == VAR_1[1], "Len 2, expected %d, got %d\n", VAR_1[1], VAR_2);


  VAR_0[2] = 99; VAR_1[2] = 103;
  VAR_2 = FUNC_2(VAR_0, VAR_1, 3, VAR_0[0]);
  FUNC_1(VAR_2 == VAR_1[0], "Len 3, expected %d, got %d\n", VAR_1[0], VAR_2);
}
