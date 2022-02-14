
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int i64 ;


 int FUNC_0 (unsigned char,unsigned char*,int,char**) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,char,size_t) ;
 int VAR_0 ;
 int FUNC_5 (unsigned char*,int,int,int ,char const*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*,char*,int) ;
 scalar_t__ FUNC_8 (char*) ;

__attribute__((used)) static void FUNC_9(
  unsigned char *VAR_1,
  int VAR_2,
  int VAR_3,
  const char *VAR_4
){
  const char *VAR_5 = "unknown";
  int VAR_6;
  int VAR_7, VAR_8;
  int VAR_9;
  int VAR_10 = 0;
  int VAR_11 = 0;
  char *VAR_12 = 0;
  switch( VAR_1[0] ){
    case 2: VAR_5 = "index interior node"; break;
    case 5: VAR_5 = "table interior node"; break;
    case 10: VAR_5 = "index leaf"; break;
    case 13: VAR_5 = "table leaf"; break;
  }
  while( VAR_4[0] ){
    switch( VAR_4[0] ){
      case 'c': VAR_10 = 1; break;
      case 'm': VAR_11 = 1; break;
    }
    VAR_4++;
  }
  FUNC_6("Decode of btree page %d:\n", VAR_2);
  FUNC_5(VAR_1, 0, 1, 0, VAR_5);
  FUNC_5(VAR_1, 1, 2, 0, "Offset to first freeblock");
  FUNC_5(VAR_1, 3, 2, 0, "Number of cells on this page");
  VAR_6 = VAR_1[3]*256 + VAR_1[4];
  FUNC_5(VAR_1, 5, 2, 0, "Offset to cell content area");
  FUNC_5(VAR_1, 7, 1, 0, "Fragmented byte count");
  if( VAR_1[0]==2 || VAR_1[0]==5 ){
    FUNC_5(VAR_1, 8, 4, 0, "Right child");
    VAR_9 = 12;
  }else{
    VAR_9 = 8;
  }
  if( VAR_6>0 ){
    FUNC_6(" key: lx=left-child n=payload-size r=rowid\n");
  }
  if( VAR_11 ){
    VAR_12 = FUNC_2(VAR_0);
    FUNC_4(VAR_12, '.', VAR_0);
    FUNC_4(VAR_12, '1', VAR_3);
    FUNC_4(&VAR_12[VAR_3], 'H', VAR_9);
    FUNC_4(&VAR_12[VAR_3+VAR_9], 'P', 2*VAR_6);
  }
  for(VAR_7=0; VAR_7<VAR_6; VAR_7++){
    int VAR_13 = VAR_9 + VAR_7*2;
    char *VAR_14;
    i64 VAR_15;

    VAR_13 = VAR_1[VAR_13]*256 + VAR_1[VAR_13+1];
    VAR_15 = FUNC_0(VAR_1[0], &VAR_1[VAR_13-VAR_3], VAR_10, &VAR_14);
    if( VAR_11 ){
      char VAR_16[30];
      FUNC_4(&VAR_12[VAR_13], '*', (size_t)VAR_15);
      VAR_12[VAR_13] = '[';
      VAR_12[VAR_13+VAR_15-1] = ']';
      FUNC_7(VAR_16, "%d", VAR_7);
      VAR_8 = (int)FUNC_8(VAR_16);
      if( VAR_8<=VAR_15-2 ) FUNC_3(&VAR_12[VAR_13+1], VAR_16, VAR_8);
    }
    FUNC_6(" %03x: cell[%d] %s\n", VAR_13, VAR_7, VAR_14);
  }
  if( VAR_11 ){
    for(VAR_7=0; VAR_7<VAR_0; VAR_7+=64){
      FUNC_6(" %03x: %.64s\n", VAR_7, &VAR_12[VAR_7]);
    }
    FUNC_1(VAR_12);
  }
}
