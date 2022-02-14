
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_connection {int * out_kvec; int * out_kvec_cur; scalar_t__ out_kvec_bytes; scalar_t__ out_kvec_left; int out_skip; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct ceph_connection *VAR_0)
{
 FUNC_0(VAR_0->out_skip);

 VAR_0->out_kvec_left = 0;
 VAR_0->out_kvec_bytes = 0;
 VAR_0->out_kvec_cur = &VAR_0->out_kvec[0];
}
