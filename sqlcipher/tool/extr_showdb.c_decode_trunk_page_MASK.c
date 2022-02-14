
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pagesize; } ;


 unsigned int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (int,int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (unsigned char*,int,int,char*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (unsigned char*) ;

__attribute__((used)) static void FUNC_6(
  int VAR_1,
  int VAR_2,
  int VAR_3
){
  int VAR_4, VAR_5;
  unsigned char *VAR_6;
  while( VAR_1>0 ){
    VAR_6 = FUNC_1((VAR_1-1)*VAR_0.pagesize, VAR_0.pagesize);
    FUNC_3("Decode of freelist trunk page %d:\n", VAR_1);
    FUNC_2(VAR_6, 0, 4, "Next freelist trunk page");
    FUNC_2(VAR_6, 4, 4, "Number of entries on this page");
    if( VAR_2 ){
      VAR_4 = (int)FUNC_0(&VAR_6[4]);
      for(VAR_5=0; VAR_5<VAR_4; VAR_5++){
        unsigned int VAR_7 = FUNC_0(&VAR_6[8+4*VAR_5]);
        char VAR_8[10];
        FUNC_4(VAR_8, "[%d]", VAR_5);
        FUNC_3("  %5s %7u", VAR_8, VAR_7);
        if( VAR_5%5==4 ) FUNC_3("\n");
      }
      if( VAR_5%5!=0 ) FUNC_3("\n");
    }
    if( !VAR_3 ){
      VAR_1 = 0;
    }else{
      VAR_1 = (int)FUNC_0(&VAR_6[0]);
    }
    FUNC_5(VAR_6);
  }
}
