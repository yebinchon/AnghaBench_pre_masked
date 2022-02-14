
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_14__ {int size; } ;
struct TYPE_17__ {TYPE_1__ dir_ent; } ;
struct TYPE_16__ {int cluster_size; int data_clusters; int fat; } ;
struct TYPE_15__ {int value; } ;
typedef TYPE_2__ FAT_ENTRY ;
typedef TYPE_3__ DOS_FS ;
typedef TYPE_4__ DOS_FILE ;


 int FUNC_0 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_1 (TYPE_4__*,int ,TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*,int ,int,TYPE_3__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,unsigned long,unsigned long,char*) ;
 int FUNC_5 (TYPE_3__*,int,int) ;

__attribute__((used)) static void FUNC_6(DOS_FS * VAR_0, DOS_FILE * VAR_1)
{
    uint32_t VAR_2, VAR_3, VAR_4, VAR_5;

    VAR_2 = VAR_3 = (FUNC_3(VAR_1->dir_ent.size) + VAR_0->cluster_size - 1) /
 VAR_0->cluster_size;
    VAR_4 = 0;

    VAR_5 = FUNC_0(VAR_1, VAR_0);

    while (VAR_3 && (VAR_5 >= 2) && (VAR_5 < VAR_0->data_clusters + 2)) {

 FAT_ENTRY VAR_6;
 FUNC_2(&VAR_6, VAR_0->fat, VAR_5, VAR_0);

 if (!VAR_6.value)
     break;

 VAR_3--;
 if (VAR_4)
     FUNC_5(VAR_0, VAR_4, VAR_5);
 VAR_4 = VAR_5;
 VAR_5++;
    }
    if (VAR_4)
 FUNC_5(VAR_0, VAR_4, -1);
    else
 FUNC_1(VAR_1, 0, VAR_0);
    if (VAR_3)
 FUNC_4("Warning: Did only undelete %lu of %lu cluster%s.\n",
        (unsigned long)VAR_2 - VAR_3, (unsigned long)VAR_2, VAR_2 == 1 ? "" : "s");

}
