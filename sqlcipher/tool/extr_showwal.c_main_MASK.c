
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;
typedef int off_t ;
typedef int Cksum ;


 int FUNC_0 (char) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned char*,int,int,char*) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (unsigned char*) ;
 int FUNC_6 (scalar_t__,struct stat*) ;
 unsigned char* FUNC_7 (int,int) ;
 int FUNC_8 (scalar_t__,int,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_9 (char*,int ) ;
 int VAR_4 ;
 int FUNC_10 (int) ;
 int FUNC_11 (int,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (scalar_t__,unsigned char*,int) ;
 int VAR_5 ;
 scalar_t__ FUNC_15 (char*,char*) ;
 int FUNC_16 (char*,char**,int ) ;
 int FUNC_17 (char*,int) ;

int FUNC_18(int VAR_6, char **VAR_7){
  struct stat VAR_8;
  unsigned char VAR_9[4];
  if( VAR_6<2 ){
    FUNC_4(VAR_5,"Usage: %s FILENAME ?PAGE? ...\n", VAR_7[0]);
    FUNC_3(1);
  }
  VAR_2 = FUNC_9(VAR_7[1], VAR_0);
  if( VAR_2<0 ){
    FUNC_4(VAR_5,"%s: can't open %s\n", VAR_7[0], VAR_7[1]);
    FUNC_3(1);
  }
  VAR_9[0] = 0;
  VAR_9[1] = 0;
  FUNC_8(VAR_2, 8, VAR_1);
  FUNC_14(VAR_2, VAR_9, 4);
  VAR_4 = VAR_9[1]*65536 + VAR_9[2]*256 + VAR_9[3];
  if( VAR_4==0 ) VAR_4 = 1024;
  FUNC_13("Pagesize: %d\n", VAR_4);
  FUNC_6(VAR_2, &VAR_8);
  if( VAR_8.st_size<32 ){
    FUNC_13("file too small to be a WAL\n");
    return 0;
  }
  VAR_3 = (VAR_8.st_size - 32)/(VAR_4 + 24);
  FUNC_13("Available pages: 1..%d\n", VAR_3);
  if( VAR_6==2 ){
    int VAR_10;
    Cksum VAR_11;
    FUNC_12(&VAR_11);
    for(VAR_10=1; VAR_10<=VAR_3; VAR_10++){
      FUNC_11(VAR_10, &VAR_11);
    }
  }else{
    int VAR_12;
    for(VAR_12=2; VAR_12<VAR_6; VAR_12++){
      int VAR_13, VAR_14;
      char *VAR_15;
      if( FUNC_15(VAR_7[VAR_12], "header")==0 ){
        FUNC_12(0);
        continue;
      }
      if( !FUNC_0(VAR_7[VAR_12][0]) ){
        FUNC_4(VAR_5, "%s: unknown option: [%s]\n", VAR_7[0], VAR_7[VAR_12]);
        continue;
      }
      VAR_13 = FUNC_16(VAR_7[VAR_12], &VAR_15, 0);
      if( VAR_15 && FUNC_15(VAR_15,"..end")==0 ){
        VAR_14 = VAR_3;
      }else if( VAR_15 && VAR_15[0]=='.' && VAR_15[1]=='.' ){
        VAR_14 = FUNC_16(&VAR_15[2], 0, 0);
      }else if( VAR_15 && VAR_15[0]=='b' ){
        int VAR_16, VAR_17, VAR_18;
        unsigned char *VAR_19;
        if( VAR_13==1 ){
          VAR_18 = 100;
          VAR_16 = VAR_18 = 100;
          VAR_17 = VAR_4-100;
        }else{
          VAR_18 = 0;
          VAR_16 = (VAR_13-1)*VAR_4;
          VAR_17 = VAR_4;
        }
        VAR_16 = 32 + VAR_18 + (VAR_13-1)*(VAR_4+24) + 24;
        VAR_19 = FUNC_7(VAR_16, VAR_17);
        FUNC_2(VAR_19, VAR_13, VAR_18, VAR_15+1);
        FUNC_5(VAR_19);
        continue;

      }else if( VAR_15 && FUNC_15(VAR_15,"truncate")==0 ){


        off_t VAR_20 = 32 + VAR_13*(VAR_4+24);
        FUNC_17(VAR_7[1], VAR_20);
        continue;

      }else{
        VAR_14 = VAR_13;
      }
      if( VAR_13<1 || VAR_14<VAR_13 || VAR_14>VAR_3 ){
        FUNC_4(VAR_5,
          "Page argument should be LOWER?..UPPER?.  Range 1 to %d\n",
          VAR_3);
        FUNC_3(1);
      }
      while( VAR_13<=VAR_14 ){
        FUNC_10(VAR_13);
        VAR_13++;
      }
    }
  }
  FUNC_1(VAR_2);
  return 0;
}
