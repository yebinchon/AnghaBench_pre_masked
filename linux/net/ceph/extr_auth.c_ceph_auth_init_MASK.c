
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_crypto_key {int dummy; } ;
struct ceph_auth_client {int negotiating; char const* name; struct ceph_crypto_key const* key; int mutex; } ;


 char const* VAR_0 ;
 int VAR_1 ;
 struct ceph_auth_client* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (char*,char const*) ;
 struct ceph_auth_client* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;

struct ceph_auth_client *FUNC_4(const char *VAR_3, const struct ceph_crypto_key *VAR_4)
{
 struct ceph_auth_client *VAR_5;
 int VAR_6;

 FUNC_1("auth_init name '%s'\n", VAR_3);

 VAR_6 = -VAR_1;
 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  goto out;

 FUNC_3(&VAR_5->mutex);
 VAR_5->negotiating = 1;
 if (VAR_3)
  VAR_5->name = VAR_3;
 else
  VAR_5->name = VAR_0;
 FUNC_1("auth_init name %s\n", VAR_5->name);
 VAR_5->key = VAR_4;
 return VAR_5;

out:
 return FUNC_0(VAR_6);
}
