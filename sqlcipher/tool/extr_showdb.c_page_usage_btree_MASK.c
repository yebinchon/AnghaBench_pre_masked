
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mxPage; int pagesize; } ;


 unsigned int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (int,int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (unsigned char,unsigned char*,int,int) ;
 int FUNC_3 (int,char*,char const*,char const*,...) ;
 int FUNC_4 (unsigned char*) ;

__attribute__((used)) static void FUNC_5(
  int VAR_1,
  int VAR_2,
  int VAR_3,
  const char *VAR_4
){
  unsigned char *VAR_5;
  const char *VAR_6 = "corrupt node";
  int VAR_7;
  int VAR_8;
  int VAR_9 = VAR_1==1 ? 100 : 0;

  if( VAR_1<=0 || VAR_1>VAR_0.mxPage ) return;
  VAR_5 = FUNC_1((VAR_1-1)*VAR_0.pagesize, VAR_0.pagesize);
  switch( VAR_5[VAR_9] ){
    case 2: VAR_6 = "interior node of index"; break;
    case 5: VAR_6 = "interior node of table"; break;
    case 10: VAR_6 = "leaf of index"; break;
    case 13: VAR_6 = "leaf of table"; break;
  }
  if( VAR_2 ){
    FUNC_3(VAR_1, "%s [%s], child %d of page %d",
                   VAR_6, VAR_4, VAR_3, VAR_2);
  }else{
    FUNC_3(VAR_1, "root %s [%s]", VAR_6, VAR_4);
  }
  VAR_7 = VAR_5[VAR_9+3]*256 + VAR_5[VAR_9+4];
  if( VAR_5[VAR_9]==2 || VAR_5[VAR_9]==5 ){
    int VAR_10 = VAR_9+12;
    unsigned int VAR_11;
    for(VAR_8=0; VAR_8<VAR_7; VAR_8++){
      int VAR_12;

      VAR_12 = VAR_10 + VAR_8*2;
      VAR_12 = VAR_5[VAR_12]*256 + VAR_5[VAR_12+1];
      VAR_11 = FUNC_0(VAR_5+VAR_12);
      FUNC_5(VAR_11, VAR_1, VAR_8, VAR_4);
    }
    VAR_11 = FUNC_0(VAR_5+VAR_10-4);
    FUNC_5(VAR_11, VAR_1, VAR_8, VAR_4);
  }
  if( VAR_5[VAR_9]==2 || VAR_5[VAR_9]==10 || VAR_5[VAR_9]==13 ){
    int VAR_13 = VAR_9 + 8 + 4*(VAR_5[VAR_9]<=5);
    for(VAR_8=0; VAR_8<VAR_7; VAR_8++){
      int VAR_14;
      VAR_14 = VAR_13 + VAR_8*2;
      VAR_14 = VAR_5[VAR_14]*256 + VAR_5[VAR_14+1];
      FUNC_2(VAR_5[VAR_9], VAR_5+VAR_14, VAR_1, VAR_8);
    }
  }
  FUNC_4(VAR_5);
}
