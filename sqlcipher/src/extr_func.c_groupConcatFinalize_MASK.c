
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_context ;
struct TYPE_4__ {scalar_t__ accError; } ;
typedef TYPE_1__ StrAccum ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int,int ) ;

__attribute__((used)) static void FUNC_5(sqlite3_context *VAR_3){
  StrAccum *VAR_4;
  VAR_4 = FUNC_1(VAR_3, 0);
  if( VAR_4 ){
    if( VAR_4->accError==VAR_1 ){
      FUNC_3(VAR_3);
    }else if( VAR_4->accError==VAR_0 ){
      FUNC_2(VAR_3);
    }else{
      FUNC_4(VAR_3, FUNC_0(VAR_4), -1,
                          VAR_2);
    }
  }
}
