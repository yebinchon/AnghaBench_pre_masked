
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tffs_key_name_table {int size; int entries; } ;
struct tffs_entry {int val; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,struct tffs_entry*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ) ;
 char* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_5 (char*,int ) ;
 int FUNC_6 (struct tffs_entry*,struct tffs_key_name_table*) ;
 int FUNC_7 (int,char**) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_8 () ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_9 (struct tffs_key_name_table*) ;
 int FUNC_10 (struct tffs_key_name_table*) ;
 int FUNC_11 (struct tffs_key_name_table*) ;
 int VAR_10 ;

int FUNC_12(int VAR_11, char *VAR_12[])
{
 int VAR_13 = VAR_0;
 struct tffs_entry VAR_14;
 struct tffs_key_name_table VAR_15;

 VAR_7 = FUNC_0(VAR_12[0]);

 FUNC_7(VAR_11, VAR_12);

 VAR_5 = FUNC_5(VAR_4, VAR_2);
 if (VAR_5 < 0) {
  FUNC_3(VAR_10, "ERROR: Failed to open tffs device %s\n",
   VAR_4);
  goto out;
 }

 if (!FUNC_8()) {
  FUNC_3(VAR_10, "ERROR: Parsing blocks from tffs device %s failed\n", VAR_4);
  FUNC_3(VAR_10, "       Is byte-swapping (-b) required?\n");
  goto out_close;
 }

 if (!FUNC_2(VAR_3, &VAR_14)) {
  FUNC_3(VAR_10, "ERROR: No name table found on tffs device %s\n",
   VAR_4);
  goto out_free_sectors;
 }

 FUNC_6(&VAR_14, &VAR_15);
 if (VAR_15.size < 1) {
  FUNC_3(VAR_10, "ERROR: No name table found on tffs device %s\n",
   VAR_4);
  goto out_free_entry;
 }

 if (VAR_6) {
  FUNC_9(&VAR_15);
  VAR_13 = VAR_1;
 } else if (VAR_9) {
  VAR_13 = FUNC_10(&VAR_15);
 } else {
  VAR_13 = FUNC_11(&VAR_15);
 }

 FUNC_4(VAR_15.entries);
out_free_entry:
 FUNC_4(VAR_14.val);
out_free_sectors:
 FUNC_4(VAR_8);
out_close:
 FUNC_1(VAR_5);
out:
 return VAR_13;
}
