
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ceph_osdmap {scalar_t__ max_osd; int * osd_primary_affinity; } ;


 int VAR_0 ;
 int FUNC_0 (void**) ;
 int FUNC_1 (void**,void*,scalar_t__,int ) ;
 int FUNC_2 (void**,void*,int,int ) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ceph_osdmap*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_5(void **VAR_2, void *VAR_3,
       struct ceph_osdmap *VAR_4)
{
 u32 VAR_5, VAR_6;

 FUNC_1(VAR_2, VAR_3, VAR_5, VAR_1);
 if (VAR_5 == 0) {
  FUNC_3(VAR_4->osd_primary_affinity);
  VAR_4->osd_primary_affinity = ((void*)0);
  return 0;
 }
 if (VAR_5 != VAR_4->max_osd)
  goto e_inval;

 FUNC_2(VAR_2, VAR_3, VAR_4->max_osd*sizeof(u32), VAR_1);

 for (VAR_6 = 0; VAR_6 < VAR_4->max_osd; VAR_6++) {
  int VAR_7;

  VAR_7 = FUNC_4(VAR_4, VAR_6, FUNC_0(VAR_2));
  if (VAR_7)
   return VAR_7;
 }

 return 0;

e_inval:
 return -VAR_0;
}
