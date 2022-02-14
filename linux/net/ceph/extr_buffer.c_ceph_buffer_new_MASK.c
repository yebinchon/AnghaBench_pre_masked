
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t iov_len; int iov_base; } ;
struct ceph_buffer {size_t alloc_len; TYPE_1__ vec; int kref; } ;
typedef int gfp_t ;


 int FUNC_0 (size_t,int ) ;
 int FUNC_1 (char*,struct ceph_buffer*) ;
 int FUNC_2 (struct ceph_buffer*) ;
 struct ceph_buffer* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;

struct ceph_buffer *FUNC_5(size_t VAR_0, gfp_t VAR_1)
{
 struct ceph_buffer *VAR_2;

 VAR_2 = FUNC_3(sizeof(*VAR_2), VAR_1);
 if (!VAR_2)
  return ((void*)0);

 VAR_2->vec.iov_base = FUNC_0(VAR_0, VAR_1);
 if (!VAR_2->vec.iov_base) {
  FUNC_2(VAR_2);
  return ((void*)0);
 }

 FUNC_4(&VAR_2->kref);
 VAR_2->alloc_len = VAR_0;
 VAR_2->vec.iov_len = VAR_0;
 FUNC_1("buffer_new %p\n", VAR_2);
 return VAR_2;
}
