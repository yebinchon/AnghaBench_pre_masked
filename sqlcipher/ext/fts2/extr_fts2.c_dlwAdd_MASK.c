
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ sqlite_int64 ;
struct TYPE_3__ {scalar_t__ iPrevDocid; int has_iPrevDocid; scalar_t__ iType; int b; } ;
typedef TYPE_1__ DLWriter ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (char*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(DLWriter *VAR_2, sqlite_int64 VAR_3){
  char VAR_4[VAR_1];
  int VAR_5 = FUNC_2(VAR_4, VAR_3-VAR_2->iPrevDocid);


  FUNC_0( !VAR_2->has_iPrevDocid || VAR_3>VAR_2->iPrevDocid );
  FUNC_0( VAR_2->iType==VAR_0 );

  FUNC_1(VAR_2->b, VAR_4, VAR_5);
  VAR_2->iPrevDocid = VAR_3;

  VAR_2->has_iPrevDocid = 1;

}
