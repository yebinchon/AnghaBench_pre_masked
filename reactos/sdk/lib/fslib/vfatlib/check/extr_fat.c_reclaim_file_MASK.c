
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint32_t ;
typedef int off_t ;
struct TYPE_17__ {int size; void* starthi; void* start; } ;
struct TYPE_16__ {int data_clusters; int fat_bits; unsigned long long cluster_size; int fat; } ;
struct TYPE_15__ {int value; } ;
typedef TYPE_1__ FAT_ENTRY ;
typedef TYPE_2__ DOS_FS ;
typedef int DOS_FILE ;
typedef TYPE_3__ DIR_ENT ;


 scalar_t__ FUNC_0 (TYPE_2__*,int) ;
 int* FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*,char*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int ,int,TYPE_3__*) ;
 int FUNC_6 (TYPE_1__*,int ,int,TYPE_2__*) ;
 int * FUNC_7 (TYPE_2__*,int) ;
 void* FUNC_8 (int) ;
 int FUNC_9 (unsigned long long) ;
 unsigned long long FUNC_10 (int ) ;
 int FUNC_11 (int*,int ,int) ;
 int FUNC_12 (TYPE_2__*,int) ;
 int FUNC_13 (char*,...) ;
 scalar_t__ VAR_0 ;
 int FUNC_14 (TYPE_2__*,int,int) ;
 int FUNC_15 (TYPE_2__*,int *,int*,int) ;
 scalar_t__ VAR_1 ;

void FUNC_16(DOS_FS * VAR_2)
{
    DOS_FILE VAR_3;
    int VAR_4, VAR_5;
    int VAR_6 = 0;
    uint32_t VAR_7, VAR_8, VAR_9;
    uint32_t *VAR_10 = ((void*)0);
    uint32_t VAR_11;

    if (VAR_1)
 FUNC_13("Reclaiming unconnected clusters.\n");

    VAR_11 = VAR_2->data_clusters + 2;
    VAR_10 = FUNC_1(VAR_11 * sizeof(uint32_t));
    FUNC_11(VAR_10, 0, (VAR_11 * sizeof(uint32_t)));





    for (VAR_7 = 2; VAR_7 < VAR_11; VAR_7++) {
 FAT_ENTRY VAR_12;
 FUNC_6(&VAR_12, VAR_2->fat, VAR_7, VAR_2);

 VAR_8 = VAR_12.value;
 if (!FUNC_7(VAR_2, VAR_7) && VAR_8 && VAR_8 < VAR_2->data_clusters + 2) {

     FAT_ENTRY VAR_13;
     FUNC_6(&VAR_13, VAR_2->fat, VAR_8, VAR_2);




     if (FUNC_7(VAR_2, VAR_8) || !VAR_13.value ||
  FUNC_0(VAR_2, VAR_13.value))
  FUNC_14(VAR_2, VAR_7, -1);
     else
  VAR_10[VAR_8]++;
 }
    }




    do {
 FUNC_15(VAR_2, &VAR_3, VAR_10, VAR_6);
 VAR_6 = 0;


 for (VAR_7 = 2; VAR_7 < VAR_11; VAR_7++) {
     FAT_ENTRY VAR_14;
     FUNC_6(&VAR_14, VAR_2->fat, VAR_7, VAR_2);

     if (VAR_14.value && !FUNC_0(VAR_2, VAR_14.value) &&
  !FUNC_7(VAR_2, VAR_7)) {
  if (!VAR_10[VAR_14.value]--)
      FUNC_3("Internal error: num_refs going below zero");
  FUNC_14(VAR_2, VAR_7, -1);
  VAR_6 = VAR_14.value;
  FUNC_13("Broke cycle at cluster %lu in free chain.\n", (unsigned long)VAR_7);




  if (VAR_10[VAR_14.value] == 0)
      break;
     }
 }
    }
    while (VAR_6);





    VAR_5 = VAR_4 = 0;
    for (VAR_7 = 2; VAR_7 < VAR_11; VAR_7++)

 if (FUNC_7(VAR_2, VAR_7) == &VAR_3 && !VAR_10[VAR_7]) {
     DIR_ENT VAR_15;
     off_t VAR_16;
     VAR_5++;
     VAR_16 = FUNC_2(VAR_2, &VAR_15, "FSCK%04dREC", 1);
     VAR_15.start = FUNC_8(VAR_7 & 0xffff);
     if (VAR_2->fat_bits == 32)
  VAR_15.starthi = FUNC_8(VAR_7 >> 16);
     for (VAR_9 = VAR_7; VAR_9 > 0 && VAR_9 != -1;
   VAR_9 = FUNC_12(VAR_2, VAR_9)) {
  VAR_15.size = FUNC_9(FUNC_10(VAR_15.size) + VAR_2->cluster_size);
  VAR_4++;
     }
     FUNC_5(VAR_16, sizeof(DIR_ENT), &VAR_15);
 }
    if (VAR_4)
 FUNC_13("Reclaimed %d unused cluster%s (%llu bytes) in %d chain%s.\n",
        VAR_4, VAR_4 == 1 ? "" : "s",
        (unsigned long long)VAR_4 * VAR_2->cluster_size, VAR_5,
        VAR_5 == 1 ? "" : "s");




    FUNC_4(VAR_10);
}
