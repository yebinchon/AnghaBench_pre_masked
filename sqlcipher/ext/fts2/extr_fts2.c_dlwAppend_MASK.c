
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ sqlite_int64 ;
struct TYPE_3__ {scalar_t__ iType; scalar_t__ iPrevDocid; int b; } ;
typedef TYPE_1__ DLWriter ;


 int FUNC_0 (scalar_t__,char const*,int,scalar_t__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*,int,char const*,int) ;
 int FUNC_4 (char const*,scalar_t__*) ;
 int FUNC_5 (char*,scalar_t__) ;

__attribute__((used)) static void FUNC_6(DLWriter *VAR_2,
                      const char *VAR_3, int VAR_4,
                      sqlite_int64 VAR_5, sqlite_int64 VAR_6){
  sqlite_int64 VAR_7 = 0;
  char VAR_8[VAR_1];
  int VAR_9, VAR_10;

  sqlite_int64 VAR_11;



  VAR_9 = FUNC_4(VAR_3, &VAR_7);
  FUNC_1( VAR_9<VAR_4 || (VAR_9==VAR_4 && VAR_2->iType==VAR_0) );
  VAR_10 = FUNC_5(VAR_8, VAR_5-VAR_2->iPrevDocid);





  FUNC_0(VAR_2->iType, VAR_3, VAR_4, &VAR_11);
  FUNC_1( VAR_6==VAR_5-VAR_7+VAR_11 );




  if( VAR_9<VAR_4 ){
    FUNC_3(VAR_2->b, VAR_8, VAR_10,
                      VAR_3+VAR_9, VAR_4-VAR_9);
  }else{
    FUNC_2(VAR_2->b, VAR_8, VAR_10);
  }
  VAR_2->iPrevDocid = VAR_6;
}
