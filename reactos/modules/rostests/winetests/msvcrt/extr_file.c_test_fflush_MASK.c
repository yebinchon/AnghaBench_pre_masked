
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int obuf ;
typedef int buf2 ;
typedef int buf1 ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int ) ;
 char* FUNC_3 (char*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,int,int,int *) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char const*,int,int,int *) ;
 scalar_t__ FUNC_10 (char*,char*,int) ;
 int FUNC_11 (char*,char,int) ;
 int FUNC_12 (int,char*,...) ;
 int FUNC_13 (char*) ;

__attribute__((used)) static void FUNC_14( void )
{
  static const char VAR_1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=";
  char VAR_2[16], VAR_3[24];
  char *VAR_4;
  FILE *VAR_5;
  int VAR_6;

  VAR_4=FUNC_3(".","wne");


  VAR_5 = FUNC_6(VAR_4,"wb");
  FUNC_12(VAR_5 != ((void*)0), "Can't open test file.\n");
  FUNC_9(VAR_1, 1, sizeof(VAR_1), VAR_5);
  FUNC_4(VAR_5);


  VAR_5 = FUNC_6(VAR_4,"rb");
  FUNC_12(VAR_5 != ((void*)0), "Can't open test file.\n");
  FUNC_7(VAR_2, 1, sizeof(VAR_2), VAR_5);



  FUNC_2(FUNC_0(VAR_5), 0, VAR_0);
  VAR_6 = FUNC_5(VAR_5);
  FUNC_12(VAR_6 == 0, "expected 0, got %d\n", VAR_6);
  FUNC_11(VAR_3, '?', sizeof(VAR_3));
  FUNC_7(VAR_3, 1, sizeof(VAR_3), VAR_5);
  FUNC_12(FUNC_10(VAR_2, VAR_3, sizeof(VAR_2)) == 0, "Got unexpected data (%c)\n", VAR_3[0]);


  FUNC_2(FUNC_0(VAR_5), 0, VAR_0);
  VAR_6 = FUNC_5(((void*)0));
  FUNC_12(VAR_6 == 0, "expected 0, got %d\n", VAR_6);
  FUNC_11(VAR_3, '?', sizeof(VAR_3));
  FUNC_7(VAR_3, 1, sizeof(VAR_3), VAR_5);
  FUNC_12(FUNC_10(VAR_2, VAR_3, sizeof(VAR_2)) != 0, "Got unexpected data (%c)\n", VAR_3[0]);


  FUNC_2(FUNC_0(VAR_5), 0, VAR_0);
  VAR_6 = FUNC_1();
  FUNC_12(VAR_6 >= 0, "unexpected ret %d\n", VAR_6);
  FUNC_11(VAR_3, '?', sizeof(VAR_3));
  FUNC_7(VAR_3, 1, sizeof(VAR_3), VAR_5);
  FUNC_12(FUNC_10(VAR_2, VAR_3, sizeof(VAR_2)) == 0, "Got unexpected data (%c)\n", VAR_3[0]);

  FUNC_4(VAR_5);

  FUNC_13(VAR_4);
  FUNC_8(VAR_4);
}
