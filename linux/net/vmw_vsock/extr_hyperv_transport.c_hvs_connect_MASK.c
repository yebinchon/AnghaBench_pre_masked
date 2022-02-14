
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union hvs_service_id {void* srv_id; int svm_port; } ;
struct TYPE_3__ {int svm_port; } ;
struct TYPE_4__ {int svm_port; } ;
struct vsock_sock {TYPE_1__ remote_addr; TYPE_2__ local_addr; struct hvsock* trans; } ;
struct hvsock {void* host_srv_id; void* vm_srv_id; } ;


 void* VAR_0 ;
 int FUNC_0 (void**,void**) ;

__attribute__((used)) static int FUNC_1(struct vsock_sock *VAR_1)
{
 union hvs_service_id VAR_2, VAR_3;
 struct hvsock *VAR_4 = VAR_1->trans;

 VAR_2.srv_id = VAR_0;
 VAR_2.svm_port = VAR_1->local_addr.svm_port;
 VAR_4->vm_srv_id = VAR_2.srv_id;

 VAR_3.srv_id = VAR_0;
 VAR_3.svm_port = VAR_1->remote_addr.svm_port;
 VAR_4->host_srv_id = VAR_3.srv_id;

 return FUNC_0(&VAR_4->vm_srv_id, &VAR_4->host_srv_id);
}
