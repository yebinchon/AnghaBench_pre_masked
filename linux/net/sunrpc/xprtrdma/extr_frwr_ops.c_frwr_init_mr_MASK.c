
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct TYPE_2__ {int fr_linv_done; struct ib_mr* fr_mr; } ;
struct rpcrdma_mr {struct scatterlist* mr_sg; TYPE_1__ frwr; int mr_recycle; int mr_list; int mr_dir; } ;
struct rpcrdma_ia {unsigned int ri_max_frwr_depth; int ri_mrtype; int ri_pd; } ;
struct ib_mr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (struct ib_mr*) ;
 int FUNC_3 (struct ib_mr*) ;
 int VAR_3 ;
 struct ib_mr* FUNC_4 (int ,int ,unsigned int) ;
 int FUNC_5 (struct ib_mr*) ;
 int FUNC_6 (int *) ;
 struct scatterlist* FUNC_7 (unsigned int,int,int ) ;
 int FUNC_8 (struct scatterlist*,unsigned int) ;
 int FUNC_9 (struct rpcrdma_mr*,int) ;

int FUNC_10(struct rpcrdma_ia *VAR_4, struct rpcrdma_mr *VAR_5)
{
 unsigned int VAR_6 = VAR_4->ri_max_frwr_depth;
 struct scatterlist *VAR_7;
 struct ib_mr *VAR_8;
 int VAR_9;




 VAR_8 = FUNC_4(VAR_4->ri_pd, VAR_4->ri_mrtype, VAR_6);
 if (FUNC_2(VAR_8))
  goto out_mr_err;

 VAR_7 = FUNC_7(VAR_6, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  goto out_list_err;

 VAR_5->frwr.fr_mr = VAR_8;
 VAR_5->mr_dir = VAR_0;
 FUNC_0(&VAR_5->mr_list);
 FUNC_1(&VAR_5->mr_recycle, VAR_3);
 FUNC_6(&VAR_5->frwr.fr_linv_done);

 FUNC_8(VAR_7, VAR_6);
 VAR_5->mr_sg = VAR_7;
 return 0;

out_mr_err:
 VAR_9 = FUNC_3(VAR_8);
 FUNC_9(VAR_5, VAR_9);
 return VAR_9;

out_list_err:
 FUNC_5(VAR_8);
 return -VAR_1;
}
