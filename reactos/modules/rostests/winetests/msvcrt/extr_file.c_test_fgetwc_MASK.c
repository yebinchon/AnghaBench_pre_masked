
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int LONG ;
typedef int FILE ;
typedef int BOOL ;


 char* FUNC_0 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (char*,char*) ;
 int FUNC_2 (int *) ;
 unsigned int FUNC_3 (int *) ;
 int FUNC_4 (char*,int,int *) ;
 int * FUNC_5 (char*,char*) ;
 int FUNC_6 (int,int *) ;
 int FUNC_7 (char const*,int *) ;
 int FUNC_8 (int,int *) ;
 int FUNC_9 (char*,int *) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char const*) ;
 int FUNC_13 (int,char*,...) ;
 int FUNC_14 (char const*) ;
 int FUNC_15 (char*) ;

__attribute__((used)) static void FUNC_16( void )
{


  char* VAR_3;
  FILE *VAR_4;
  static const char VAR_5[]= "This is test_fgetwc\r\n";
  WCHAR VAR_6[VAR_0+512 +1];
  WCHAR *VAR_7 = ((void*)0), *VAR_8, *VAR_9;
  BOOL VAR_10 = VAR_1;
  int VAR_11;
  unsigned int VAR_12;
  LONG VAR_13;

  VAR_3=FUNC_1(".","wne");
  VAR_4 = FUNC_5(VAR_3,"wb");
  VAR_11 = 'a';

  for (VAR_12=0; VAR_12<VAR_0-4; VAR_12++)
    FUNC_6(VAR_11,VAR_4);
  VAR_11 = '\r';
  FUNC_6(VAR_11,VAR_4);
  VAR_11 = '\n';
  FUNC_6(VAR_11,VAR_4);
  FUNC_7(VAR_5,VAR_4);
  FUNC_2(VAR_4);


  VAR_4 = FUNC_5(VAR_3,"rt");
  FUNC_4(VAR_6,512,VAR_4);
  VAR_13=FUNC_11(VAR_4);
  FUNC_13(VAR_13==VAR_0-2, "ftell expected %d got %d\n", VAR_0-2, VAR_13);
  FUNC_4(VAR_6,512,VAR_4);
  VAR_13=FUNC_11(VAR_4);
  FUNC_13(VAR_13==VAR_0-2+FUNC_14(VAR_5), "ftell expected %d got %d\n", VAR_0-2+FUNC_12(VAR_5), VAR_13);
  VAR_7 = FUNC_0 (VAR_5);
  VAR_8 = VAR_7;
  VAR_9 = VAR_6;
  for (VAR_12=0; VAR_12<FUNC_14(VAR_5)-2; VAR_12++, VAR_8++, VAR_9++)
    {
      VAR_10 |= (*VAR_8 != *VAR_9);
    }
  FUNC_13(!(VAR_10), "fgetwc difference found in TEXT mode\n");
  FUNC_13(*VAR_9 == '\n', "Carriage return was not skipped\n");
  FUNC_2(VAR_4);
  FUNC_15(VAR_3);

  VAR_4 = FUNC_5(VAR_3,"wb");
  VAR_11 = 'a';



  for (VAR_12=0; VAR_12<VAR_0-3-FUNC_14(VAR_5)*sizeof(WCHAR); VAR_12++)
    FUNC_6(VAR_11,VAR_4);
  VAR_11 = '\r';
  FUNC_8(VAR_11,VAR_4);
  VAR_11 = '\n';
  FUNC_8(VAR_11,VAR_4);
  FUNC_9(VAR_6,VAR_4);
  FUNC_9(VAR_6,VAR_4);
  FUNC_2(VAR_4);

  VAR_4 = FUNC_5(VAR_3,"rb");
  VAR_11=(VAR_0-2)/sizeof(WCHAR)-FUNC_14(VAR_5);
  FUNC_4(VAR_6,VAR_11,VAR_4);
  VAR_13=FUNC_11(VAR_4);
  VAR_11=(VAR_11-1)*sizeof(WCHAR);
  FUNC_13(VAR_13==VAR_11, "ftell expected %d got %d\n", VAR_11, VAR_13);
  VAR_12=FUNC_3(VAR_4);
  FUNC_13(VAR_12=='a', "fgetc expected %d got %d\n", 0x61, VAR_12);
  VAR_13=FUNC_11(VAR_4);
  VAR_11++;
  FUNC_13(VAR_13==VAR_11, "ftell expected %d got %d\n", VAR_11, VAR_13);
  FUNC_4(VAR_6,3,VAR_4);
  FUNC_13(VAR_6[0]=='\r',"expected carriage return got %04hx\n", VAR_6[0]);
  FUNC_13(VAR_6[1]=='\n',"expected newline got %04hx\n", VAR_6[1]);
  VAR_13=FUNC_11(VAR_4);
  VAR_11 += 4;
  FUNC_13(VAR_13==VAR_11, "ftell expected %d got %d\n", VAR_11, VAR_13);
  for(VAR_12=0; VAR_12<FUNC_14(VAR_5); VAR_12++)
    VAR_6[VAR_12] = 0;

  FUNC_4(VAR_6,512,VAR_4);
  VAR_13=FUNC_11(VAR_4);
  VAR_11 += (FUNC_14(VAR_5)-1)*sizeof(WCHAR);
  FUNC_13(VAR_13==VAR_11, "ftell expected %d got %d\n", VAR_11, VAR_13);
  VAR_10 = VAR_1;
  VAR_8 = VAR_7;
  VAR_9 = VAR_6;
  for (VAR_12=0; VAR_12<FUNC_14(VAR_5)-2; VAR_12++, VAR_8++, VAR_9++)
    {
      FUNC_13(*VAR_8 == *VAR_9, "Char %d expected %04hx got %04hx\n", VAR_12, *VAR_8, *VAR_9);
      VAR_10 |= (*VAR_8 != *VAR_9);
    }
  FUNC_13(!(VAR_10), "fgetwc difference found in BINARY mode\n");
  FUNC_13(*VAR_9 == '\n', "Should get newline\n");
  for(VAR_12=0; VAR_12<FUNC_14(VAR_5); VAR_12++)
    VAR_6[VAR_12] = 0;


  FUNC_4(VAR_6,512,VAR_4);
  VAR_10 = VAR_1;
  VAR_8 = VAR_7;
  VAR_9 = VAR_6;
  for (VAR_12=0; VAR_12<FUNC_14(VAR_5)-2; VAR_12++, VAR_8++, VAR_9++)
    {
      FUNC_13(*VAR_8 == *VAR_9, "Char %d expected %04hx got %04hx\n", VAR_12, *VAR_8, *VAR_9);
      VAR_10 |= (*VAR_8 != *VAR_9);
    }
  FUNC_13(!(VAR_10), "fgetwc difference found in BINARY mode\n");
  FUNC_13(*VAR_9 == '\n', "Should get newline\n");

  FUNC_10(VAR_7);
  FUNC_2(VAR_4);
  FUNC_15(VAR_3);
  FUNC_10(VAR_3);
}
