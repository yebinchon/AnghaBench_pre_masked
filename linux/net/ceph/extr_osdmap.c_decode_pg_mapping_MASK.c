
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rb_root {int dummy; } ;
struct ceph_pg {int dummy; } ;
struct ceph_pg_mapping {struct ceph_pg pgid; } ;
typedef struct ceph_pg_mapping* (* decode_mapping_fn_t ) (void**,void*,int) ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ceph_pg_mapping*) ;
 int FUNC_1 (struct ceph_pg_mapping*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (void**,void*,int ,int ) ;
 int FUNC_4 (void**,void*,struct ceph_pg*) ;
 int VAR_1 ;
 int FUNC_5 (struct rb_root*,struct ceph_pg_mapping*) ;
 int FUNC_6 (struct ceph_pg_mapping*) ;
 int FUNC_7 (struct rb_root*,struct ceph_pg_mapping*) ;
 struct ceph_pg_mapping* FUNC_8 (struct rb_root*,struct ceph_pg*) ;

__attribute__((used)) static int FUNC_9(void **VAR_2, void *VAR_3, struct rb_root *VAR_4,
        decode_mapping_fn_t VAR_5, bool VAR_6)
{
 u32 VAR_7;

 FUNC_2(!VAR_6 && !VAR_5);

 FUNC_3(VAR_2, VAR_3, VAR_7, VAR_1);
 while (VAR_7--) {
  struct ceph_pg_mapping *VAR_8;
  struct ceph_pg VAR_9;
  int VAR_10;

  VAR_10 = FUNC_4(VAR_2, VAR_3, &VAR_9);
  if (VAR_10)
   return VAR_10;

  VAR_8 = FUNC_8(VAR_4, &VAR_9);
  if (VAR_8) {
   FUNC_2(!VAR_6);
   FUNC_5(VAR_4, VAR_8);
   FUNC_6(VAR_8);
  }

  if (VAR_5) {
   VAR_8 = VAR_5(VAR_2, VAR_3, VAR_6);
   if (FUNC_0(VAR_8))
    return FUNC_1(VAR_8);

   if (VAR_8) {
    VAR_8->pgid = VAR_9;
    FUNC_7(VAR_4, VAR_8);
   }
  }
 }

 return 0;

e_inval:
 return -VAR_0;
}
