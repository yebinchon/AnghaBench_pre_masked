
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ off_t ;
struct TYPE_9__ {int attr; } ;
struct TYPE_8__ {int root_cluster; int cluster_size; int root_entries; scalar_t__ root_start; } ;
typedef TYPE_1__ DOS_FS ;
typedef TYPE_2__ DIR_ENT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (scalar_t__,int,TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,int) ;

off_t FUNC_3(DOS_FS * VAR_2, DIR_ENT * VAR_3)
{
    uint32_t VAR_4;
    off_t VAR_5;
    int VAR_6;

    if (VAR_2->root_cluster) {
 for (VAR_4 = VAR_2->root_cluster;
      VAR_4 != 0 && VAR_4 != -1;
      VAR_4 = FUNC_2(VAR_2, VAR_4)) {
     VAR_5 = FUNC_0(VAR_2, VAR_4);
     for (VAR_6 = 0; VAR_6 * sizeof(DIR_ENT) < VAR_2->cluster_size; VAR_6++) {
  FUNC_1(VAR_5, sizeof(DIR_ENT), VAR_3);
  if (VAR_3->attr != VAR_1 && VAR_3->attr & VAR_0)
      return VAR_5;
  VAR_5 += sizeof(DIR_ENT);
     }
 }
    } else {
 for (VAR_6 = 0; VAR_6 < VAR_2->root_entries; VAR_6++) {
     VAR_5 = VAR_2->root_start + VAR_6 * sizeof(DIR_ENT);
     FUNC_1(VAR_5, sizeof(DIR_ENT), VAR_3);
     if (VAR_3->attr != VAR_1 && VAR_3->attr & VAR_0)
  return VAR_5;
 }
    }

    return 0;
}
