
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sort; int cmp; int sort_list; int list; } ;
struct block_hist {int valid; TYPE_1__ block_fmt; int block_list; int block_hists; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(struct block_hist *VAR_2)
{
 FUNC_1(&VAR_2->block_hists, &VAR_2->block_list);
 FUNC_2(&VAR_2->block_list);

 FUNC_0(&VAR_2->block_fmt.list);
 FUNC_0(&VAR_2->block_fmt.sort_list);
 VAR_2->block_fmt.cmp = VAR_0;
 VAR_2->block_fmt.sort = VAR_1;
 FUNC_3(&VAR_2->block_list,
        &VAR_2->block_fmt);
 VAR_2->valid = 1;
}
