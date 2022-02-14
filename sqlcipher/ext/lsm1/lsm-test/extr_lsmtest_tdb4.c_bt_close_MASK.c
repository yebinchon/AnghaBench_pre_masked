
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int TestDb ;
struct TYPE_6__ {TYPE_1__** apFile; int aBuffer; int pBt; } ;
struct TYPE_5__ {scalar_t__ pBt; } ;
typedef TYPE_2__ BtDb ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(TestDb *VAR_0){
  BtDb *VAR_1 = (BtDb*)VAR_0;
  int VAR_2 = FUNC_2(VAR_1->pBt);
  FUNC_1(VAR_1->aBuffer);
  if( VAR_1->apFile[0] ) VAR_1->apFile[0]->pBt = 0;
  if( VAR_1->apFile[1] ) VAR_1->apFile[1]->pBt = 0;
  FUNC_0(VAR_1);
  FUNC_3(VAR_1);
  return VAR_2;
}
