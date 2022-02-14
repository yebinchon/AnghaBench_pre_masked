
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_x_info {int have_keys; } ;
struct ceph_auth_client {int want_keys; struct ceph_x_info* private; } ;


 int FUNC_0 (struct ceph_auth_client*,int*) ;
 int FUNC_1 (char*,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct ceph_auth_client *VAR_0)
{
 struct ceph_x_info *VAR_1 = VAR_0->private;
 int VAR_2;

 FUNC_0(VAR_0, &VAR_2);
 FUNC_1("ceph_x_is_authenticated want=%d need=%d have=%d\n",
      VAR_0->want_keys, VAR_2, VAR_1->have_keys);
 return (VAR_0->want_keys & VAR_1->have_keys) == VAR_0->want_keys;
}
