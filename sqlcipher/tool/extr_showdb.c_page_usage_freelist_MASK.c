
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mxPage; int pagesize; } ;


 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (int,int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (int,char*,int,int) ;
 int FUNC_3 (unsigned char*) ;

__attribute__((used)) static void FUNC_4(int VAR_1){
  unsigned char *VAR_2;
  int VAR_3 = 0;
  int VAR_4;
  int VAR_5;
  int VAR_6;
  int VAR_7 = 1;

  while( VAR_1>0 && VAR_1<=VAR_0.mxPage && (VAR_3++)<VAR_0.mxPage ){
    FUNC_2(VAR_1, "freelist trunk #%d child of %d", VAR_3, VAR_7);
    VAR_2 = FUNC_1((VAR_1-1)*VAR_0.pagesize, VAR_0.pagesize);
    VAR_6 = FUNC_0(VAR_2);
    VAR_5 = FUNC_0(VAR_2+4);
    for(VAR_4=0; VAR_4<VAR_5; VAR_4++){
      int VAR_8 = FUNC_0(VAR_2 + (VAR_4*4+8));
      FUNC_2(VAR_8, "freelist leaf, child %d of trunk page %d",
                     VAR_4, VAR_1);
    }
    FUNC_3(VAR_2);
    VAR_7 = VAR_1;
    VAR_1 = VAR_6;
  }
}
