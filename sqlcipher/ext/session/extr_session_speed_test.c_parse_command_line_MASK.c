
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* zText; int eType; size_t iOff; } ;
typedef TYPE_1__ CmdLineOption ;


 int VAR_0 ;



 int FUNC_0 (char const*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (char*,char const*,int) ;
 int VAR_1 ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (char const*,TYPE_1__*,char const*) ;

__attribute__((used)) static void FUNC_8(
  int VAR_2,
  char **VAR_3,
  int VAR_4,
  CmdLineOption *VAR_5,
  void *VAR_6,
  const char *VAR_7
){
  char *VAR_8 = (char*)VAR_6;
  int VAR_9 = 0;
  int VAR_10;

  for(VAR_10=VAR_4; VAR_10<VAR_2; VAR_10++){
    const char *VAR_11 = VAR_3[VAR_10];
    int VAR_12 = FUNC_6(VAR_11);
    int VAR_13 = 0;
    int VAR_14;

    for(VAR_14=0; VAR_5[VAR_14].zText; VAR_14++){
      CmdLineOption *VAR_15 = &VAR_5[VAR_14];
      if( 0==FUNC_5(VAR_15->zText, VAR_11, VAR_12) ){
        if( VAR_13 ){
          FUNC_0(VAR_11);
        }
        VAR_13++;
        if( VAR_15->eType==VAR_0 ){
          *(int*)(&VAR_8[VAR_15->iOff]) = 1;
        }else{
          VAR_10++;
          if( VAR_10==VAR_2 ){
            FUNC_4(VAR_15);
          }
          switch( VAR_15->eType ){
            case 129:
              *(int*)(&VAR_8[VAR_15->iOff]) = FUNC_3(VAR_15, VAR_3[VAR_10]);
              break;
            case 128:
              *(const char**)(&VAR_8[VAR_15->iOff]) = VAR_3[VAR_10];
              break;
            case 130:
              *(int*)(&VAR_8[VAR_15->iOff]) = FUNC_2(VAR_15, VAR_3[VAR_10]);
              break;
          }
        }
      }
    }

    if( VAR_13==0 && 0==FUNC_5("-cmdline:verbose", VAR_11, VAR_12) ){
      VAR_9 = 1;
      VAR_13 = 1;
    }

    if( VAR_13==0 ){
      FUNC_7(VAR_11, VAR_5, VAR_7);
    }
  }

  if( VAR_9 ){
    int VAR_16;
    FUNC_1(VAR_1, "Options are: ");
    for(VAR_16=0; VAR_5[VAR_16].zText; VAR_16++){
      CmdLineOption *VAR_17 = &VAR_5[VAR_16];
      if( VAR_17->eType!=VAR_0 || *(int*)(&VAR_8[VAR_17->iOff]) ){
        FUNC_1(VAR_1, "%s ", VAR_17->zText);
      }
      switch( VAR_17->eType ){
        case 129:
          FUNC_1(VAR_1, "%d ", *(int*)(&VAR_8[VAR_17->iOff]));
          break;
        case 130:
          FUNC_1(VAR_1, "%d ", *(int*)(&VAR_8[VAR_17->iOff]));
          break;
        case 128:
          FUNC_1(VAR_1, "%s ", *(const char**)(&VAR_8[VAR_17->iOff]));
          break;
      }
    }
    FUNC_1(VAR_1, "\n");
  }
}
