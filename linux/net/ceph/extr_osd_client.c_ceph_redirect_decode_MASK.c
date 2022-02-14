
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ceph_request_redirect {int oloc; } ;


 int VAR_0 ;
 int FUNC_0 (void**) ;
 int FUNC_1 (void**) ;
 int FUNC_2 (void**,void*,int,int ) ;
 int FUNC_3 (void**,void*,int *) ;
 int VAR_1 ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static int FUNC_5(void **VAR_2, void *VAR_3,
    struct ceph_request_redirect *VAR_4)
{
 u8 VAR_5, VAR_6;
 u32 VAR_7;
 void *VAR_8;
 int VAR_9;

 FUNC_2(VAR_2, VAR_3, 1 + 1 + 4, VAR_1);
 VAR_5 = FUNC_1(VAR_2);
 VAR_6 = FUNC_1(VAR_2);
 if (VAR_6 > 1) {
  FUNC_4("got v %d cv %d > 1 of ceph_request_redirect\n",
   VAR_5, VAR_6);
  goto e_inval;
 }
 VAR_7 = FUNC_0(VAR_2);
 FUNC_2(VAR_2, VAR_3, VAR_7, VAR_1);
 VAR_8 = *VAR_2 + VAR_7;

 VAR_9 = FUNC_3(VAR_2, VAR_3, &VAR_4->oloc);
 if (VAR_9)
  goto out;

 VAR_7 = FUNC_0(VAR_2);
 if (VAR_7 > 0) {
  FUNC_4("ceph_request_redirect::object_name is set\n");
  goto e_inval;
 }

 VAR_7 = FUNC_0(VAR_2);
 *VAR_2 += VAR_7;


 *VAR_2 = VAR_8;
out:
 return VAR_9;

e_inval:
 VAR_9 = -VAR_0;
 goto out;
}
