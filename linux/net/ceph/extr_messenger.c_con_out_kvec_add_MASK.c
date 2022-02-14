
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ceph_connection {int out_kvec_left; int out_skip; size_t out_kvec_bytes; TYPE_1__* out_kvec; } ;
struct TYPE_2__ {size_t iov_len; void* iov_base; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct ceph_connection *VAR_0,
    size_t VAR_1, void *VAR_2)
{
 int VAR_3 = VAR_0->out_kvec_left;

 FUNC_1(VAR_0->out_skip);
 FUNC_1(VAR_3 >= FUNC_0(VAR_0->out_kvec));

 VAR_0->out_kvec[VAR_3].iov_len = VAR_1;
 VAR_0->out_kvec[VAR_3].iov_base = VAR_2;
 VAR_0->out_kvec_left++;
 VAR_0->out_kvec_bytes += VAR_1;
}
