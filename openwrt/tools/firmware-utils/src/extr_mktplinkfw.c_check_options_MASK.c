
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct fw_header {int dummy; } ;
struct TYPE_8__ {int rootfs_ofs; scalar_t__ fw_max_len; scalar_t__ kernel_ep; scalar_t__ kernel_la; } ;
struct TYPE_7__ {int file_size; int * file_name; } ;


 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_2__* FUNC_3 (int ,int *) ;
 int FUNC_4 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 TYPE_1__ VAR_13 ;
 scalar_t__ VAR_14 ;
 TYPE_1__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 TYPE_2__* VAR_18 ;
 int * VAR_19 ;
 int VAR_20 ;
 int * VAR_21 ;
 int VAR_22 ;
 int * VAR_23 ;
 int * VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 TYPE_1__ VAR_28 ;
 int VAR_29 ;
 int FUNC_6 (int,char*,int *,int *,int *) ;
 void* FUNC_7 (int *,int *,int ) ;

__attribute__((used)) static int FUNC_8(void)
{
 int VAR_30;
 int VAR_31;

 if (VAR_13.file_name) {
  VAR_30 = FUNC_5(&VAR_13);
  if (VAR_30)
   return VAR_30;

  return 0;
 } else if (VAR_4) {
  FUNC_2("no firmware for inspection specified");
  return -1;
 }

 if (VAR_23 == ((void*)0)) {
  FUNC_2("hardware id not specified");
  return -1;
 }
 VAR_11 = FUNC_7(VAR_23, ((void*)0), 0);

 if (!VAR_2 && VAR_19 == ((void*)0)) {
  FUNC_2("flash layout is not specified");
  return -1;
 }

 if (VAR_24)
  VAR_12 = FUNC_7(VAR_24, ((void*)0), 0);
 else
  VAR_12 = 1;

 if (VAR_3) {
  VAR_25 = FUNC_4(VAR_3);
  if (!VAR_25) {
   FUNC_2("unknown region code \"%s\"", VAR_3);
   return -1;
  }
 }

 if (VAR_2) {
  if (!VAR_16 || !VAR_14) {
   FUNC_2("kernel loading address and entry point must be specified for combined image");
   return -1;
  }
 } else {
  VAR_18 = FUNC_3(VAR_20, VAR_19);
  if (VAR_18 == ((void*)0)) {
   FUNC_2("unknown flash layout \"%s\"", VAR_19);
   return -1;
  }

  if (!VAR_16)
   VAR_16 = VAR_18->kernel_la;
  if (!VAR_14)
   VAR_14 = VAR_18->kernel_ep;
  if (!VAR_29)
   VAR_29 = VAR_18->rootfs_ofs;

  if (VAR_26 > VAR_18->fw_max_len) {
   FUNC_2("reserved space is not valid");
   return -1;
  }
 }

 if (VAR_15.file_name == ((void*)0)) {
  FUNC_2("no kernel image specified");
  return -1;
 }

 VAR_30 = FUNC_5(&VAR_15);
 if (VAR_30)
  return VAR_30;

 VAR_17 = VAR_15.file_size;

 if (!VAR_2) {
  VAR_5 = VAR_18->fw_max_len - VAR_26;

  if (VAR_28.file_name == ((void*)0)) {
   FUNC_2("no rootfs image specified");
   return -1;
  }

  VAR_30 = FUNC_5(&VAR_28);
  if (VAR_30)
   return VAR_30;

  if (VAR_27) {
   VAR_17 += sizeof(struct fw_header);
   VAR_29 = FUNC_0(VAR_17, VAR_27);
   VAR_17 -= sizeof(struct fw_header);

   FUNC_1("rootfs offset aligned to 0x%u", VAR_29);

   VAR_31 = VAR_17 + VAR_28.file_size - (VAR_5 - sizeof(struct fw_header));
   if (VAR_31 > 0) {
    FUNC_2("images are too big by %i bytes", VAR_31);
    return -1;
   }
  } else {
   VAR_31 = VAR_15.file_size - (VAR_29 - sizeof(struct fw_header));
   if (VAR_31 > 0) {
    FUNC_2("kernel image is too big by %i bytes", VAR_31);
    return -1;
   }

   VAR_31 = VAR_28.file_size - (VAR_5 - VAR_29);
   if (VAR_31 > 0) {
    FUNC_2("rootfs image is too big by %i bytes", VAR_31);
    return -1;
   }
  }
 }

 if (VAR_21 == ((void*)0)) {
  FUNC_2("no output file specified");
  return -1;
 }

 VAR_30 = FUNC_6(VAR_6, "%d.%d.%d", &VAR_7, &VAR_9, &VAR_8);
 if (VAR_30 != 3) {
  FUNC_2("invalid firmware version '%s'", VAR_6);
  return -1;
 }

 if (VAR_22 == 1) {
  VAR_10 = VAR_0;
 } else if (VAR_22 == 2) {
  VAR_10 = VAR_1;
 } else {
  FUNC_2("invalid header version '%u'", VAR_22);
  return -1;
 }

 return 0;
}
