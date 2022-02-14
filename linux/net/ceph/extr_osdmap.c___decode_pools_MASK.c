
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct ceph_pg_pool_info {int id; } ;
struct ceph_osdmap {int pg_pools; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct ceph_pg_pool_info*) ;
 struct ceph_pg_pool_info* FUNC_1 (int *,int ) ;
 int FUNC_2 (void**,void*,int ,int ) ;
 int FUNC_3 (void**,void*,int ,int ) ;
 int FUNC_4 (void**,void*,struct ceph_pg_pool_info*) ;
 int VAR_3 ;
 int FUNC_5 (struct ceph_pg_pool_info*) ;
 struct ceph_pg_pool_info* FUNC_6 (int,int ) ;

__attribute__((used)) static int FUNC_7(void **VAR_4, void *VAR_5, struct ceph_osdmap *VAR_6,
     bool VAR_7)
{
 u32 VAR_8;

 FUNC_2(VAR_4, VAR_5, VAR_8, VAR_3);
 while (VAR_8--) {
  struct ceph_pg_pool_info *VAR_9;
  u64 VAR_10;
  int VAR_11;

  FUNC_3(VAR_4, VAR_5, VAR_10, VAR_3);

  VAR_9 = FUNC_1(&VAR_6->pg_pools, VAR_10);
  if (!VAR_7 || !VAR_9) {
   VAR_9 = FUNC_6(sizeof(*VAR_9), VAR_2);
   if (!VAR_9)
    return -VAR_1;

   VAR_9->id = VAR_10;

   VAR_11 = FUNC_0(&VAR_6->pg_pools, VAR_9);
   if (VAR_11) {
    FUNC_5(VAR_9);
    return VAR_11;
   }
  }

  VAR_11 = FUNC_4(VAR_4, VAR_5, VAR_9);
  if (VAR_11)
   return VAR_11;
 }

 return 0;

e_inval:
 return -VAR_0;
}
