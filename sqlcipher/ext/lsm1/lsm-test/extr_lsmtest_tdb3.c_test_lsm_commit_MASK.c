
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int TestDb ;
struct TYPE_2__ {int db; scalar_t__ pCsr; } ;
typedef TYPE_1__ LsmDb ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(TestDb *VAR_0, int VAR_1){
  LsmDb *VAR_2 = (LsmDb *)VAR_0;


  if( VAR_1==0 && VAR_2->pCsr ){
    FUNC_2(VAR_2->pCsr);
    VAR_2->pCsr = 0;
  }


  return FUNC_1(VAR_2->db, FUNC_0(0, VAR_1-1));
}
