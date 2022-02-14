
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mxPage; int pagesize; } ;


 unsigned int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (int,int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (unsigned char*) ;

__attribute__((used)) static void FUNC_4(const char *VAR_1){
  int VAR_2;
  unsigned char *VAR_3;
  unsigned char *VAR_4;
  int VAR_5;
  int VAR_6;
  int VAR_7;


  if( VAR_0.mxPage<1 ){
    FUNC_2("empty database\n");
    return;
  }


  VAR_3 = FUNC_1(0, 100);
  if( VAR_3[55]==0 ){
    FUNC_2("database does not use PTRMAP pages\n");
    return;
  }
  VAR_5 = VAR_0.pagesize - VAR_3[20];
  VAR_6 = VAR_5/5;
  FUNC_3(VAR_3);
  FUNC_2("%5d: root of sqlite_master\n", 1);
  for(VAR_2=2; VAR_2<=VAR_0.mxPage; VAR_2 += VAR_6+1){
    FUNC_2("%5d: PTRMAP page covering %d..%d\n", VAR_2,
           VAR_2+1, VAR_2+VAR_6);
    VAR_4 = FUNC_1((VAR_2-1)*VAR_0.pagesize, VAR_5);
    for(VAR_7=0; VAR_7+5<=VAR_5 && VAR_2+1+VAR_7/5<=VAR_0.mxPage; VAR_7+=5){
      const char *VAR_8 = "???";
      unsigned int VAR_9 = FUNC_0(&VAR_4[VAR_7+1]);
      switch( VAR_4[VAR_7] ){
        case 1: VAR_8 = "b-tree root page"; break;
        case 2: VAR_8 = "freelist page"; break;
        case 3: VAR_8 = "first page of overflow"; break;
        case 4: VAR_8 = "later page of overflow"; break;
        case 5: VAR_8 = "b-tree non-root page"; break;
      }
      FUNC_2("%5d: %s, parent=%u\n", VAR_2+1+VAR_7/5, VAR_8, VAR_9);
    }
    FUNC_3(VAR_4);
  }
}
