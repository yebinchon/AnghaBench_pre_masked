
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct mmpin {int dummy; } ;
struct TYPE_7__ {struct mmpin z_mmp; } ;
struct rds_msg_zcopy_info {TYPE_3__ znotif; int rs_zcookie_next; } ;
struct TYPE_8__ {int op_nents; TYPE_3__* op_mmp_znotifier; struct scatterlist* op_sg; } ;
struct TYPE_5__ {int h_len; } ;
struct TYPE_6__ {TYPE_1__ i_hdr; } ;
struct rds_message {TYPE_4__ data; TYPE_2__ m_inc; } ;
struct page {int dummy; } ;
struct iov_iter {int dummy; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct iov_iter*,scalar_t__) ;
 int FUNC_4 (struct iov_iter*) ;
 scalar_t__ FUNC_5 (struct iov_iter*,struct page**,int ,int,size_t*) ;
 int FUNC_6 (struct rds_msg_zcopy_info*) ;
 struct rds_msg_zcopy_info* FUNC_7 (int,int ) ;
 scalar_t__ FUNC_8 (struct mmpin*,int) ;
 int FUNC_9 (struct mmpin*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct scatterlist*) ;
 int FUNC_12 (struct scatterlist*,struct page*,scalar_t__,size_t) ;

__attribute__((used)) static int FUNC_13(struct rds_message *VAR_4, struct iov_iter *VAR_5)
{
 struct scatterlist *VAR_6;
 int VAR_7 = 0;
 int VAR_8 = FUNC_4(VAR_5);
 int VAR_9 = 0;
 struct rds_msg_zcopy_info *VAR_10;

 VAR_4->m_inc.i_hdr.h_len = FUNC_2(FUNC_4(VAR_5));




 VAR_6 = VAR_4->data.op_sg;

 VAR_10 = FUNC_7(sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;
 FUNC_0(&VAR_10->rs_zcookie_next);
 VAR_4->data.op_mmp_znotifier = &VAR_10->znotif;
 if (FUNC_8(&VAR_4->data.op_mmp_znotifier->z_mmp,
        VAR_8)) {
  VAR_7 = -VAR_1;
  goto err;
 }
 while (FUNC_4(VAR_5)) {
  struct page *VAR_11;
  size_t VAR_12;
  ssize_t VAR_13;

  VAR_13 = FUNC_5(VAR_5, &VAR_11, VAR_3,
         1, &VAR_12);
  if (VAR_13 < 0) {
   struct mmpin *VAR_14;
   int VAR_15;

   for (VAR_15 = 0; VAR_15 < VAR_4->data.op_nents; VAR_15++)
    FUNC_10(FUNC_11(&VAR_4->data.op_sg[VAR_15]));
   VAR_14 = &VAR_4->data.op_mmp_znotifier->z_mmp;
   FUNC_9(VAR_14);
   VAR_7 = -VAR_0;
   goto err;
  }
  VAR_9 += VAR_13;
  FUNC_3(VAR_5, VAR_13);
  VAR_8 -= VAR_13;
  FUNC_12(VAR_6, VAR_11, VAR_13, VAR_12);
  VAR_4->data.op_nents++;
  VAR_6++;
 }
 FUNC_1(VAR_8 != 0);
 return VAR_7;
err:
 FUNC_6(VAR_10);
 VAR_4->data.op_mmp_znotifier = ((void*)0);
 return VAR_7;
}
