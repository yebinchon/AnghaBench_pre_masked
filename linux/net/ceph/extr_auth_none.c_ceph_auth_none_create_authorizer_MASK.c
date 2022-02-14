
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int destroy; } ;
struct ceph_none_authorizer {int reply_buf; int buf_len; int buf; TYPE_1__ base; } ;
struct ceph_authorizer {int dummy; } ;
struct ceph_auth_handshake {int authorizer_reply_buf_len; int authorizer_reply_buf; int authorizer_buf_len; int authorizer_buf; struct ceph_authorizer* authorizer; } ;
struct ceph_auth_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ceph_auth_client*,struct ceph_none_authorizer*) ;
 int VAR_2 ;
 int FUNC_1 (struct ceph_none_authorizer*) ;
 struct ceph_none_authorizer* FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(
 struct ceph_auth_client *VAR_3, int VAR_4,
 struct ceph_auth_handshake *VAR_5)
{
 struct ceph_none_authorizer *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->base.destroy = VAR_2;

 VAR_7 = FUNC_0(VAR_3, VAR_6);
 if (VAR_7) {
  FUNC_1(VAR_6);
  return VAR_7;
 }

 VAR_5->authorizer = (struct ceph_authorizer *) VAR_6;
 VAR_5->authorizer_buf = VAR_6->buf;
 VAR_5->authorizer_buf_len = VAR_6->buf_len;
 VAR_5->authorizer_reply_buf = VAR_6->reply_buf;
 VAR_5->authorizer_reply_buf_len = sizeof (VAR_6->reply_buf);

 return 0;
}
