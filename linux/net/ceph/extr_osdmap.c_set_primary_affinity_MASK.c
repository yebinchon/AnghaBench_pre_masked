
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ceph_osdmap {int max_osd; int * osd_primary_affinity; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int) ;
 int * FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct ceph_osdmap *VAR_3, int VAR_4, u32 VAR_5)
{
 FUNC_0(VAR_4 >= VAR_3->max_osd);

 if (!VAR_3->osd_primary_affinity) {
  int VAR_6;

  VAR_3->osd_primary_affinity = FUNC_2(
      FUNC_1(VAR_3->max_osd, sizeof(*VAR_3->osd_primary_affinity)),
      VAR_2);
  if (!VAR_3->osd_primary_affinity)
   return -VAR_1;

  for (VAR_6 = 0; VAR_6 < VAR_3->max_osd; VAR_6++)
   VAR_3->osd_primary_affinity[VAR_6] =
       VAR_0;
 }

 VAR_3->osd_primary_affinity[VAR_4] = VAR_5;

 return 0;
}
