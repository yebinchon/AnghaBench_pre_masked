
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int i64 ;
struct TYPE_2__ {size_t pagesize; } ;


 int FUNC_0 (char) ;
 int FUNC_1 (unsigned char*,int,int,int,int) ;
 int FUNC_2 (unsigned char,unsigned char*,int,char**) ;
 TYPE_1__ VAR_0 ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,char,size_t) ;
 int FUNC_5 (unsigned char*,int,int,char const*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (size_t) ;
 scalar_t__ FUNC_10 (char*) ;

__attribute__((used)) static void FUNC_11(
  unsigned char *VAR_1,
  int VAR_2,
  int VAR_3,
  char *VAR_4
){
  const char *VAR_5 = "unknown";
  int VAR_6;
  int VAR_7, VAR_8;
  int VAR_9;
  int VAR_10 = 0;
  int VAR_11 = 0;
  int VAR_12 = -2;
  char *VAR_13 = 0;
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
      case 'd': {
        if( !FUNC_0(VAR_4[1]) ){
          VAR_12 = -1;
        }else{
          VAR_12 = 0;
          while( FUNC_0(VAR_4[1]) ){
            VAR_4++;
            VAR_12 = VAR_12*10 + VAR_4[0] - '0';
          }
        }
        break;
      }
    }
    VAR_4++;
  }
  VAR_6 = VAR_1[3]*256 + VAR_1[4];
  VAR_9 = (VAR_1[0]==2 || VAR_1[0]==5) ? 12 : 8;
  if( VAR_12>=VAR_6 ){
    FUNC_6("Page %d has only %d cells\n", VAR_2, VAR_6);
    return;
  }
  FUNC_6("Header on btree page %d:\n", VAR_2);
  FUNC_5(VAR_1, 0, 1, VAR_5);
  FUNC_5(VAR_1, 1, 2, "Offset to first freeblock");
  FUNC_5(VAR_1, 3, 2, "Number of cells on this page");
  FUNC_5(VAR_1, 5, 2, "Offset to cell content area");
  FUNC_5(VAR_1, 7, 1, "Fragmented byte count");
  if( VAR_1[0]==2 || VAR_1[0]==5 ){
    FUNC_5(VAR_1, 8, 4, "Right child");
  }
  if( VAR_12==(-2) && VAR_6>0 ){
    FUNC_6(" key: lx=left-child n=payload-size r=rowid\n");
  }
  if( VAR_11 ){
    VAR_13 = FUNC_9(VAR_0.pagesize);
    FUNC_4(VAR_13, '.', VAR_0.pagesize);
    FUNC_4(VAR_13, '1', VAR_3);
    FUNC_4(&VAR_13[VAR_3], 'H', VAR_9);
    FUNC_4(&VAR_13[VAR_3+VAR_9], 'P', 2*VAR_6);
  }
  for(VAR_7=0; VAR_7<VAR_6; VAR_7++){
    int VAR_14 = VAR_9 + VAR_7*2;
    char *VAR_15;
    i64 VAR_16;

    VAR_14 = VAR_1[VAR_14]*256 + VAR_1[VAR_14+1];
    VAR_16 = FUNC_2(VAR_1[0], &VAR_1[VAR_14-VAR_3], VAR_10, &VAR_15);
    if( VAR_11 ){
      char VAR_17[30];
      FUNC_4(&VAR_13[VAR_14], '*', (size_t)VAR_16);
      VAR_13[VAR_14] = '[';
      VAR_13[VAR_14+VAR_16-1] = ']';
      FUNC_7(VAR_17, "%d", VAR_7);
      VAR_8 = (int)FUNC_10(VAR_17);
      if( VAR_8<=VAR_16-2 ) FUNC_3(&VAR_13[VAR_14+1], VAR_17, VAR_8);
    }
    if( VAR_12==(-2) ){
      FUNC_6(" %03x: cell[%d] %s\n", VAR_14, VAR_7, VAR_15);
    }else if( VAR_12==(-1) || VAR_12==VAR_7 ){
      FUNC_1(VAR_1, VAR_2, VAR_7, VAR_3, VAR_14-VAR_3);
    }
  }
  if( VAR_11 ){
    FUNC_6("Page map:  (H=header P=cell-index 1=page-1-header .=free-space)\n");
    for(VAR_7=0; VAR_7<VAR_0.pagesize; VAR_7+=64){
      FUNC_6(" %03x: %.64s\n", VAR_7, &VAR_13[VAR_7]);
    }
    FUNC_8(VAR_13);
  }
}
