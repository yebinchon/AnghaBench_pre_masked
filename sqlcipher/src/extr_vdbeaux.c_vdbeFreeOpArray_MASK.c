
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_5__ {int p; } ;
struct TYPE_6__ {scalar_t__ p4type; int zComment; TYPE_1__ p4; } ;
typedef TYPE_2__ Op ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,scalar_t__,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(sqlite3 *VAR_1, Op *VAR_2, int VAR_3){
  if( VAR_2 ){
    Op *VAR_4;
    for(VAR_4=&VAR_2[VAR_3-1]; VAR_4>=VAR_2; VAR_4--){
      if( VAR_4->p4type <= VAR_0 ) FUNC_0(VAR_1, VAR_4->p4type, VAR_4->p4.p);



    }
    FUNC_2(VAR_1, VAR_2);
  }
}
