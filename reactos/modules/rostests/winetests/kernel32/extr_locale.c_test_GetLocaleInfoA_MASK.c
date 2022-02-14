
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef int LCID ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* VAR_1 ;
 char* FUNC_1 () ;
 int FUNC_2 (int,int,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,int ,int) ;
 int FUNC_8 (int,char*,...) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void FUNC_11(void)
{
  int VAR_13;
  int VAR_14;
  LCID VAR_15 = FUNC_4(FUNC_3(VAR_3, VAR_12), VAR_10);
  char VAR_16[VAR_0];
  char VAR_17[VAR_0];
  DWORD VAR_18;

  FUNC_8(VAR_15 == 0x409, "wrong LCID calculated - %d\n", VAR_15);

  VAR_13 = FUNC_2(VAR_15, VAR_5|VAR_6, (char*)&VAR_18, sizeof(VAR_18));
  FUNC_8(VAR_13, "got %d\n", VAR_13);
  FUNC_8(VAR_18 == VAR_15, "got 0x%08x\n", VAR_18);




  FUNC_7(VAR_17, 0, FUNC_0(VAR_17));
  VAR_14 = FUNC_2(FUNC_3(VAR_3, VAR_11), VAR_8, VAR_17, FUNC_0(VAR_17));
  FUNC_5(0xdeadbeef);
  FUNC_7(VAR_16, 0, FUNC_0(VAR_16));
  VAR_13 = FUNC_2(VAR_3, VAR_8, VAR_16, FUNC_0(VAR_16));
  FUNC_8((VAR_13 == VAR_14) && !FUNC_6(VAR_16, VAR_17),
      "got %d with '%s' (expected %d with '%s')\n",
      VAR_13, VAR_16, VAR_14, VAR_17);

  FUNC_7(VAR_17, 0, FUNC_0(VAR_17));
  VAR_14 = FUNC_2(FUNC_3(VAR_2, VAR_11), VAR_8, VAR_17, FUNC_0(VAR_17));
  if (VAR_14) {
      FUNC_5(0xdeadbeef);
      FUNC_7(VAR_16, 0, FUNC_0(VAR_16));
      VAR_13 = FUNC_2(VAR_2, VAR_8, VAR_16, FUNC_0(VAR_16));
      FUNC_8((VAR_13 == VAR_14) && !FUNC_6(VAR_16, VAR_17),
          "got %d with '%s' (expected %d with '%s')\n",
          VAR_13, VAR_16, VAR_14, VAR_17);
  }
  else
      FUNC_10("LANG_ARABIC not installed\n");


  FUNC_7(VAR_17, 0, FUNC_0(VAR_17));
  VAR_14 = FUNC_2(FUNC_3(VAR_4, VAR_11), VAR_8, VAR_17, FUNC_0(VAR_17));
  FUNC_5(0xdeadbeef);
  FUNC_7(VAR_16, 0, FUNC_0(VAR_16));
  VAR_13 = FUNC_2(VAR_4, VAR_8, VAR_16, FUNC_0(VAR_16));
  FUNC_8((VAR_13 == VAR_14) && !FUNC_6(VAR_16, VAR_17),
      "got %d with '%s' (expected %d with '%s')\n",
      VAR_13, VAR_16, VAR_14, VAR_17);





  FUNC_5(0xdeadbeef);
  FUNC_7(VAR_16, 0, FUNC_0(VAR_16));
  VAR_13 = FUNC_2(VAR_15, VAR_9|VAR_7, VAR_16, 0);
  FUNC_8(VAR_13 == 7 && !VAR_16[0], "Expected len=7, got %d\n", VAR_13);

  FUNC_5(0xdeadbeef);
  FUNC_7(VAR_16, 0, FUNC_0(VAR_16));
  VAR_13 = FUNC_2(VAR_15, VAR_9|VAR_7, VAR_16, 3);
  FUNC_8( !VAR_13 && FUNC_1() == VAR_1,
      "Expected ERROR_INSUFFICIENT_BUFFER, got %d\n", FUNC_1());
  FUNC_8(!FUNC_9(VAR_16, "Mon"), "Expected 'Mon', got '%s'\n", VAR_16);

  FUNC_5(0xdeadbeef);
  FUNC_7(VAR_16, 0, FUNC_0(VAR_16));
  VAR_13 = FUNC_2(VAR_15, VAR_9|VAR_7, VAR_16, 10);
  FUNC_8(VAR_13 == 7, "Expected ret == 7, got %d, error %d\n", VAR_13, FUNC_1());
  FUNC_8(!FUNC_9(VAR_16, "Monday"), "Expected 'Monday', got '%s'\n", VAR_16);
}
