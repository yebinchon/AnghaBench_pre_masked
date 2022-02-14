
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ndx; scalar_t__ written; scalar_t__ len; int * fullBlkCB; int fout; int crc; int * block; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int,int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 (int ,int,int ) ;

int FUNC_4 (void) {
  int VAR_3 = (VAR_2->ndx % VAR_1) ? VAR_2->ndx % VAR_1 :
                                           VAR_1;
  if (FUNC_2(VAR_2->block[0], 1, VAR_3, VAR_2->fout) != VAR_3)
    FUNC_0(VAR_0);

  VAR_2->crc = FUNC_3(VAR_2->block[0], VAR_3, VAR_2->crc);

  VAR_2->written += VAR_3;
  if (VAR_2->written == VAR_2->len) {
    FUNC_1(VAR_2->fout);
    VAR_2->fullBlkCB = ((void*)0);
  }
  return 1;
}
