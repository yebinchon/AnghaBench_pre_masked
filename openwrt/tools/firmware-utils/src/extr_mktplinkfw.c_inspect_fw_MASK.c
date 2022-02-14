
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct fw_header {int version; int boot_len; int unk2; int unk3; char* vendor_name; char* fw_version; int hw_id; int hw_rev; int region_code; int kernel_ofs; int kernel_len; int kernel_la; int kernel_ep; int rootfs_ofs; int rootfs_len; int boot_ofs; int fw_length; int * md5sum2; int * md5sum1; } ;
typedef int md5sum ;
struct TYPE_3__ {int file_size; char* file_name; } ;
typedef int FILE ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int,int,int *) ;
 int FUNC_5 (char*,int,int *) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (char*,int *,char*) ;
 int FUNC_9 (char*,char*) ;
 TYPE_1__ VAR_6 ;
 char* FUNC_10 (int) ;
 int * VAR_7 ;
 int * VAR_8 ;
 scalar_t__ FUNC_11 (int *,int *,int) ;
 int FUNC_12 (int *,int *,int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (char*,...) ;
 int FUNC_15 (TYPE_1__*,char*) ;
 int FUNC_16 (char*,char*,char*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (char*) ;

__attribute__((used)) static int FUNC_19(void)
{
 char *VAR_9;
 struct fw_header *VAR_10;
 uint8_t VAR_11[VAR_3];
 int VAR_12 = VAR_0;

 VAR_9 = FUNC_10(VAR_6.file_size);
 if (!VAR_9) {
  FUNC_0("no memory for buffer!\n");
  goto out;
 }

 VAR_12 = FUNC_15(&VAR_6, VAR_9);
 if (VAR_12)
  goto out_free_buf;
 VAR_10 = (struct fw_header *)VAR_9;

 FUNC_9("File name", VAR_6.file_name);
 FUNC_7("File size", VAR_6.file_size);

 if ((FUNC_13(VAR_10->version) != VAR_1) &&
     (FUNC_13(VAR_10->version) != VAR_2)) {
  FUNC_0("file does not seem to have V1/V2 header!\n");
  goto out_free_buf;
 }

 FUNC_7("Version 1 Header size", sizeof(struct fw_header));

 FUNC_12(VAR_11, VAR_10->md5sum1, sizeof(VAR_11));
 if (FUNC_13(VAR_10->boot_len) == 0)
  FUNC_12(VAR_10->md5sum1, VAR_8, sizeof(VAR_11));
 else
  FUNC_12(VAR_10->md5sum1, VAR_7, sizeof(VAR_11));
 FUNC_5(VAR_9, VAR_6.file_size, VAR_10->md5sum1);

 if (FUNC_11(VAR_11, VAR_10->md5sum1, sizeof(VAR_11))) {
  FUNC_8("Header MD5Sum1", VAR_11, "(*ERROR*)");
  FUNC_8("          --> expected", VAR_10->md5sum1, "");
 } else {
  FUNC_8("Header MD5Sum1", VAR_11, "(ok)");
 }
 if (FUNC_13(VAR_10->unk2) != 0)
  FUNC_7("Unknown value 2", VAR_10->unk2);
 FUNC_8("Header MD5Sum2", VAR_10->md5sum2,
                    "(purpose yet unknown, unchecked here)");
 if (FUNC_13(VAR_10->unk3) != 0)
  FUNC_7("Unknown value 3", VAR_10->unk3);

 FUNC_14("\n");

 FUNC_9("Vendor name", VAR_10->vendor_name);
 FUNC_9("Firmware version", VAR_10->fw_version);
 FUNC_6("Hardware ID", FUNC_13(VAR_10->hw_id));
 FUNC_6("Hardware Revision", FUNC_13(VAR_10->hw_rev));
 FUNC_6("Region code", FUNC_13(VAR_10->region_code));

 FUNC_14("\n");

 FUNC_7("Kernel data offset",
                    FUNC_13(VAR_10->kernel_ofs));
 FUNC_7("Kernel data length",
                    FUNC_13(VAR_10->kernel_len));
 FUNC_6("Kernel load address",
                 FUNC_13(VAR_10->kernel_la));
 FUNC_6("Kernel entry point",
                 FUNC_13(VAR_10->kernel_ep));
 FUNC_7("Rootfs data offset",
                    FUNC_13(VAR_10->rootfs_ofs));
 FUNC_7("Rootfs data length",
                    FUNC_13(VAR_10->rootfs_len));
 FUNC_7("Boot loader data offset",
                    FUNC_13(VAR_10->boot_ofs));
 FUNC_7("Boot loader data length",
                    FUNC_13(VAR_10->boot_len));
 FUNC_7("Total firmware length",
                    FUNC_13(VAR_10->fw_length));

 if (VAR_5) {
  FILE *VAR_13;
  char *VAR_14;

  FUNC_14("\n");

  VAR_14 = FUNC_10(FUNC_18(VAR_6.file_name) + 8);
  FUNC_16(VAR_14, "%s-kernel", VAR_6.file_name);
  FUNC_14("Extracting kernel to \"%s\"...\n", VAR_14);
  VAR_13 = FUNC_2(VAR_14, "w");
  if (VAR_13) {
   if (!FUNC_4(VAR_9 + FUNC_13(VAR_10->kernel_ofs),
               FUNC_13(VAR_10->kernel_len), 1, VAR_13)) {
    FUNC_0("error in fwrite(): %s", FUNC_17(VAR_4));
   }
   FUNC_1(VAR_13);
  } else {
   FUNC_0("error in fopen(): %s", FUNC_17(VAR_4));
  }
  FUNC_3(VAR_14);

  VAR_14 = FUNC_10(FUNC_18(VAR_6.file_name) + 8);
  FUNC_16(VAR_14, "%s-rootfs", VAR_6.file_name);
  FUNC_14("Extracting rootfs to \"%s\"...\n", VAR_14);
  VAR_13 = FUNC_2(VAR_14, "w");
  if (VAR_13) {
   if (!FUNC_4(VAR_9 + FUNC_13(VAR_10->rootfs_ofs),
               FUNC_13(VAR_10->rootfs_len), 1, VAR_13)) {
    FUNC_0("error in fwrite(): %s", FUNC_17(VAR_4));
   }
   FUNC_1(VAR_13);
  } else {
   FUNC_0("error in fopen(): %s", FUNC_17(VAR_4));
  }
  FUNC_3(VAR_14);
 }

 out_free_buf:
 FUNC_3(VAR_9);
 out:
 return VAR_12;
}
