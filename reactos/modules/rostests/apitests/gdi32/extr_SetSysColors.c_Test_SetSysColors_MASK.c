
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int INT ;
typedef scalar_t__ COLORREF ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int,int,int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int,int*,scalar_t__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int,char*,...) ;

void FUNC_6()
{
 INT VAR_4;
 INT VAR_5[VAR_2+1];
 COLORREF VAR_6[VAR_2];
 COLORREF VAR_7[VAR_2+1];


 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
 {
  VAR_5[VAR_4] = VAR_4;
  VAR_6[VAR_4] = FUNC_1(VAR_4);
 }

 for (VAR_4 = 0; VAR_4 < VAR_2+1; VAR_4++)
  VAR_7[VAR_4] = FUNC_2(VAR_4, 255-VAR_4, VAR_4*3);
 VAR_5[VAR_2] = VAR_5[0];

 FUNC_3(0xdeadbeef);
 FUNC_5(FUNC_4(-1, VAR_5, VAR_7) == VAR_1, "Expected FALSE, got TRUE\n");
 FUNC_5(FUNC_0() == VAR_0, "Expected ERROR_NOACCESS, got %ld\n", FUNC_0());
 FUNC_5(FUNC_4(0, VAR_5, VAR_7) == VAR_3, "Expected TRUE, got FALSE\n");
 FUNC_5(FUNC_4(0, ((void*)0), VAR_7) == VAR_3, "Expected TRUE, got FALSE\n");
 FUNC_5(FUNC_4(0, VAR_5, ((void*)0)) == VAR_3, "Expected TRUE, got FALSE\n");
 FUNC_5(FUNC_4(1, ((void*)0), VAR_7) == VAR_1, "Expected FALSE, got TRUE\n");
 FUNC_5(FUNC_0() == VAR_0, "Expected ERROR_NOACCESS, got %ld\n", FUNC_0());
 FUNC_5(FUNC_4(1, VAR_5, ((void*)0)) == VAR_1, "Expected FALSE, got TRUE\n");
 FUNC_5(FUNC_0() == VAR_0, "Expected ERROR_NOACCESS, got %ld\n", FUNC_0());
 FUNC_5(FUNC_4(1, VAR_5, VAR_7) == VAR_3, "Expected TRUE, got FALSE\n");
 FUNC_5(FUNC_4(VAR_2, VAR_5, VAR_7) == VAR_3, "Expected TRUE, got FALSE\n");
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  FUNC_5(FUNC_1(VAR_5[VAR_4]) == VAR_7[VAR_4], "Expected %06lx, got %06lx\n", VAR_7[VAR_4], FUNC_1(VAR_5[VAR_4]));


 FUNC_5(FUNC_4(VAR_2+1, VAR_5, VAR_7) == VAR_3, "Expected TRUE, got FALSE\n");
 VAR_5[VAR_2] = 10000;
 FUNC_5(FUNC_4(VAR_2+1, VAR_5, VAR_7) == VAR_3, "Expected TRUE, got FALSE\n");


 FUNC_4(VAR_2, VAR_5, VAR_6);
}
