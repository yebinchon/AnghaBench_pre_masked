
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int c ;
typedef int a ;


 int * FUNC_0 (char**,char*,char*,...) ;
 char* FUNC_1 (char*,char*,int) ;
 char* FUNC_2 (char*,char*,int) ;
 char* FUNC_3 (char*,char*,int) ;
 char* FUNC_4 (char*,char*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,...) ;
 scalar_t__ FUNC_8 (char*,char*) ;

int FUNC_9(int VAR_0, char **VAR_1)
{
 char VAR_2[8];
 char VAR_3[32];
 char *VAR_4;
 char VAR_5[37];
 char VAR_6[23];
 int VAR_7;
 int VAR_8, VAR_9;

 VAR_4 = FUNC_2(VAR_2, "hello", sizeof(VAR_2));
 VAR_4 = FUNC_1(VAR_4, "world", sizeof(VAR_2));
 FUNC_7("1: result=[%s] should be=[%s]\n",
  VAR_4,
  "hellowo"
 );

 for (VAR_7=0; VAR_7<sizeof(VAR_5); VAR_7++)
  VAR_5[VAR_7] = 'X';
 VAR_4 = FUNC_2(VAR_5, "testing", sizeof(VAR_5) - 2);
 for (VAR_7=sizeof(VAR_5) - 2; VAR_7<sizeof(VAR_5); VAR_7++) {
  if (VAR_5[VAR_7] != 'X') {
   FUNC_7("2: overwrote buffer\n");
   break;
  }
 }

 for (VAR_7=0; VAR_7<sizeof(VAR_5); VAR_7++)
  VAR_5[VAR_7] = 'X';
 VAR_4 = FUNC_2(VAR_5, "testing", sizeof(VAR_5) - 2);
 VAR_4 = FUNC_1(VAR_4, " still", sizeof(VAR_5) - 2);
 for (VAR_7=sizeof(VAR_5) - 2; VAR_7<sizeof(VAR_5); VAR_7++) {
  if (VAR_5[VAR_7] != 'X') {
   FUNC_7("3: overwrote buffer\n");
   break;
  }
 }



 VAR_4 = FUNC_4(VAR_2, "hello", sizeof(VAR_2));
 VAR_8 = (int) (VAR_4 - VAR_2);
 VAR_4 = FUNC_3(VAR_2, "world", sizeof(VAR_2));
 VAR_9 = (int) (VAR_4 - VAR_2);
 FUNC_7("4: result=[%s] should be=[%s] len1=%d len2=%d\n",
  VAR_2,
  "hellowo",
  VAR_8,
  VAR_9
 );

 for (VAR_7=0; VAR_7<sizeof(VAR_5); VAR_7++)
  VAR_5[VAR_7] = 'X';
 VAR_4 = FUNC_4(VAR_5, "testing", sizeof(VAR_5) - 2);
 for (VAR_7=sizeof(VAR_5) - 2; VAR_7<sizeof(VAR_5); VAR_7++) {
  if (VAR_5[VAR_7] != 'X') {
   FUNC_7("5: overwrote buffer\n");
   break;
  }
 }

 for (VAR_7=0; VAR_7<sizeof(VAR_5); VAR_7++)
  VAR_5[VAR_7] = 'X';
 VAR_4 = FUNC_4(VAR_5, "testing", sizeof(VAR_5) - 2);
 VAR_4 = FUNC_3(VAR_5, " still", sizeof(VAR_5) - 2);
 for (VAR_7=sizeof(VAR_5) - 2; VAR_7<sizeof(VAR_5); VAR_7++) {
  if (VAR_5[VAR_7] != 'X') {
   FUNC_7("6: overwrote buffer\n");
   break;
  }
 }


 {
  char *VAR_10;

  VAR_10 = ((void*)0);
  if (FUNC_0(&VAR_10, "this is a test", 0) == ((void*)0)) {
   FUNC_7("7a: fail\n");
  } else if (FUNC_8(VAR_10, "this is a test") != 0) {
   FUNC_7("7b: fail\n");
  }
  FUNC_6(VAR_10);

  VAR_10 = ((void*)0);
  if (FUNC_0(&VAR_10, "this is a test", 0) == ((void*)0)) {
   FUNC_7("7c: fail\n");
  } else if (FUNC_8(VAR_10, "this is a test") != 0) {
   FUNC_7("7d: fail\n");
  } else if (FUNC_0(&VAR_10, " ", "", "and", " ", "so is this", 0) == ((void*)0)) {
   FUNC_7("7e: fail\n");
  } else if (FUNC_8(VAR_10, "this is a test and so is this") != 0) {
   FUNC_7("7f: fail\n");
  }
  FUNC_6(VAR_10);
 }
 FUNC_5(0);
}
