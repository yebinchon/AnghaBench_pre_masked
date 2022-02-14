
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ceph_osd_op {int payload_len; } ;
struct TYPE_5__ {int version; } ;
struct TYPE_4__ {int iov_len; void* iov_base; } ;
struct ceph_msg {TYPE_2__ hdr; TYPE_1__ front; } ;
struct ceph_eversion {int version; } ;
struct TYPE_6__ {int oloc; } ;
struct MOSDOpReply {int result; int epoch; int num_ops; int retry_attempt; int* rval; TYPE_3__ redirect; struct ceph_eversion replay_version; int user_version; int * outdata_len; int flags; int pgid; } ;
typedef int bad_replay_version ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (void**,void* const,int,int ) ;
 int FUNC_2 (void**,void* const,int ,int ) ;
 int FUNC_3 (void**,void* const,int,int ) ;
 int FUNC_4 (void**,void* const,int,int ) ;
 int FUNC_5 (void**,void* const,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (void**,void* const,TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct ceph_eversion*,void*,int) ;

__attribute__((used)) static int FUNC_12(const struct ceph_msg *VAR_2, struct MOSDOpReply *VAR_3)
{
 void *VAR_4 = VAR_2->front.iov_base;
 void *const VAR_5 = VAR_4 + VAR_2->front.iov_len;
 u16 VAR_6 = FUNC_8(VAR_2->hdr.version);
 struct ceph_eversion VAR_7;
 u8 VAR_8;
 u32 VAR_9;
 int VAR_10;
 int VAR_11;

 FUNC_1(&VAR_4, VAR_5, VAR_9, VAR_1);
 FUNC_4(&VAR_4, VAR_5, VAR_9, VAR_1);
 VAR_4 += VAR_9;

 VAR_10 = FUNC_5(&VAR_4, VAR_5, &VAR_3->pgid);
 if (VAR_10)
  return VAR_10;

 FUNC_2(&VAR_4, VAR_5, VAR_3->flags, VAR_1);
 FUNC_1(&VAR_4, VAR_5, VAR_3->result, VAR_1);
 FUNC_4(&VAR_4, VAR_5, sizeof(VAR_7), VAR_1);
 FUNC_11(&VAR_7, VAR_4, sizeof(VAR_7));
 VAR_4 += sizeof(VAR_7);
 FUNC_1(&VAR_4, VAR_5, VAR_3->epoch, VAR_1);

 FUNC_1(&VAR_4, VAR_5, VAR_3->num_ops, VAR_1);
 if (VAR_3->num_ops > FUNC_0(VAR_3->outdata_len))
  goto e_inval;

 FUNC_4(&VAR_4, VAR_5, VAR_3->num_ops * sizeof(struct ceph_osd_op),
    VAR_1);
 for (VAR_11 = 0; VAR_11 < VAR_3->num_ops; VAR_11++) {
  struct ceph_osd_op *VAR_12 = VAR_4;

  VAR_3->outdata_len[VAR_11] = FUNC_9(VAR_12->payload_len);
  VAR_4 += sizeof(*VAR_12);
 }

 FUNC_1(&VAR_4, VAR_5, VAR_3->retry_attempt, VAR_1);
 for (VAR_11 = 0; VAR_11 < VAR_3->num_ops; VAR_11++)
  FUNC_1(&VAR_4, VAR_5, VAR_3->rval[VAR_11], VAR_1);

 if (VAR_6 >= 5) {
  FUNC_4(&VAR_4, VAR_5, sizeof(VAR_3->replay_version), VAR_1);
  FUNC_11(&VAR_3->replay_version, VAR_4, sizeof(VAR_3->replay_version));
  VAR_4 += sizeof(VAR_3->replay_version);
  FUNC_2(&VAR_4, VAR_5, VAR_3->user_version, VAR_1);
 } else {
  VAR_3->replay_version = VAR_7;
  VAR_3->user_version = FUNC_10(VAR_3->replay_version.version);
 }

 if (VAR_6 >= 6) {
  if (VAR_6 >= 7)
   FUNC_3(&VAR_4, VAR_5, VAR_8, VAR_1);
  else
   VAR_8 = 1;
 } else {
  VAR_8 = 0;
 }

 if (VAR_8) {
  VAR_10 = FUNC_7(&VAR_4, VAR_5, &VAR_3->redirect);
  if (VAR_10)
   return VAR_10;
 } else {
  FUNC_6(&VAR_3->redirect.oloc);
 }

 return 0;

e_inval:
 return -VAR_0;
}
