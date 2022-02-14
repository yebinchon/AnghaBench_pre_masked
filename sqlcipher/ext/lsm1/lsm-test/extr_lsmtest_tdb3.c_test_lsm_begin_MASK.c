
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int TestDb ;
struct TYPE_2__ {scalar_t__ pCsr; int db; } ;
typedef TYPE_1__ LsmDb ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_2(TestDb *VAR_1, int VAR_2){
  int VAR_3 = VAR_0;
  LsmDb *VAR_4 = (LsmDb *)VAR_1;


  if( VAR_2==0 ) return 0;

  if( VAR_4->pCsr==0 ) VAR_3 = FUNC_1(VAR_4->db, &VAR_4->pCsr);
  if( VAR_3==VAR_0 && VAR_2>1 ){
    VAR_3 = FUNC_0(VAR_4->db, VAR_2-1);
  }

  return VAR_3;
}
