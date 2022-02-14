
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* db; } ;
struct TYPE_7__ {int mutex; } ;
typedef TYPE_2__ Btree ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ) ;

int FUNC_5(Btree *VAR_4){
  int VAR_5;
  FUNC_0( FUNC_4(VAR_4->db->mutex) );
  FUNC_2(VAR_4);
  VAR_5 = FUNC_1(VAR_4, VAR_0, VAR_1);
  FUNC_0( VAR_5==VAR_3 || VAR_5==VAR_2 );
  FUNC_3(VAR_4);
  return VAR_5;
}
