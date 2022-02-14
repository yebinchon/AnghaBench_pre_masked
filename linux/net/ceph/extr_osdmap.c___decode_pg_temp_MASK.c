
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int len; int * osds; } ;
struct ceph_pg_mapping {TYPE_1__ pg_temp; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ceph_pg_mapping* FUNC_0 (int ) ;
 int VAR_2 ;
 struct ceph_pg_mapping* FUNC_1 (int) ;
 int FUNC_2 (void**) ;
 int FUNC_3 (void**,void*,int,int ) ;
 int FUNC_4 (void**,void*,int,int ) ;
 int VAR_3 ;

__attribute__((used)) static struct ceph_pg_mapping *FUNC_5(void **VAR_4, void *VAR_5,
      bool VAR_6)
{
 struct ceph_pg_mapping *VAR_7;
 u32 VAR_8, VAR_9;

 FUNC_3(VAR_4, VAR_5, VAR_8, VAR_3);
 if (VAR_8 == 0 && VAR_6)
  return ((void*)0);
 if (VAR_8 > (VAR_2 - sizeof(*VAR_7)) / sizeof(u32))
  return FUNC_0(-VAR_0);

 FUNC_4(VAR_4, VAR_5, VAR_8 * sizeof(u32), VAR_3);
 VAR_7 = FUNC_1(VAR_8 * sizeof(u32));
 if (!VAR_7)
  return FUNC_0(-VAR_1);

 VAR_7->pg_temp.len = VAR_8;
 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
  VAR_7->pg_temp.osds[VAR_9] = FUNC_2(VAR_4);

 return VAR_7;

e_inval:
 return FUNC_0(-VAR_0);
}
