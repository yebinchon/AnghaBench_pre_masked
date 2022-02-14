
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u64 ;
struct ceph_osd_request {int dummy; } ;
struct TYPE_2__ {void* expected_write_size; void* expected_object_size; } ;
struct ceph_osd_req_op {int flags; TYPE_1__ alloc_hint; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ceph_osd_req_op* FUNC_0 (struct ceph_osd_request*,unsigned int,int ,int ) ;

void FUNC_1(struct ceph_osd_request *VAR_2,
    unsigned int VAR_3,
    u64 VAR_4,
    u64 VAR_5)
{
 struct ceph_osd_req_op *VAR_6 = FUNC_0(VAR_2, VAR_3,
            VAR_1,
            0);

 VAR_6->alloc_hint.expected_object_size = VAR_4;
 VAR_6->alloc_hint.expected_write_size = VAR_5;






 VAR_6->flags |= VAR_0;
}
