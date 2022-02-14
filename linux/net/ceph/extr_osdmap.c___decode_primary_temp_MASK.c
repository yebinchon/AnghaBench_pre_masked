
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ osd; } ;
struct ceph_pg_mapping {TYPE_1__ primary_temp; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ceph_pg_mapping* FUNC_0 (int ) ;
 struct ceph_pg_mapping* FUNC_1 (int ) ;
 int FUNC_2 (void**,void*,scalar_t__,int ) ;
 int VAR_2 ;

__attribute__((used)) static struct ceph_pg_mapping *FUNC_3(void **VAR_3, void *VAR_4,
           bool VAR_5)
{
 struct ceph_pg_mapping *VAR_6;
 u32 VAR_7;

 FUNC_2(VAR_3, VAR_4, VAR_7, VAR_2);
 if (VAR_7 == (u32)-1 && VAR_5)
  return ((void*)0);

 VAR_6 = FUNC_1(0);
 if (!VAR_6)
  return FUNC_0(-VAR_1);

 VAR_6->primary_temp.osd = VAR_7;
 return VAR_6;

e_inval:
 return FUNC_0(-VAR_0);
}
