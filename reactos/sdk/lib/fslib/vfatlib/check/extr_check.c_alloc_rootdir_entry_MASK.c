
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int uint32_t ;
typedef int off_t ;
typedef int d2 ;
struct TYPE_20__ {scalar_t__ attr; scalar_t__ name; } ;
struct TYPE_19__ {int root_cluster; int cluster_size; int data_clusters; int root_entries; int root_start; int fat; } ;
struct TYPE_18__ {int value; } ;
typedef TYPE_1__ FAT_ENTRY ;
typedef TYPE_2__ DOS_FS ;
typedef TYPE_3__ DIR_ENT ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int,int,TYPE_3__*) ;
 int FUNC_6 (int ,int,TYPE_3__*) ;
 int FUNC_7 (TYPE_1__*,int ,int,TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int) ;
 int FUNC_9 (scalar_t__,char const*,int ) ;
 int FUNC_10 (TYPE_3__*,int ,int) ;
 int VAR_2 ;
 int FUNC_11 (TYPE_2__*,int) ;
 int FUNC_12 (TYPE_2__*,int,int) ;
 int FUNC_13 (TYPE_2__*,int,int ) ;
 int FUNC_14 (char*,char const*,int) ;
 int FUNC_15 (char const*,char const*,int ) ;

off_t FUNC_16(DOS_FS * VAR_3, DIR_ENT * VAR_4, const char *VAR_5, int VAR_6)
{
    static int VAR_7 = 0;
    off_t VAR_8;

    if (VAR_3->root_cluster) {
 DIR_ENT VAR_9;
 int VAR_10 = 0, VAR_11 = 0;
 uint32_t VAR_12, VAR_13 = 0;
 off_t VAR_14;

 VAR_12 = VAR_3->root_cluster;
 VAR_8 = FUNC_2(VAR_3, VAR_12);
 while (VAR_12 > 0 && VAR_12 != -1) {
     FUNC_5(VAR_8, sizeof(DIR_ENT), &VAR_9);
     if (FUNC_0(VAR_9) && VAR_9 != VAR_1) {
  VAR_11 = 1;
  break;
     }
     VAR_10 += sizeof(DIR_ENT);
     VAR_8 += sizeof(DIR_ENT);
     if ((VAR_10 % VAR_3->cluster_size) == 0) {
  VAR_13 = VAR_12;
  if ((VAR_12 = FUNC_11(VAR_3, VAR_12)) == 0 || VAR_12 == -1)
      break;
  VAR_8 = FUNC_2(VAR_3, VAR_12);
     }
 }
 if (!VAR_11) {


     if (!VAR_13)
  FUNC_3("Root directory has no cluster allocated!");
     for (VAR_12 = VAR_13 + 1; VAR_12 != VAR_13; VAR_12++) {
  FAT_ENTRY VAR_15;

  if (VAR_12 >= VAR_3->data_clusters + 2)
      VAR_12 = 2;
  FUNC_7(&VAR_15, VAR_3->fat, VAR_12, VAR_3);
  if (!VAR_15.value)
      break;
     }
     if (VAR_12 == VAR_13)
  FUNC_3("Root directory full and no free cluster");
     FUNC_12(VAR_3, VAR_13, VAR_12);
     FUNC_12(VAR_3, VAR_12, -1);
     FUNC_13(VAR_3, VAR_12, FUNC_8(VAR_3, VAR_3->root_cluster));

     FUNC_10(&VAR_9, 0, sizeof(VAR_9));
     VAR_8 = FUNC_2(VAR_3, VAR_12);
     for (VAR_10 = 0; VAR_10 < VAR_3->cluster_size; VAR_10 += sizeof(DIR_ENT))
  FUNC_6(VAR_8 + VAR_10, sizeof(VAR_9), &VAR_9);
 }
 FUNC_10(VAR_4, 0, sizeof(DIR_ENT));
 if (VAR_6) {
     while (1) {
  char VAR_16[12];
  FUNC_14(VAR_16, VAR_5, VAR_7);
  FUNC_9(VAR_4->name, VAR_16, VAR_0);
  VAR_12 = VAR_3->root_cluster;
  VAR_10 = 0;
  VAR_14 = FUNC_2(VAR_3, VAR_12);
  while (VAR_12 > 0 && VAR_12 != -1) {
      FUNC_5(VAR_14, sizeof(DIR_ENT), &VAR_9);
      if (VAR_14 != VAR_8 &&
   !FUNC_15((const char *)VAR_9, (const char *)VAR_4->name,
     VAR_0))
   break;
      VAR_10 += sizeof(DIR_ENT);
      VAR_14 += sizeof(DIR_ENT);
      if ((VAR_10 % VAR_3->cluster_size) == 0) {
   if ((VAR_12 = FUNC_11(VAR_3, VAR_12)) == 0 ||
       VAR_12 == -1)
       break;
   VAR_14 = FUNC_2(VAR_3, VAR_12);
      }
  }
  if (VAR_12 == 0 || VAR_12 == -1)
      break;
  if (++VAR_7 >= 10000)
      FUNC_3("Unable to create unique name");
     }
 } else {
     FUNC_9(VAR_4->name, VAR_5, VAR_0);
 }
    } else {
 DIR_ENT *VAR_17;
 int VAR_18 = 0, VAR_19;

 VAR_17 = FUNC_1(VAR_3->root_entries * sizeof(DIR_ENT));
 FUNC_5(VAR_3->root_start, VAR_3->root_entries * sizeof(DIR_ENT), VAR_17);

 while (VAR_18 < VAR_3->root_entries)
     if (FUNC_0(VAR_17[VAR_18].name) &&
  VAR_17[VAR_18].attr != VAR_1)
  break;
     else
  VAR_18++;
 if (VAR_18 == VAR_3->root_entries)
     FUNC_3("Root directory is full.");
 VAR_8 = VAR_3->root_start + VAR_18 * sizeof(DIR_ENT);
 FUNC_10(VAR_4, 0, sizeof(DIR_ENT));
 if (VAR_6) {
     while (1) {
  char VAR_20[12];
  FUNC_14(VAR_20, VAR_5, VAR_7);
  FUNC_9(VAR_4->name, VAR_20, VAR_0);
  for (VAR_19 = 0; VAR_19 < VAR_3->root_entries; VAR_19++)
      if (VAR_19 != VAR_18 &&
   !FUNC_15((const char *)VAR_17[VAR_19].name,
     (const char *)VAR_4->name, VAR_0))
   break;
  if (VAR_19 == VAR_3->root_entries)
      break;
  if (++VAR_7 >= 10000)
      FUNC_3("Unable to create unique name");
     }
 } else {
     FUNC_9(VAR_4->name, VAR_5, VAR_0);
 }
 FUNC_4(VAR_17);
    }
    ++VAR_2;
    return VAR_8;
}
