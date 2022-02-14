
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ceph_x_encrypt_header {int dummy; } ;
struct ceph_x_authorizer {int session_key; } ;
struct ceph_x_authorize_challenge {int server_challenge; } ;


 int VAR_0 ;
 int FUNC_0 (int *,void*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int FUNC_3(struct ceph_x_authorizer *VAR_1,
           void *VAR_2,
           int VAR_3,
           u64 *VAR_4)
{
 struct ceph_x_authorize_challenge *VAR_5 =
     VAR_2 + sizeof(struct ceph_x_encrypt_header);
 int VAR_6;


 VAR_6 = FUNC_0(&VAR_1->session_key, VAR_2,
          VAR_3);
 if (VAR_6 < 0)
  return VAR_6;
 if (VAR_6 < sizeof(*VAR_5)) {
  FUNC_2("bad size %d for ceph_x_authorize_challenge\n", VAR_6);
  return -VAR_0;
 }

 *VAR_4 = FUNC_1(VAR_5->server_challenge);
 return 0;
}
