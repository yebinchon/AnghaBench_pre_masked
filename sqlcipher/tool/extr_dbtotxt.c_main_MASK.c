
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bShow ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char const*,char*) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (char,int ) ;
 int FUNC_7 (unsigned char*,int,int,int *) ;
 int FUNC_8 (int *,int ,int ) ;
 long FUNC_9 (int *) ;
 int FUNC_10 (unsigned char*,char,int) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_13 (char const*,char*) ;

int FUNC_14(int VAR_3, char **VAR_4){
  int VAR_5 = 0;
  long VAR_6;
  FILE *VAR_7;
  int VAR_8, VAR_9;
  int VAR_10 = 0;
  const char *VAR_11 = 0;
  const char *VAR_12 = 0;
  int VAR_13 = 0;
  int VAR_14;
  unsigned char VAR_15[16];
  unsigned char VAR_16[100];
  unsigned char VAR_17[256];
  FUNC_10(VAR_17, '.', sizeof(VAR_17));
  for(VAR_8=' '; VAR_8<='~'; VAR_8++){
    if( VAR_8!='{' && VAR_8!='}' && VAR_8!='"' && VAR_8!='\\' ) VAR_17[VAR_8] = (unsigned char)VAR_8;
  }
  for(VAR_8=1; VAR_8<VAR_3; VAR_8++){
    if( VAR_4[VAR_8][0]=='-' ){
      const char *VAR_18 = VAR_4[VAR_8];
      VAR_18++;
      if( VAR_18[0]=='-' ) VAR_18++;
      if( FUNC_13(VAR_18,"pagesize")==0 ){
        VAR_8++;
        VAR_5 = FUNC_1(VAR_4[VAR_8]);
        if( VAR_5<512 || VAR_5>65536 || (VAR_5&(VAR_5-1))!=0 ){
          FUNC_5(VAR_1, "Page size must be a power of two between"
                          " 512 and 65536.\n");
          VAR_10++;
        }
        continue;
      }
      FUNC_5(VAR_1, "Unknown option: %s\n", VAR_4[VAR_8]);
      VAR_10++;
    }else if( VAR_11 ){
      FUNC_5(VAR_1, "Already using a different input file: [%s]\n", VAR_4[VAR_8]);
      VAR_10++;
    }else{
      VAR_11 = VAR_4[VAR_8];
    }
  }
  if( VAR_11==0 ){
    FUNC_5(VAR_1, "No input file specified.\n");
    VAR_10++;
  }
  if( VAR_10 ){
    FUNC_5(VAR_1, "Usage: %s [--pagesize N] FILENAME\n", VAR_4[0]);
    FUNC_2(1);
  }
  VAR_7 = FUNC_4(VAR_11, "rb");
  if( VAR_7==0 ){
    FUNC_5(VAR_1, "Cannot open input file [%s]\n", VAR_11);
    FUNC_2(1);
  }
  FUNC_8(VAR_7, 0, VAR_0);
  VAR_6 = FUNC_9(VAR_7);
  FUNC_12(VAR_7);
  if( VAR_6<100 ){
    FUNC_5(VAR_1, "File too short. Minimum size is 100 bytes.\n");
    FUNC_2(1);
  }
  if( FUNC_7(VAR_16, 100, 1, VAR_7)!=1 ){
    FUNC_5(VAR_1, "Cannot read file header\n");
    FUNC_2(1);
  }
  FUNC_12(VAR_7);
  if( VAR_5==0 ){
    VAR_5 = (VAR_16[16]<<8) | VAR_16[17];
    if( VAR_5==1 ) VAR_5 = 65536;
    if( VAR_5<512 || (VAR_5&(VAR_5-1))!=0 ){
      FUNC_5(VAR_1, "Invalid page size in header: %d\n", VAR_5);
      FUNC_2(1);
    }
  }
  VAR_12 = VAR_11;
  for(VAR_8=0; VAR_11[VAR_8]; VAR_8++){
    if( VAR_11[VAR_8]=='/' && VAR_11[VAR_8+1]!=0 ) VAR_12 = VAR_11+VAR_8+1;
  }
  FUNC_11("| size %d pagesize %d filename %s\n",(int)VAR_6,VAR_5,VAR_12);
  for(VAR_8=0; VAR_8<VAR_6; VAR_8+=16){
    int VAR_19 = (int)FUNC_7(VAR_15, 1, 16, VAR_7);
    if( VAR_19!=16 ){
      static int VAR_20 = 1;
      if( VAR_20 ){
        FUNC_5(VAR_1, "Could not read input file starting at byte %d\n",
                         VAR_8+VAR_19);
      }
      FUNC_10(VAR_15+VAR_19, 0, 16-VAR_19);
    }
    if( FUNC_0(VAR_15) ) continue;
    VAR_14 = VAR_8/VAR_5 + 1;
    if( VAR_13!=VAR_14 ){
      FUNC_11("| page %d offset %d\n", VAR_14, (VAR_14-1)*VAR_5);
      VAR_13 = VAR_14;
    }
    FUNC_11("|  %5d:", VAR_8-(VAR_14-1)*VAR_5);
    for(VAR_9=0; VAR_9<16; VAR_9++) FUNC_11(" %02x", VAR_15[VAR_9]);
    FUNC_11("   ");
    for(VAR_9=0; VAR_9<16; VAR_9++){
      unsigned char VAR_21 = (unsigned char)VAR_15[VAR_9];
      FUNC_6( VAR_17[VAR_21], VAR_2);
    }
    FUNC_6('\n', VAR_2);
  }
  FUNC_3(VAR_7);
  FUNC_11("| end %s\n", VAR_12);
  return 0;
}
