
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char pagesize; int mxPage; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int,char*,int,int) ;

__attribute__((used)) static void FUNC_1(unsigned char *VAR_1){
  if( VAR_1[55] ){
    int VAR_2 = VAR_0.pagesize - VAR_1[20];
    int VAR_3 = 2;
    int VAR_4 = VAR_2/5;
    while( VAR_3<=VAR_0.mxPage ){
      FUNC_0(VAR_3, "PTRMAP page covering %d..%d",
                           VAR_3+1, VAR_3+VAR_4);
      VAR_3 += VAR_4 + 1;
    }
  }
}
