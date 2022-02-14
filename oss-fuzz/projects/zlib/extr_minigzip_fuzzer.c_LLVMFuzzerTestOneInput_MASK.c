
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int outmode ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;
 int * FUNC_7 (char*,char*) ;
 scalar_t__ FUNC_8 (char*,int,int,int *) ;
 size_t FUNC_9 (int const*,int,unsigned int,int *) ;
 scalar_t__ FUNC_10 (int const*,char*,int) ;
 int FUNC_11 (char*,int ,int) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,int,char*,char*) ;

int FUNC_14(const uint8_t *VAR_1, size_t VAR_2) {
  char *VAR_3 = "/tmp/minigzip_fuzzer.out";
  char *VAR_4 = "/tmp/minigzip_fuzzer.out.gz";
  char VAR_5[20];
  FILE *VAR_6;
  char VAR_7[VAR_0];
  uint32_t VAR_8 = 0;


  static size_t VAR_9 = 1024 * 1024;
  if (VAR_2 < 1 || VAR_2 > VAR_9)
    return 0;

  VAR_6 = FUNC_7(VAR_3, "w");
  if (FUNC_9(VAR_1, 1, (unsigned)VAR_2, VAR_6) != VAR_2)
    FUNC_1("failed fwrite");
  if (FUNC_3(VAR_6))
    FUNC_1("failed fclose");

  FUNC_11(VAR_5, 0, sizeof(VAR_5));
  FUNC_13(VAR_5, sizeof(VAR_5), "%s", "wb");


  VAR_5[2] = VAR_1[0] % 10;

  switch (VAR_1[0] % 4) {
  default:
  case 0:
    VAR_5[3] = 0;
    break;
  case 1:

    VAR_5[3] = 'f';
    break;
  case 2:

    VAR_5[3] = 'h';
    break;
  case 3:

    VAR_5[3] = 'R';
    break;
  }

  FUNC_5(VAR_3, VAR_5);
  FUNC_6(VAR_4);


  VAR_6 = FUNC_7(VAR_3, "rb");
  if (VAR_6 == ((void*)0)) {
    FUNC_12(VAR_3);
    FUNC_2(1);
  }

  FUNC_11(VAR_7, 0, sizeof(VAR_7));
  for (;;) {
    int VAR_10 = (int)FUNC_8(VAR_7, 1, sizeof(VAR_7), VAR_6);
    if (FUNC_4(VAR_6)) {
      FUNC_12("fread");
      FUNC_2(1);
    }
    if (VAR_10 == 0)
      break;
    FUNC_0(0 == FUNC_10(VAR_1 + VAR_8, VAR_7, VAR_10));
    VAR_8 += VAR_10;
  }

  if (FUNC_3(VAR_6))
    FUNC_1("failed fclose");


  return 0;
}
