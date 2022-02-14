
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int,char*,...) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_6(void)
{
  WCHAR VAR_2[50];
  int VAR_3;


  FUNC_1(0xdeadbeef);
  VAR_3 = FUNC_2(((void*)0),VAR_2,50);
  FUNC_5(VAR_3 == 0, "len: %d (expected 0)\n", VAR_3);
  FUNC_5(FUNC_0() == 0xdeadbeef, "Expected 0xdeadbeef, got %x\n", FUNC_0());


  VAR_3 = FUNC_2(&VAR_0,VAR_2,50);
  FUNC_5(VAR_3 == 39, "len: %d (expected 39)\n", VAR_3);
  FUNC_5(!FUNC_3(VAR_2, VAR_1),"string wasn't equal for CLSID_StdFont\n");

  FUNC_4(VAR_2,0,sizeof VAR_2);
  VAR_3 = FUNC_2(&VAR_0,VAR_2,39);
  FUNC_5(VAR_3 == 39, "len: %d (expected 39)\n", VAR_3);
  FUNC_5(!FUNC_3(VAR_2, VAR_1),"string wasn't equal for CLSID_StdFont\n");

  VAR_3 = FUNC_2(&VAR_0,VAR_2,38);
  FUNC_5(VAR_3 == 0, "len: %d (expected 0)\n", VAR_3);

  VAR_3 = FUNC_2(&VAR_0,VAR_2,30);
  FUNC_5(VAR_3 == 0, "len: %d (expected 0)\n", VAR_3);
}
