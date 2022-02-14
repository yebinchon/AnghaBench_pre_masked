
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_hobject_id {scalar_t__ is_max; scalar_t__ pool; void* nspace; size_t nspace_len; void* oid; size_t oid_len; scalar_t__ snapid; } ;


 int FUNC_0 (void*,size_t,void*,size_t) ;
 scalar_t__ FUNC_1 (struct ceph_hobject_id const*) ;
 int FUNC_2 (struct ceph_hobject_id const*,void**,size_t*) ;

__attribute__((used)) static int FUNC_3(const struct ceph_hobject_id *VAR_0,
   const struct ceph_hobject_id *VAR_1)
{
 void *VAR_2, *VAR_3;
 size_t VAR_4, VAR_5;
 int VAR_6;

 if (VAR_0->is_max < VAR_1->is_max)
  return -1;
 if (VAR_0->is_max > VAR_1->is_max)
  return 1;

 if (VAR_0->pool < VAR_1->pool)
  return -1;
 if (VAR_0->pool > VAR_1->pool)
  return 1;

 if (FUNC_1(VAR_0) < FUNC_1(VAR_1))
  return -1;
 if (FUNC_1(VAR_0) > FUNC_1(VAR_1))
  return 1;

 VAR_6 = FUNC_0(VAR_0->nspace, VAR_0->nspace_len,
       VAR_1->nspace, VAR_1->nspace_len);
 if (VAR_6)
  return VAR_6;

 FUNC_2(VAR_0, &VAR_2, &VAR_4);
 FUNC_2(VAR_1, &VAR_3, &VAR_5);
 VAR_6 = FUNC_0(VAR_2, VAR_4,
       VAR_3, VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_0->oid, VAR_0->oid_len, VAR_1->oid, VAR_1->oid_len);
 if (VAR_6)
  return VAR_6;

 if (VAR_0->snapid < VAR_1->snapid)
  return -1;
 if (VAR_0->snapid > VAR_1->snapid)
  return 1;

 return 0;
}
