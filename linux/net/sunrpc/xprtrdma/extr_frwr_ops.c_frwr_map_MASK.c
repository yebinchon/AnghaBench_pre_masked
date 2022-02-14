
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u64 ;
struct rpcrdma_ia {int ri_max_frwr_depth; scalar_t__ ri_mrtype; TYPE_1__* ri_id; } ;
struct rpcrdma_xprt {struct rpcrdma_ia rx_ia; } ;
struct rpcrdma_mr_seg {scalar_t__ mr_len; scalar_t__ mr_offset; int mr_page; } ;
struct ib_reg_wr {int key; int access; struct ib_mr* mr; } ;
struct TYPE_4__ {struct ib_reg_wr fr_regwr; struct ib_mr* fr_mr; } ;
struct rpcrdma_mr {int mr_nents; int mr_handle; int mr_offset; int mr_dir; int mr_length; TYPE_2__ frwr; int * mr_sg; } ;
struct ib_mr {int iova; int rkey; int length; } ;
typedef int __be32 ;
struct TYPE_3__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct rpcrdma_mr_seg* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int,int ) ;
 int FUNC_3 (struct ib_mr*,int *,int,int *,int ) ;
 int FUNC_4 (struct ib_mr*,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *,scalar_t__,scalar_t__) ;
 int FUNC_8 (int *,int ,scalar_t__,scalar_t__) ;
 int FUNC_9 (struct rpcrdma_mr*,int) ;
 int FUNC_10 (struct rpcrdma_mr*,int) ;
 int FUNC_11 (struct rpcrdma_mr*) ;
 scalar_t__ FUNC_12 (int) ;

struct rpcrdma_mr_seg *FUNC_13(struct rpcrdma_xprt *VAR_7,
    struct rpcrdma_mr_seg *VAR_8,
    int VAR_9, bool VAR_10, __be32 VAR_11,
    struct rpcrdma_mr *VAR_12)
{
 struct rpcrdma_ia *VAR_13 = &VAR_7->rx_ia;
 struct ib_reg_wr *VAR_14;
 struct ib_mr *VAR_15;
 int VAR_16, VAR_17;
 u8 VAR_18;

 if (VAR_9 > VAR_13->ri_max_frwr_depth)
  VAR_9 = VAR_13->ri_max_frwr_depth;
 for (VAR_16 = 0; VAR_16 < VAR_9;) {
  if (VAR_8->mr_page)
   FUNC_8(&VAR_12->mr_sg[VAR_16],
        VAR_8->mr_page,
        VAR_8->mr_len,
        FUNC_5(VAR_8->mr_offset));
  else
   FUNC_7(&VAR_12->mr_sg[VAR_16], VAR_8->mr_offset,
       VAR_8->mr_len);

  ++VAR_8;
  ++VAR_16;
  if (VAR_13->ri_mrtype == VAR_5)
   continue;
  if ((VAR_16 < VAR_9 && FUNC_5(VAR_8->mr_offset)) ||
      FUNC_5((VAR_8-1)->mr_offset + (VAR_8-1)->mr_len))
   break;
 }
 VAR_12->mr_dir = FUNC_6(VAR_10);

 VAR_12->mr_nents =
  FUNC_2(VAR_13->ri_id->device, VAR_12->mr_sg, VAR_16, VAR_12->mr_dir);
 if (!VAR_12->mr_nents)
  goto out_dmamap_err;

 VAR_15 = VAR_12->frwr.fr_mr;
 VAR_17 = FUNC_3(VAR_15, VAR_12->mr_sg, VAR_12->mr_nents, ((void*)0), VAR_6);
 if (FUNC_12(VAR_17 != VAR_12->mr_nents))
  goto out_mapmr_err;

 VAR_15->iova &= 0x00000000ffffffff;
 VAR_15->iova |= ((u64)FUNC_1(VAR_11)) << 32;
 VAR_18 = (u8)(VAR_15->rkey & 0x000000FF);
 FUNC_4(VAR_15, ++VAR_18);

 VAR_14 = &VAR_12->frwr.fr_regwr;
 VAR_14->mr = VAR_15;
 VAR_14->key = VAR_15->rkey;
 VAR_14->access = VAR_10 ?
    VAR_4 | VAR_2 :
    VAR_3;

 VAR_12->mr_handle = VAR_15->rkey;
 VAR_12->mr_length = VAR_15->length;
 VAR_12->mr_offset = VAR_15->iova;
 FUNC_11(VAR_12);

 return VAR_8;

out_dmamap_err:
 VAR_12->mr_dir = VAR_0;
 FUNC_10(VAR_12, VAR_16);
 return FUNC_0(-VAR_1);

out_mapmr_err:
 FUNC_9(VAR_12, VAR_17);
 return FUNC_0(-VAR_1);
}
