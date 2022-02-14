
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; int blocks; } ;
typedef TYPE_1__ tsd_init_head_t ;
typedef int tsd_init_block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,int *,int ) ;

void
FUNC_3(tsd_init_head_t *VAR_2, tsd_init_block_t *VAR_3) {
 FUNC_0(VAR_0, &VAR_2->lock);
 FUNC_2(&VAR_2->blocks, VAR_3, VAR_1);
 FUNC_1(VAR_0, &VAR_2->lock);
}
