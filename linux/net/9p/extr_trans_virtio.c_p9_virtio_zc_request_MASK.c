
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int sz ;
struct virtio_chan {int ring_bufs_avail; int lock; int vq; int * vc_wq; struct scatterlist* sg; } ;
struct scatterlist {int dummy; } ;
struct page {int dummy; } ;
struct TYPE_4__ {int * sdata; } ;
struct TYPE_3__ {int size; int * sdata; } ;
struct p9_req_t {scalar_t__ status; int wq; TYPE_2__ rc; TYPE_1__ tc; } ;
struct p9_client {struct virtio_chan* trans; } ;
struct iov_iter {int dummy; } ;
typedef int __le32 ;


 int FUNC_0 (struct scatterlist**) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct page**) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (struct virtio_chan*,struct page***,struct iov_iter*,int,size_t*,int*) ;
 int FUNC_9 (struct page**,int) ;
 int FUNC_10 (struct p9_req_t*) ;
 int FUNC_11 (struct scatterlist*,int,int ,int *,int) ;
 scalar_t__ FUNC_12 (struct scatterlist*,int,int ,struct page**,int,size_t,int) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *,unsigned long) ;
 int FUNC_15 (int ,struct scatterlist**,int,int,struct p9_req_t*,int ) ;
 int FUNC_16 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_17 (int ,int) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static int
FUNC_19(struct p9_client *VAR_11, struct p9_req_t *VAR_12,
       struct iov_iter *VAR_13, struct iov_iter *VAR_14,
       int VAR_15, int VAR_16, int VAR_17)
{
 int VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;
 unsigned long VAR_23;
 int VAR_24 = 0, VAR_25 = 0;
 struct page **VAR_26 = ((void*)0), **VAR_27 = ((void*)0);
 struct virtio_chan *VAR_28 = VAR_11->trans;
 struct scatterlist *VAR_29[4];
 size_t VAR_30;
 int VAR_31 = 0;
 int VAR_32 = 0;

 FUNC_7(VAR_4, "virtio request\n");

 if (VAR_14) {
  __le32 VAR_33;
  int VAR_34 = FUNC_8(VAR_28, &VAR_27, VAR_14,
         VAR_16, &VAR_30, &VAR_31);
  if (VAR_34 < 0) {
   VAR_20 = VAR_34;
   goto err_out;
  }
  VAR_25 = FUNC_2(VAR_34 + VAR_30, VAR_5);
  if (VAR_34 != VAR_16) {
   __le32 VAR_35 = FUNC_4(VAR_34);
   FUNC_6(&VAR_12->tc.sdata[VAR_12->tc.size - 4], &VAR_35, 4);
   VAR_16 = VAR_34;
  }




  VAR_33 = FUNC_4(VAR_12->tc.size + VAR_16);
  FUNC_6(&VAR_12->tc.sdata[0], &VAR_33, sizeof(VAR_33));
 } else if (VAR_13) {
  int VAR_36 = FUNC_8(VAR_28, &VAR_26, VAR_13,
         VAR_15, &VAR_30, &VAR_31);
  if (VAR_36 < 0) {
   VAR_20 = VAR_36;
   goto err_out;
  }
  VAR_24 = FUNC_2(VAR_36 + VAR_30, VAR_5);
  if (VAR_36 != VAR_15) {
   __le32 VAR_37 = FUNC_4(VAR_36);
   FUNC_6(&VAR_12->tc.sdata[VAR_12->tc.size - 4], &VAR_37, 4);
   VAR_15 = VAR_36;
  }
 }
 VAR_12->status = VAR_7;
req_retry_pinned:
 FUNC_13(&VAR_28->lock, VAR_23);

 VAR_21 = VAR_22 = 0;


 VAR_19 = FUNC_11(VAR_28->sg, 0,
      VAR_8, VAR_12->tc.sdata, VAR_12->tc.size);

 if (VAR_19)
  VAR_29[VAR_21++] = VAR_28->sg;

 if (VAR_27) {
  VAR_29[VAR_21++] = VAR_28->sg + VAR_19;
  VAR_19 += FUNC_12(VAR_28->sg, VAR_19, VAR_8,
          VAR_27, VAR_25, VAR_30, VAR_16);
 }
 VAR_18 = FUNC_11(VAR_28->sg, VAR_19,
     VAR_8, VAR_12->rc.sdata, VAR_17);
 if (VAR_18)
  VAR_29[VAR_21 + VAR_22++] = VAR_28->sg + VAR_19;

 if (VAR_26) {
  VAR_29[VAR_21 + VAR_22++] = VAR_28->sg + VAR_19 + VAR_18;
  VAR_18 += FUNC_12(VAR_28->sg, VAR_19 + VAR_18, VAR_8,
         VAR_26, VAR_24, VAR_30, VAR_15);
 }

 FUNC_1(VAR_21 + VAR_22 > FUNC_0(VAR_29));
 VAR_20 = FUNC_15(VAR_28->vq, VAR_29, VAR_21, VAR_22, VAR_12,
    VAR_3);
 if (VAR_20 < 0) {
  if (VAR_20 == -VAR_1) {
   VAR_28->ring_bufs_avail = 0;
   FUNC_14(&VAR_28->lock, VAR_23);
   VAR_20 = FUNC_17(*VAR_28->vc_wq,
        VAR_28->ring_bufs_avail);
   if (VAR_20 == -VAR_2)
    goto err_out;

   FUNC_7(VAR_4, "Retry virtio request\n");
   goto req_retry_pinned;
  } else {
   FUNC_14(&VAR_28->lock, VAR_23);
   FUNC_7(VAR_4,
     "virtio rpc add_sgs returned failure\n");
   VAR_20 = -VAR_0;
   goto err_out;
  }
 }
 FUNC_16(VAR_28->vq);
 FUNC_14(&VAR_28->lock, VAR_23);
 VAR_32 = 1;
 FUNC_7(VAR_4, "virtio request kicked\n");
 VAR_20 = FUNC_17(VAR_12->wq, VAR_12->status >= VAR_6);



err_out:
 if (VAR_31) {
  if (VAR_26) {
   FUNC_9(VAR_26, VAR_24);
   FUNC_3(VAR_24, &VAR_9);
  }
  if (VAR_27) {
   FUNC_9(VAR_27, VAR_25);
   FUNC_3(VAR_25, &VAR_9);
  }

  FUNC_18(&VAR_10);
 }
 FUNC_5(VAR_26);
 FUNC_5(VAR_27);
 if (!VAR_32) {

  FUNC_10(VAR_12);
 }
 return VAR_20;
}
