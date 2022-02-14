
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int * byte; } ;
typedef TYPE_1__ outBlock ;
struct TYPE_6__ {int ndx; int len; TYPE_1__** block; int (* fullBlkCB ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__**,TYPE_1__**,int) ;
 TYPE_2__* VAR_2 ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2 (uint8_t VAR_3) {
  int VAR_4 = VAR_2->ndx % VAR_1;

  VAR_2->block[0]->byte[VAR_4++] = VAR_3;
  VAR_2->ndx++;

  if (VAR_4 == VAR_1 || VAR_2->ndx == VAR_2->len) {
    if (VAR_2->fullBlkCB)
      VAR_2->fullBlkCB();

    outBlock *VAR_5 = VAR_2->block[VAR_0 - 1];
    FUNC_0(VAR_2->block+1, VAR_2->block, (VAR_0-1)*sizeof(void*));
    VAR_2->block[0] = VAR_5 ;
  }
}
