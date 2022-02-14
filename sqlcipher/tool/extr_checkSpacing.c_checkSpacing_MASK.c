
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zLine ;
typedef int FILE ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (char*,char const*,...) ;

__attribute__((used)) static void FUNC_4(const char *VAR_2, unsigned VAR_3){
  FILE *VAR_4 = FUNC_2(VAR_2, "rb");
  int VAR_5;
  int VAR_6;
  int VAR_7;
  int VAR_8 = 0;
  int VAR_9 = 0;
  char VAR_10[2000];
  if( VAR_4==0 ){
    FUNC_3("cannot open %s\n", VAR_2);
    return;
  }
  while( FUNC_1(VAR_10, sizeof(VAR_10), VAR_4) ){
    VAR_6 = 0;
    VAR_7 = 0;
    VAR_8++;
    for(VAR_5=0; VAR_10[VAR_5]; VAR_5++){
      if( VAR_10[VAR_5]=='\t' && VAR_7==0 ){
        FUNC_3("%s:%d: tab (\\t) character\n", VAR_2, VAR_8);
        VAR_7 = 1;
      }else if( VAR_10[VAR_5]=='\r' ){
        if( (VAR_3 & VAR_0)==0 ){
          FUNC_3("%s:%d: carriage-return (\\r) character\n", VAR_2, VAR_8);
        }
      }else if( VAR_10[VAR_5]==' ' ){
        VAR_6 = 1;
      }else if( VAR_10[VAR_5]!='\n' ){
        VAR_9 = VAR_8;
        VAR_6 = 0;
      }
    }
    if( VAR_6 && (VAR_3 & VAR_1)==0 ){
      FUNC_3("%s:%d: whitespace at end-of-line\n", VAR_2, VAR_8);
    }
  }
  FUNC_0(VAR_4);
  if( VAR_9<VAR_8 ){
    FUNC_3("%s:%d: blank lines at end of file (%d)\n",
        VAR_2, VAR_8, VAR_8 - VAR_9);
  }
}
