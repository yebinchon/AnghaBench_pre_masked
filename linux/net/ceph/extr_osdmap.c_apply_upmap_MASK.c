
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int len; int** from_to; } ;
struct TYPE_3__ {int len; int* osds; } ;
struct ceph_pg_mapping {TYPE_2__ pg_upmap_items; TYPE_1__ pg_upmap; } ;
struct ceph_pg {int dummy; } ;
struct ceph_osds {int* osds; int size; } ;
struct ceph_osdmap {int max_osd; scalar_t__* osd_weight; int pg_upmap_items; int pg_upmap; } ;


 int VAR_0 ;
 struct ceph_pg_mapping* FUNC_0 (int *,struct ceph_pg const*) ;

__attribute__((used)) static void FUNC_1(struct ceph_osdmap *VAR_1,
   const struct ceph_pg *VAR_2,
   struct ceph_osds *VAR_3)
{
 struct ceph_pg_mapping *VAR_4;
 int VAR_5, VAR_6;

 VAR_4 = FUNC_0(&VAR_1->pg_upmap, VAR_2);
 if (VAR_4) {

  for (VAR_5 = 0; VAR_5 < VAR_4->pg_upmap.len; VAR_5++) {
   int VAR_7 = VAR_4->pg_upmap.osds[VAR_5];

   if (VAR_7 != VAR_0 &&
       VAR_7 < VAR_1->max_osd &&
       VAR_1->osd_weight[VAR_7] == 0) {

    return;
   }
  }
  for (VAR_5 = 0; VAR_5 < VAR_4->pg_upmap.len; VAR_5++)
   VAR_3->osds[VAR_5] = VAR_4->pg_upmap.osds[VAR_5];
  VAR_3->size = VAR_4->pg_upmap.len;

 }

 VAR_4 = FUNC_0(&VAR_1->pg_upmap_items, VAR_2);
 if (VAR_4) {




  for (VAR_5 = 0; VAR_5 < VAR_4->pg_upmap_items.len; VAR_5++) {
   int VAR_8 = VAR_4->pg_upmap_items.from_to[VAR_5][0];
   int VAR_9 = VAR_4->pg_upmap_items.from_to[VAR_5][1];
   int VAR_10 = -1;
   bool VAR_11 = 0;


   for (VAR_6 = 0; VAR_6 < VAR_3->size; VAR_6++) {
    int VAR_12 = VAR_3->osds[VAR_6];

    if (VAR_12 == VAR_9) {
     VAR_11 = 1;
     break;
    }

    if (VAR_12 == VAR_8 && VAR_10 < 0 &&
        !(VAR_9 != VAR_0 &&
          VAR_9 < VAR_1->max_osd &&
          VAR_1->osd_weight[VAR_9] == 0)) {
     VAR_10 = VAR_6;
    }
   }
   if (!VAR_11 && VAR_10 >= 0)
    VAR_3->osds[VAR_10] = VAR_9;
  }
 }
}
