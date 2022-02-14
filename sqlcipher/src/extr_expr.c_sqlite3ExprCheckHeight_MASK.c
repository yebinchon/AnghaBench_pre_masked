
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* db; } ;
struct TYPE_5__ {int* aLimit; } ;
typedef TYPE_2__ Parse ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,char*,int) ;

int FUNC_1(Parse *VAR_3, int VAR_4){
  int VAR_5 = VAR_2;
  int VAR_6 = VAR_3->db->aLimit[VAR_1];
  if( VAR_4>VAR_6 ){
    FUNC_0(VAR_3,
       "Expression tree is too large (maximum depth %d)", VAR_6
    );
    VAR_5 = VAR_0;
  }
  return VAR_5;
}
