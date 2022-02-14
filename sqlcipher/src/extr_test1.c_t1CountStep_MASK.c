
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int n; } ;
typedef TYPE_1__ t1CountCtx ;
typedef int sqlite3_value ;
typedef int sqlite3_context ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char const*,int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(
  sqlite3_context *VAR_2,
  int VAR_3,
  sqlite3_value **VAR_4
){
  t1CountCtx *VAR_5;
  VAR_5 = FUNC_0(VAR_2, sizeof(*VAR_5));
  if( (VAR_3==0 || VAR_1!=FUNC_4(VAR_4[0]) ) && VAR_5 ){
    VAR_5->n++;
  }
  if( VAR_3>0 ){
    int VAR_6 = FUNC_3(VAR_4[0]);
    if( VAR_6==40 ){
      FUNC_1(VAR_2, "value of 40 handed to x_count", -1);

    }else if( VAR_6==41 ){
      const char VAR_7[] = { 0, 0x61, 0, 0x62, 0, 0x63, 0, 0, 0};
      FUNC_2(VAR_2, &VAR_7[1-VAR_0], -1);

    }
  }
}
