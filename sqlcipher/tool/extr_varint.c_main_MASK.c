
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int i64 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*,...) ;
 int FUNC_2 (char) ;
 int FUNC_3 (int*,int*,int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (unsigned char*,int) ;
 int VAR_0 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (unsigned char) ;

int FUNC_8(int VAR_1, char **VAR_2){
  int VAR_3;
  u64 VAR_4;
  u64 VAR_5 = 0;
  i64 VAR_6;
  int VAR_7;
  unsigned char VAR_8[20];

  if( VAR_1==1 ){
    FUNC_1(VAR_0,
         "Usage:\n"
         "  %s HH HH HH ...   Convert varint to decimal\n"
         "  %s DDDDD          Convert decimal to varint\n"
         "                    Add '+' or '-' before DDDDD to disambiguate.\n",
         VAR_2[0], VAR_2[0]);
    FUNC_0(1);
  }
  if( VAR_1>2
   || (FUNC_6(VAR_2[1])==2 && FUNC_2(VAR_2[1][0])>=0 && FUNC_2(VAR_2[1][1])>=0)
  ){

    for(VAR_3=1; VAR_3<VAR_1 && VAR_3<9; VAR_3++){
      if( FUNC_6(VAR_2[VAR_3])!=2 ){
        FUNC_1(VAR_0, "Not a hex byte: %s\n", VAR_2[VAR_3]);
        FUNC_0(1);
      }
      VAR_4 = (FUNC_2(VAR_2[VAR_3][0])<<4) + FUNC_2(VAR_2[VAR_3][1]);
      VAR_5 = (VAR_5<<7) + (VAR_4&0x7f);
      if( (VAR_4&0x80)==0 ) break;
    }
    if( VAR_3==9 && VAR_3<VAR_1 ){
      if( FUNC_6(VAR_2[VAR_3])!=2 ){
        FUNC_1(VAR_0, "Not a hex byte: %s\n", VAR_2[VAR_3]);
        FUNC_0(1);
      }
      VAR_4 = (FUNC_2(VAR_2[VAR_3][0])<<4) + FUNC_2(VAR_2[VAR_3][1]);
      VAR_5 = (VAR_5<<8) + VAR_4;
    }
    VAR_3++;
    if( VAR_3<VAR_1 ){
      FUNC_1(VAR_0, "Extra arguments: %s...\n", VAR_2[VAR_3]);
      FUNC_0(1);
    }
  }else{
    char *VAR_9 = VAR_2[1];
    int VAR_10 = 1;
    if( VAR_9[0]=='+' ) VAR_9++;
    else if( VAR_9[0]=='-' ){ VAR_9++; VAR_10 = -1; }
    VAR_5 = 0;
    while( VAR_9[0] ){
      if( VAR_9[0]<'0' || VAR_9[0]>'9' ){
        FUNC_1(VAR_0, "Not a decimal number: %s", VAR_2[1]);
        FUNC_0(1);
      }
      VAR_5 = VAR_5*10 + VAR_9[0] - '0';
      VAR_9++;
    }
    if( VAR_10<0 ){
      FUNC_3(&VAR_6, &VAR_5, 8);
      VAR_6 = -VAR_6;
      FUNC_3(&VAR_5, &VAR_6, 8);
    }
  }
  VAR_7 = FUNC_5(VAR_8, VAR_5);
  FUNC_4("%lld =", (i64)VAR_5);
  for(VAR_3=0; VAR_3<VAR_7; VAR_3++){
    FUNC_4(" %c%c", FUNC_7(VAR_8[VAR_3]>>4), FUNC_7(VAR_8[VAR_3]&0x0f));
  }
  FUNC_4("\n");
  return 0;
}
