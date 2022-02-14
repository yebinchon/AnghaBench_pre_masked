
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* authorizer_len; void* authorizer_protocol; } ;
struct ceph_connection {TYPE_1__ out_connect; struct ceph_auth_handshake* auth; int auth_retry; TYPE_2__* ops; } ;
struct ceph_auth_handshake {int authorizer_buf_len; } ;
struct TYPE_4__ {struct ceph_auth_handshake* (* get_authorizer ) (struct ceph_connection*,int*,int ) ;} ;


 void* VAR_0 ;
 scalar_t__ FUNC_0 (struct ceph_auth_handshake*) ;
 int FUNC_1 (struct ceph_auth_handshake*) ;
 void* FUNC_2 (int) ;
 struct ceph_auth_handshake* FUNC_3 (struct ceph_connection*,int*,int ) ;

__attribute__((used)) static int FUNC_4(struct ceph_connection *VAR_1)
{
 struct ceph_auth_handshake *VAR_2;
 int VAR_3;

 if (!VAR_1->ops->get_authorizer) {
  VAR_1->auth = ((void*)0);
  VAR_1->out_connect.authorizer_protocol = VAR_0;
  VAR_1->out_connect.authorizer_len = 0;
  return 0;
 }

 VAR_2 = VAR_1->ops->get_authorizer(VAR_1, &VAR_3, VAR_1->auth_retry);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 VAR_1->auth = VAR_2;
 VAR_1->out_connect.authorizer_protocol = FUNC_2(VAR_3);
 VAR_1->out_connect.authorizer_len = FUNC_2(VAR_2->authorizer_buf_len);
 return 0;
}
