
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int iov_base; } ;
struct ceph_buffer {TYPE_1__ vec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ceph_buffer* FUNC_0 (size_t,int ) ;
 size_t FUNC_1 (void**) ;
 int FUNC_2 (void**,int ,size_t) ;
 int FUNC_3 (void**,void*,size_t,int ) ;
 int FUNC_4 (char*,int) ;

int FUNC_5(struct ceph_buffer **VAR_4, void **VAR_5, void *VAR_6)
{
 size_t VAR_7;

 FUNC_3(VAR_5, VAR_6, sizeof(u32), VAR_3);
 VAR_7 = FUNC_1(VAR_5);
 FUNC_4("decode_buffer len %d\n", (int)VAR_7);
 FUNC_3(VAR_5, VAR_6, VAR_7, VAR_3);
 *VAR_4 = FUNC_0(VAR_7, VAR_2);
 if (!*VAR_4)
  return -VAR_1;
 FUNC_2(VAR_5, (*VAR_4)->vec.iov_base, VAR_7);
 return 0;
bad:
 return -VAR_0;
}
