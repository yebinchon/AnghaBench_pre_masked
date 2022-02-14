
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ceph_object_locator {scalar_t__ pool_ns; void* pool; } ;
typedef int s64 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,void*,int) ;
 int FUNC_1 (void**) ;
 void* FUNC_2 (void**) ;
 int FUNC_3 (void**) ;
 int FUNC_4 (void**,void*,int,int ) ;
 int VAR_1 ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static int FUNC_6(void **VAR_2, void *VAR_3,
       struct ceph_object_locator *VAR_4)
{
 u8 VAR_5, VAR_6;
 u32 VAR_7;
 void *VAR_8;
 int VAR_9 = 0;

 FUNC_4(VAR_2, VAR_3, 1 + 1 + 4, VAR_1);
 VAR_5 = FUNC_3(VAR_2);
 VAR_6 = FUNC_3(VAR_2);
 if (VAR_5 < 3) {
  FUNC_5("got v %d < 3 cv %d of ceph_object_locator\n",
   VAR_5, VAR_6);
  goto e_inval;
 }
 if (VAR_6 > 6) {
  FUNC_5("got v %d cv %d > 6 of ceph_object_locator\n",
   VAR_5, VAR_6);
  goto e_inval;
 }
 VAR_7 = FUNC_1(VAR_2);
 FUNC_4(VAR_2, VAR_3, VAR_7, VAR_1);
 VAR_8 = *VAR_2 + VAR_7;

 VAR_4->pool = FUNC_2(VAR_2);
 *VAR_2 += 4;

 VAR_7 = FUNC_1(VAR_2);
 if (VAR_7 > 0) {
  FUNC_5("ceph_object_locator::key is set\n");
  goto e_inval;
 }

 if (VAR_5 >= 5) {
  bool VAR_10 = 0;

  VAR_7 = FUNC_1(VAR_2);
  if (VAR_7 > 0) {
   FUNC_4(VAR_2, VAR_3, VAR_7, VAR_1);
   if (!VAR_4->pool_ns ||
       FUNC_0(VAR_4->pool_ns, *VAR_2, VAR_7))
    VAR_10 = 1;
   *VAR_2 += VAR_7;
  } else {
   if (VAR_4->pool_ns)
    VAR_10 = 1;
  }
  if (VAR_10) {

   FUNC_5("ceph_object_locator::nspace is changed\n");
   goto e_inval;
  }
 }

 if (VAR_5 >= 6) {
  s64 VAR_11 = FUNC_2(VAR_2);
  if (VAR_11 != -1) {
   FUNC_5("ceph_object_locator::hash is set\n");
   goto e_inval;
  }
 }


 *VAR_2 = VAR_8;
out:
 return VAR_9;

e_inval:
 VAR_9 = -VAR_0;
 goto out;
}
