
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_2__ {scalar_t__ bConditional; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int *,char*,int ,char*) ;
 TYPE_1__ VAR_4 ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(sqlite3 *VAR_5){
  int VAR_6 = 1;
  if( VAR_4.bConditional ){
    char VAR_7[VAR_3];
    int VAR_8 = FUNC_3(VAR_5, "main", 0, VAR_7);
    if( VAR_8==VAR_2 ){
      int VAR_9 = FUNC_4(VAR_7);
      if( (VAR_3-VAR_9)<8 ){
        FUNC_2(VAR_1,
            "sqllogTraceDb(): database name too long (%d bytes)", VAR_9
        );
        VAR_6 = 0;
      }else{
        FUNC_1(&VAR_7[VAR_9], "-sqllog", 8);
        VAR_6 = !FUNC_0(VAR_7, VAR_0);
      }
    }
  }
  return VAR_6;
}
