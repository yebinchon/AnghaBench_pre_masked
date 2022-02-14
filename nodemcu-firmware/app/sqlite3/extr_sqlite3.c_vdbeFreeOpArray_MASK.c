
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_5__ {int p; } ;
struct TYPE_6__ {int zComment; TYPE_1__ p4; scalar_t__ p4type; } ;
typedef TYPE_2__ Op ;


 int FUNC_0 (int *,scalar_t__,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(sqlite3 *VAR_0, Op *VAR_1, int VAR_2){
  if( VAR_1 ){
    Op *VAR_3;
    for(VAR_3=&VAR_1[VAR_2-1]; VAR_3>=VAR_1; VAR_3--){
      if( VAR_3->p4type ) FUNC_0(VAR_0, VAR_3->p4type, VAR_3->p4.p);



    }
    FUNC_2(VAR_0, VAR_1);
  }
}
