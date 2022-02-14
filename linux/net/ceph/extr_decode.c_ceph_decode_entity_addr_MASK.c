
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ceph_entity_addr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void**,void*,int,int ) ;
 int FUNC_1 (void**,void*,struct ceph_entity_addr*) ;
 int FUNC_2 (void**,void*,struct ceph_entity_addr*) ;

int
FUNC_3(void **VAR_2, void *VAR_3, struct ceph_entity_addr *VAR_4)
{
 u8 VAR_5;

 FUNC_0(VAR_2, VAR_3, VAR_5, VAR_1);
 if (VAR_5 == 1)
  return FUNC_2(VAR_2, VAR_3, VAR_4);
 else if (VAR_5 == 0)
  return FUNC_1(VAR_2, VAR_3, VAR_4);
bad:
 return -VAR_0;
}
