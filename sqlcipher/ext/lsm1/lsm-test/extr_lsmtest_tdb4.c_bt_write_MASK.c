
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int TestDb ;
struct TYPE_4__ {int pBt; scalar_t__ bFastInsert; } ;
typedef TYPE_1__ BtDb ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int,int*) ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,void*,int,void*,int) ;

__attribute__((used)) static int FUNC_4(TestDb *VAR_2, void *VAR_3, int VAR_4, void *VAR_5, int VAR_6){
  BtDb *VAR_7 = (BtDb*)VAR_2;
  int VAR_8;
  int VAR_9;

  VAR_9 = FUNC_0(VAR_7, 2, &VAR_8);
  if( VAR_9==VAR_1 ){
    if( VAR_7->bFastInsert ) FUNC_2(VAR_7->pBt, VAR_0, 0);
    VAR_9 = FUNC_3(VAR_7->pBt, VAR_3, VAR_4, VAR_5, VAR_6);
    VAR_9 = FUNC_1(VAR_7, VAR_8, VAR_9);
  }
  return VAR_9;
}
