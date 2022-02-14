
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {int iov_len; void* iov_base; } ;
struct ceph_msg {TYPE_1__ front; } ;
struct TYPE_4__ {int shard; int pgid; } ;
struct MOSDBackoff {void* end; void* begin; int id; int op; int map_epoch; TYPE_2__ spgid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void**,void* const,int ,int ) ;
 int FUNC_1 (void**,void* const,int ,int ) ;
 int FUNC_2 (void**,void* const,int ,int ) ;
 int FUNC_3 (void**,void* const,int *) ;
 int FUNC_4 (void**,void* const,int,char*,int *,int *) ;
 int FUNC_5 (void**,void* const,void*) ;
 int VAR_3 ;
 int FUNC_6 (void*) ;
 void* FUNC_7 (int,int ) ;

__attribute__((used)) static int FUNC_8(const struct ceph_msg *VAR_4, struct MOSDBackoff *VAR_5)
{
 void *VAR_6 = VAR_4->front.iov_base;
 void *const VAR_7 = VAR_6 + VAR_4->front.iov_len;
 u8 VAR_8;
 u32 VAR_9;
 int VAR_10;

 VAR_10 = FUNC_4(&VAR_6, VAR_7, 1, "spg_t", &VAR_8, &VAR_9);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_3(&VAR_6, VAR_7, &VAR_5->spgid.pgid);
 if (VAR_10)
  return VAR_10;

 FUNC_2(&VAR_6, VAR_7, VAR_5->spgid.shard, VAR_3);
 FUNC_0(&VAR_6, VAR_7, VAR_5->map_epoch, VAR_3);
 FUNC_2(&VAR_6, VAR_7, VAR_5->op, VAR_3);
 FUNC_1(&VAR_6, VAR_7, VAR_5->id, VAR_3);

 VAR_5->begin = FUNC_7(sizeof(*VAR_5->begin), VAR_2);
 if (!VAR_5->begin)
  return -VAR_1;

 VAR_10 = FUNC_5(&VAR_6, VAR_7, VAR_5->begin);
 if (VAR_10) {
  FUNC_6(VAR_5->begin);
  return VAR_10;
 }

 VAR_5->end = FUNC_7(sizeof(*VAR_5->end), VAR_2);
 if (!VAR_5->end) {
  FUNC_6(VAR_5->begin);
  return -VAR_1;
 }

 VAR_10 = FUNC_5(&VAR_6, VAR_7, VAR_5->end);
 if (VAR_10) {
  FUNC_6(VAR_5->begin);
  FUNC_6(VAR_5->end);
  return VAR_10;
 }

 return 0;

e_inval:
 return -VAR_0;
}
