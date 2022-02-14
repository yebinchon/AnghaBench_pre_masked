
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_11__ {int data_clusters; int cluster_size; int fat; } ;
struct TYPE_10__ {int value; } ;
typedef TYPE_1__ FAT_ENTRY ;
typedef TYPE_2__ DOS_FS ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int,TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (TYPE_2__*,int,int) ;
 scalar_t__ VAR_0 ;

void FUNC_7(DOS_FS * VAR_1)
{
    uint32_t VAR_2;

    if (VAR_0)
 FUNC_5("Checking for bad clusters.\n");
    for (VAR_2 = 2; VAR_2 < VAR_1->data_clusters + 2; VAR_2++) {
 FAT_ENTRY VAR_3;
 FUNC_3(&VAR_3, VAR_1->fat, VAR_2, VAR_1);

 if (!FUNC_4(VAR_1, VAR_2) && !FUNC_0(VAR_1, VAR_3.value))
     if (!FUNC_2(FUNC_1(VAR_1, VAR_2), VAR_1->cluster_size)) {
  FUNC_5("Cluster %lu is unreadable.\n", (unsigned long)VAR_2);
  FUNC_6(VAR_1, VAR_2, -2);
     }
    }
}
