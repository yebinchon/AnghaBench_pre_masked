
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int pSchema; TYPE_3__* pIndex; } ;
typedef TYPE_1__ Table ;
struct TYPE_12__ {struct TYPE_12__* pNext; } ;
struct TYPE_11__ {int db; } ;
typedef TYPE_2__ Parse ;
typedef TYPE_3__ Index ;


 scalar_t__ FUNC_0 (char const*,TYPE_3__*) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*,int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(Parse *VAR_0, Table *VAR_1, char const *VAR_2){
  Index *VAR_3;

  for(VAR_3=VAR_1->pIndex; VAR_3; VAR_3=VAR_3->pNext){
    if( VAR_2==0 || FUNC_0(VAR_2, VAR_3) ){
      int VAR_4 = FUNC_3(VAR_0->db, VAR_1->pSchema);
      FUNC_1(VAR_0, 0, VAR_4);
      FUNC_2(VAR_0, VAR_3, -1);
    }
  }
}
