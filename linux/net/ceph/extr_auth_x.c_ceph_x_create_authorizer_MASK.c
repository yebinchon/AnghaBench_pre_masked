
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ceph_x_ticket_handler {int dummy; } ;
struct TYPE_5__ {int destroy; } ;
struct ceph_x_authorizer {int enc_buf; TYPE_3__* buf; TYPE_1__ base; } ;
struct ceph_authorizer {int dummy; } ;
struct ceph_auth_handshake {int check_message_signature; int sign_message; int authorizer_reply_buf_len; int authorizer_reply_buf; int authorizer_buf_len; int authorizer_buf; struct ceph_authorizer* authorizer; } ;
struct ceph_auth_client {TYPE_4__* ops; } ;
struct TYPE_8__ {int check_message_signature; int sign_message; } ;
struct TYPE_6__ {int iov_len; int iov_base; } ;
struct TYPE_7__ {TYPE_2__ vec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ceph_x_ticket_handler*) ;
 int FUNC_1 (struct ceph_x_ticket_handler*) ;
 int FUNC_2 (struct ceph_auth_client*,struct ceph_x_ticket_handler*,struct ceph_x_authorizer*) ;
 int VAR_3 ;
 struct ceph_x_ticket_handler* FUNC_3 (struct ceph_auth_client*,int) ;
 int FUNC_4 (struct ceph_x_authorizer*) ;
 struct ceph_x_authorizer* FUNC_5 (int,int ) ;

__attribute__((used)) static int FUNC_6(
 struct ceph_auth_client *VAR_4, int VAR_5,
 struct ceph_auth_handshake *VAR_6)
{
 struct ceph_x_authorizer *VAR_7;
 struct ceph_x_ticket_handler *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_3(VAR_4, VAR_5);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 VAR_7 = FUNC_5(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->base.destroy = VAR_3;

 VAR_9 = FUNC_2(VAR_4, VAR_8, VAR_7);
 if (VAR_9) {
  FUNC_4(VAR_7);
  return VAR_9;
 }

 VAR_6->authorizer = (struct ceph_authorizer *) VAR_7;
 VAR_6->authorizer_buf = VAR_7->buf->vec.iov_base;
 VAR_6->authorizer_buf_len = VAR_7->buf->vec.iov_len;
 VAR_6->authorizer_reply_buf = VAR_7->enc_buf;
 VAR_6->authorizer_reply_buf_len = VAR_0;
 VAR_6->sign_message = VAR_4->ops->sign_message;
 VAR_6->check_message_signature = VAR_4->ops->check_message_signature;

 return 0;
}
