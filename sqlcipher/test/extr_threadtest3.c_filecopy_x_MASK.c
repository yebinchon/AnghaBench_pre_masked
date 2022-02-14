
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ i64 ;
typedef int aBuf ;
struct TYPE_6__ {scalar_t__ rc; } ;
typedef TYPE_1__ Error ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (TYPE_1__*,char const*) ;
 int FUNC_2 (char const*,int,...) ;
 int FUNC_3 (int,char*,int) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (int,char*,int) ;

__attribute__((used)) static void FUNC_9(
  Error *VAR_6,
  const char *VAR_7,
  const char *VAR_8
){
  if( VAR_6->rc==VAR_4 ){
    i64 VAR_9 = FUNC_1(VAR_6, VAR_7);
    if( VAR_9<0 ){
      FUNC_6(VAR_6, FUNC_4("no such file: %s", VAR_7));
    }else{
      i64 VAR_10;
      char VAR_11[1024];
      int VAR_12;
      int VAR_13;
      FUNC_7(VAR_8);

      VAR_12 = FUNC_2(VAR_7, VAR_2);
      if( VAR_12<0 ){
        FUNC_5(VAR_6, VAR_5);
        return;
      }
      VAR_13 = FUNC_2(VAR_8, VAR_3|VAR_0|VAR_1, 0644);
      if( VAR_13<0 ){
        FUNC_5(VAR_6, VAR_5);
        FUNC_0(VAR_12);
        return;
      }

      VAR_10 = 0;
      while( VAR_10<VAR_9 ){
        int VAR_14 = sizeof(VAR_11);
        if( VAR_14+VAR_10>VAR_9 ){
          VAR_14 = VAR_9 - VAR_10;
        }
        if( VAR_14!=FUNC_3(VAR_12, VAR_11, VAR_14) ){
          FUNC_5(VAR_6, VAR_5);
          break;
        }
        if( VAR_14!=FUNC_8(VAR_13, VAR_11, VAR_14) ){
          FUNC_5(VAR_6, VAR_5);
          break;
        }
        VAR_10 += VAR_14;
      }

      FUNC_0(VAR_12);
      FUNC_0(VAR_13);
    }
  }
}
