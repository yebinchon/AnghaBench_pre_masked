
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ceph_hobject_id {int pool; int * nspace; int nspace_len; int is_max; int hash; int snapid; int * oid; int oid_len; int * key; int key_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (void**,void*,int ,int ) ;
 int FUNC_3 (void**,void*,int ,int ) ;
 int FUNC_4 (void**,void*,int ,int ) ;
 void* FUNC_5 (void**,void*,int *,int ) ;
 int FUNC_6 (struct ceph_hobject_id*) ;
 int FUNC_7 (void**,void*,int,char*,int*,int *) ;
 int VAR_2 ;
 int FUNC_8 (char*,int) ;

__attribute__((used)) static int FUNC_9(void **VAR_3, void *VAR_4, struct ceph_hobject_id *VAR_5)
{
 u8 VAR_6;
 u32 VAR_7;
 int VAR_8;

 VAR_8 = FUNC_7(VAR_3, VAR_4, 4, "hobject_t", &VAR_6,
      &VAR_7);
 if (VAR_8)
  return VAR_8;

 if (VAR_6 < 4) {
  FUNC_8("got struct_v %d < 4 of hobject_t\n", VAR_6);
  goto e_inval;
 }

 VAR_5->key = FUNC_5(VAR_3, VAR_4, &VAR_5->key_len,
      VAR_1);
 if (FUNC_0(VAR_5->key)) {
  VAR_8 = FUNC_1(VAR_5->key);
  VAR_5->key = ((void*)0);
  return VAR_8;
 }

 VAR_5->oid = FUNC_5(VAR_3, VAR_4, &VAR_5->oid_len,
      VAR_1);
 if (FUNC_0(VAR_5->oid)) {
  VAR_8 = FUNC_1(VAR_5->oid);
  VAR_5->oid = ((void*)0);
  return VAR_8;
 }

 FUNC_3(VAR_3, VAR_4, VAR_5->snapid, VAR_2);
 FUNC_2(VAR_3, VAR_4, VAR_5->hash, VAR_2);
 FUNC_4(VAR_3, VAR_4, VAR_5->is_max, VAR_2);

 VAR_5->nspace = FUNC_5(VAR_3, VAR_4, &VAR_5->nspace_len,
         VAR_1);
 if (FUNC_0(VAR_5->nspace)) {
  VAR_8 = FUNC_1(VAR_5->nspace);
  VAR_5->nspace = ((void*)0);
  return VAR_8;
 }

 FUNC_3(VAR_3, VAR_4, VAR_5->pool, VAR_2);

 FUNC_6(VAR_5);
 return 0;

e_inval:
 return -VAR_0;
}
