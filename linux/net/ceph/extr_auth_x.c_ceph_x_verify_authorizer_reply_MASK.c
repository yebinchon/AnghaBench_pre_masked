
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_x_authorizer {scalar_t__ nonce; int session_key; void* enc_buf; } ;
struct ceph_x_authorize_reply {int nonce_plus_one; } ;
struct ceph_authorizer {int dummy; } ;
struct ceph_auth_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,void**,void*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static int FUNC_5(struct ceph_auth_client *VAR_3,
       struct ceph_authorizer *VAR_4)
{
 struct ceph_x_authorizer *VAR_5 = (void *)VAR_4;
 void *VAR_6 = VAR_5->enc_buf;
 struct ceph_x_authorize_reply *VAR_7 = VAR_6 + FUNC_1();
 int VAR_8;

 VAR_8 = FUNC_0(&VAR_5->session_key, &VAR_6, VAR_6 + VAR_0);
 if (VAR_8 < 0)
  return VAR_8;
 if (VAR_8 < sizeof(*VAR_7)) {
  FUNC_4("bad size %d for ceph_x_authorize_reply\n", VAR_8);
  return -VAR_1;
 }

 if (VAR_5->nonce + 1 != FUNC_3(VAR_7->nonce_plus_one))
  VAR_8 = -VAR_2;
 else
  VAR_8 = 0;
 FUNC_2("verify_authorizer_reply nonce %llx got %llx ret %d\n",
      VAR_5->nonce, FUNC_3(VAR_7->nonce_plus_one), VAR_8);
 return VAR_8;
}
