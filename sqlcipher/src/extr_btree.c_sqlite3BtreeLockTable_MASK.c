
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_7__ {scalar_t__ inTrans; scalar_t__ sharable; } ;
typedef TYPE_1__ Btree ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 int FUNC_2 (TYPE_1__*,int,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

int FUNC_5(Btree *VAR_4, int VAR_5, u8 VAR_6){
  int VAR_7 = VAR_1;
  FUNC_0( VAR_4->inTrans!=VAR_2 );
  if( VAR_4->sharable ){
    u8 VAR_8 = VAR_0 + VAR_6;
    FUNC_0( VAR_0+1==VAR_3 );
    FUNC_0( VAR_6==0 || VAR_6==1 );

    FUNC_3(VAR_4);
    VAR_7 = FUNC_1(VAR_4, VAR_5, VAR_8);
    if( VAR_7==VAR_1 ){
      VAR_7 = FUNC_2(VAR_4, VAR_5, VAR_8);
    }
    FUNC_4(VAR_4);
  }
  return VAR_7;
}
