
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_osdmap {int dummy; } ;


 int VAR_0 ;
 struct ceph_osdmap* FUNC_0 (int) ;
 struct ceph_osdmap* FUNC_1 () ;
 int FUNC_2 (struct ceph_osdmap*) ;
 int FUNC_3 (void**,void*,struct ceph_osdmap*) ;

struct ceph_osdmap *FUNC_4(void **VAR_1, void *VAR_2)
{
 struct ceph_osdmap *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1();
 if (!VAR_3)
  return FUNC_0(-VAR_0);

 VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_3);
 if (VAR_4) {
  FUNC_2(VAR_3);
  return FUNC_0(VAR_4);
 }

 return VAR_3;
}
