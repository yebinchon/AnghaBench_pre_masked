
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LONG ;
typedef int FILE ;


 char* FUNC_0 (char*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char*,int,int *) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (int,int *) ;
 int FUNC_6 (char const*,int *) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int,char*,...) ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static void FUNC_12( void )
{
  char* VAR_0;
  FILE *VAR_1;
  static const char VAR_2[]= "This is test_ctrlz";
  char VAR_3[256];
  int VAR_4, VAR_5;
  LONG VAR_6;

  VAR_0=FUNC_0(".","wne");
  VAR_1 = FUNC_4(VAR_0,"wb");
  FUNC_6(VAR_2,VAR_1);
  VAR_5 = 0x1a;
  FUNC_5(VAR_5,VAR_1);
  VAR_5 = '\r';
  FUNC_5(VAR_5,VAR_1);
  VAR_5 = '\n';
  FUNC_5(VAR_5,VAR_1);
  VAR_5 = 'a';
  FUNC_5(VAR_5,VAR_1);
  FUNC_1(VAR_1);
  VAR_1 = FUNC_4(VAR_0,"rt");
  FUNC_9(FUNC_3(VAR_3,256,VAR_1) != 0,"fgets failed unexpected\n");
  VAR_4=FUNC_10(VAR_3);
  VAR_5=FUNC_10(VAR_2);
  FUNC_9(VAR_4==VAR_5, "returned string length expected %d got %d\n", VAR_5, VAR_4);
  VAR_5+=4;
  VAR_6=FUNC_8(VAR_1);
  FUNC_9(VAR_6==VAR_5, "ftell expected %d got %d\n", VAR_5, VAR_6);
  FUNC_9(FUNC_2(VAR_1), "did not get EOF\n");
  FUNC_1(VAR_1);

  VAR_1 = FUNC_4(VAR_0,"rb");
  FUNC_9(FUNC_3(VAR_3,256,VAR_1) != 0,"fgets failed unexpected\n");
  VAR_4=FUNC_10(VAR_3);
  VAR_5=FUNC_10(VAR_2)+3;
  FUNC_9(VAR_4==VAR_5, "returned string length expected %d got %d\n", VAR_5, VAR_4);
  VAR_6=FUNC_8(VAR_1);
  FUNC_9(VAR_6==VAR_5, "ftell expected %d got %d\n", VAR_5, VAR_6);
  FUNC_9(FUNC_3(VAR_3,256,VAR_1) != 0,"fgets failed unexpected\n");
  VAR_4=FUNC_10(VAR_3);
  FUNC_9(VAR_4==1, "returned string length expected %d got %d\n", 1, VAR_4);
  FUNC_9(FUNC_2(VAR_1), "did not get EOF\n");
  FUNC_1(VAR_1);
  FUNC_11(VAR_0);
  FUNC_7(VAR_0);
}
