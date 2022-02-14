
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int table; TYPE_1__* pTabSchema; } ;
typedef TYPE_2__ Trigger ;
typedef int Table ;
struct TYPE_4__ {int tblHash; } ;


 int * FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static Table *FUNC_2(Trigger *VAR_0){
  int VAR_1 = FUNC_1(VAR_0->table);
  return FUNC_0(&VAR_0->pTabSchema->tblHash, VAR_0->table, VAR_1);
}
