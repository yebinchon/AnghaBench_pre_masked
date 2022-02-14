
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zLine ;
typedef int zBuf ;
struct TYPE_2__ {int zPrefix; int zIdx; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char*,int,int *) ;
 int * FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (char const*,char*,int) ;
 int FUNC_6 (char*,int ,int) ;
 int FUNC_7 (int ,char*) ;
 char* FUNC_8 (char*,int ,char*) ;
 scalar_t__ FUNC_9 (char) ;
 TYPE_1__ VAR_2 ;
 int FUNC_10 (char const*) ;

__attribute__((used)) static char *FUNC_11(const char *VAR_3){
  char *VAR_4 = 0;
  FILE *VAR_5 = 0;


  VAR_5 = FUNC_4(VAR_2.zIdx, "r");
  if( VAR_5==0 ){
    FUNC_7(VAR_0, "sqllogFindFile(): error in fopen()");
    return 0;
  }




  while( FUNC_1(VAR_5)==0 ){
    char VAR_6[VAR_1*2+5];
    if( FUNC_3(VAR_6, sizeof(VAR_6), VAR_5) ){
      int VAR_7;
      char *VAR_8;

      VAR_6[sizeof(VAR_6)-1] = '\0';
      VAR_8 = VAR_6;
      while( *VAR_8>='0' && *VAR_8<='9' ) VAR_8++;
      while( *VAR_8==' ' ) VAR_8++;

      VAR_7 = FUNC_10(VAR_8);
      while( VAR_7>0 && FUNC_9(VAR_8[VAR_7-1]) ) VAR_7--;

      if( VAR_7==FUNC_10(VAR_3) && 0==FUNC_5(VAR_3, VAR_8, VAR_7) ){
        char VAR_9[16];
        FUNC_6(VAR_9, 0, sizeof(VAR_9));
        VAR_8 = VAR_6;
        while( *VAR_8>='0' && *VAR_8<='9' ){
          VAR_9[VAR_8-VAR_6] = *VAR_8;
          VAR_8++;
        }
        VAR_4 = FUNC_8("%s_%s.db", VAR_2.zPrefix, VAR_9);
        break;
      }
    }
  }

  if( FUNC_2(VAR_5) ){
    FUNC_7(VAR_0, "sqllogFindFile(): error reading index file");
  }

  FUNC_0(VAR_5);
  return VAR_4;
}
