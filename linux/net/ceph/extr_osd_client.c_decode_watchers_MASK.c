
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ceph_watch_item {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void**) ;
 int FUNC_1 (void**,void*,int,char*,int *,int*) ;
 int FUNC_2 (void**,void*,struct ceph_watch_item*) ;
 struct ceph_watch_item* FUNC_3 (int,int,int ) ;
 int FUNC_4 (struct ceph_watch_item*) ;

__attribute__((used)) static int FUNC_5(void **VAR_2, void *VAR_3,
      struct ceph_watch_item **VAR_4,
      u32 *VAR_5)
{
 u8 VAR_6;
 u32 VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_2, VAR_3, 1, "obj_list_watch_response_t",
      &VAR_6, &VAR_7);
 if (VAR_9)
  return VAR_9;

 *VAR_5 = FUNC_0(VAR_2);
 *VAR_4 = FUNC_3(*VAR_5, sizeof(**VAR_4), VAR_1);
 if (!*VAR_4)
  return -VAR_0;

 for (VAR_8 = 0; VAR_8 < *VAR_5; VAR_8++) {
  VAR_9 = FUNC_2(VAR_2, VAR_3, *VAR_4 + VAR_8);
  if (VAR_9) {
   FUNC_4(*VAR_4);
   return VAR_9;
  }
 }

 return 0;
}
