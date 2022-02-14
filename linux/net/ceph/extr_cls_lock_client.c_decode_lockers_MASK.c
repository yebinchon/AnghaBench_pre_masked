
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ceph_locker {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (void**) ;
 int FUNC_3 (void**) ;
 char* FUNC_4 (void**,void*,int *,int ) ;
 int FUNC_5 (struct ceph_locker*,int) ;
 int FUNC_6 (void**,void*,int,char*,int *,int*) ;
 int FUNC_7 (void**,void*,struct ceph_locker*) ;
 struct ceph_locker* FUNC_8 (int,int,int ) ;

__attribute__((used)) static int FUNC_9(void **VAR_2, void *VAR_3, u8 *VAR_4, char **VAR_5,
     struct ceph_locker **VAR_6, u32 *VAR_7)
{
 u8 VAR_8;
 u32 VAR_9;
 char *VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_12 = FUNC_6(VAR_2, VAR_3, 1, "cls_lock_get_info_reply",
      &VAR_8, &VAR_9);
 if (VAR_12)
  return VAR_12;

 *VAR_7 = FUNC_2(VAR_2);
 *VAR_6 = FUNC_8(*VAR_7, sizeof(**VAR_6), VAR_1);
 if (!*VAR_6)
  return -VAR_0;

 for (VAR_11 = 0; VAR_11 < *VAR_7; VAR_11++) {
  VAR_12 = FUNC_7(VAR_2, VAR_3, *VAR_6 + VAR_11);
  if (VAR_12)
   goto err_free_lockers;
 }

 *VAR_4 = FUNC_3(VAR_2);
 VAR_10 = FUNC_4(VAR_2, VAR_3, ((void*)0), VAR_1);
 if (FUNC_0(VAR_10)) {
  VAR_12 = FUNC_1(VAR_10);
  goto err_free_lockers;
 }

 *VAR_5 = VAR_10;
 return 0;

err_free_lockers:
 FUNC_5(*VAR_6, *VAR_7);
 return VAR_12;
}
