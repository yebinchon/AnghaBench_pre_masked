
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {scalar_t__ eState; } ;
typedef TYPE_1__ BtCursor ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int ,void*,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int ,void*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;

int FUNC_4(BtCursor *VAR_1, u32 VAR_2, u32 VAR_3, void *VAR_4){
  if( VAR_1->eState==VAR_0 ){
    FUNC_2( FUNC_3(VAR_1) );
    return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, 0);
  }else{
    return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
  }
}
