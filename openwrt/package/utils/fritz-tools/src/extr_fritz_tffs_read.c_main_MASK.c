
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct tffs_key_name_table {int size; int * entries; } ;
struct tffs_entry {int dummy; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,struct tffs_entry*) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,char*,...) ;
 scalar_t__ FUNC_5 (int *,int,scalar_t__,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,long,int ) ;
 scalar_t__ FUNC_8 (int *) ;
 char* VAR_5 ;
 int * FUNC_9 (scalar_t__) ;
 int FUNC_10 (struct tffs_entry*,struct tffs_key_name_table*) ;
 int FUNC_11 (int,char**) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_12 (struct tffs_key_name_table*) ;
 int FUNC_13 (int *,struct tffs_key_name_table*) ;
 int FUNC_14 (int *,struct tffs_key_name_table*) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;

int FUNC_15(int VAR_11, char *VAR_12[])
{
 int VAR_13 = VAR_0;
 uint8_t *VAR_14;
 FILE *VAR_15;
 struct tffs_entry VAR_16;
 struct tffs_key_name_table VAR_17;

 VAR_7 = FUNC_0(VAR_12[0]);

 FUNC_11(VAR_11, VAR_12);

 VAR_15 = FUNC_3(VAR_5, "r");

 if (!VAR_15) {
  FUNC_4(VAR_9, "ERROR: Failed to open tffs input file %s\n",
   VAR_5);
  goto out;
 }

 if (VAR_10 == 0) {
  FUNC_7(VAR_15, 0L, VAR_2);
  VAR_10 = FUNC_8(VAR_15);
  FUNC_7(VAR_15, 0L, VAR_3);
 }

 VAR_14 = FUNC_9(VAR_10);

 if (FUNC_5(VAR_14, 1, VAR_10, VAR_15) != VAR_10) {
  FUNC_4(VAR_9, "ERROR: Failed read tffs file %s\n",
   VAR_5);
  goto out_free;
 }

 if (!FUNC_2(VAR_14, VAR_4, &VAR_16)) {
  FUNC_4(VAR_9,"ERROR: No name table found in tffs file %s\n",
   VAR_5);
  FUNC_4(VAR_9,"       Is byte-swapping (-b) required?\n");
  goto out_free;
 }

 FUNC_10(&VAR_16, &VAR_17);
 if (VAR_17.size < 1) {
  FUNC_4(VAR_9, "ERROR: No name table found in tffs file %s\n",
   VAR_5);
  goto out_free_names;
 }

 if (VAR_6) {
  FUNC_12(&VAR_17);
  VAR_13 = VAR_1;
 } else if (VAR_8) {
  VAR_13 = FUNC_13(VAR_14, &VAR_17);
 } else {
  VAR_13 = FUNC_14(VAR_14, &VAR_17);
 }

out_free_names:
 FUNC_6(VAR_17.entries);
out_free:
 FUNC_1(VAR_15);
 FUNC_6(VAR_14);
out:
 return VAR_13;
}
