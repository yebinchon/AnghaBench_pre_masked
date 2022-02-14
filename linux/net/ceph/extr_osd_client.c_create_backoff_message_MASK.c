
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ceph_osd_backoff {int end; int begin; int id; int spgid; } ;
struct TYPE_4__ {void* iov_base; int iov_len; } ;
struct TYPE_3__ {int front_len; int version; } ;
struct ceph_msg {int front_alloc_len; TYPE_2__ front; TYPE_1__ hdr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (void**,int ) ;
 int FUNC_2 (void**,int ) ;
 int FUNC_3 (void**,int ) ;
 struct ceph_msg* FUNC_4 (int ,int,int ,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (void**,void*,int ) ;
 int FUNC_8 (void**,int *) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static struct ceph_msg *FUNC_10(
    const struct ceph_osd_backoff *VAR_5,
    u32 VAR_6)
{
 struct ceph_msg *VAR_7;
 void *VAR_8, *VAR_9;
 int VAR_10;

 VAR_10 = VAR_0 +
   VAR_3 + 1;
 VAR_10 += 4 + 1 + 8;
 VAR_10 += VAR_0 +
   FUNC_9(VAR_5->begin);
 VAR_10 += VAR_0 +
   FUNC_9(VAR_5->end);

 VAR_7 = FUNC_4(VAR_1, VAR_10, VAR_4, 1);
 if (!VAR_7)
  return ((void*)0);

 VAR_8 = VAR_7->front.iov_base;
 VAR_9 = VAR_8 + VAR_7->front_alloc_len;

 FUNC_8(&VAR_8, &VAR_5->spgid);
 FUNC_1(&VAR_8, VAR_6);
 FUNC_3(&VAR_8, VAR_2);
 FUNC_2(&VAR_8, VAR_5->id);
 FUNC_7(&VAR_8, VAR_9, VAR_5->begin);
 FUNC_7(&VAR_8, VAR_9, VAR_5->end);
 FUNC_0(VAR_8 != VAR_9);

 VAR_7->front.iov_len = VAR_8 - VAR_7->front.iov_base;
 VAR_7->hdr.version = FUNC_5(1);
 VAR_7->hdr.front_len = FUNC_6(VAR_7->front.iov_len);

 return VAR_7;
}
