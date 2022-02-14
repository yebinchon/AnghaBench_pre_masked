
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_5__ {int p; } ;
struct TYPE_6__ {struct TYPE_6__* zComment; TYPE_1__ p4; int p4type; } ;
typedef TYPE_2__ Op ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(sqlite3 *VAR_0, Op *VAR_1, int VAR_2){
  if( VAR_1 ){
    Op *VAR_3;
    for(VAR_3=VAR_1; VAR_3<&VAR_1[VAR_2]; VAR_3++){
      FUNC_0(VAR_0, VAR_3->p4type, VAR_3->p4.p);



    }
  }
  FUNC_1(VAR_0, VAR_1);
}
