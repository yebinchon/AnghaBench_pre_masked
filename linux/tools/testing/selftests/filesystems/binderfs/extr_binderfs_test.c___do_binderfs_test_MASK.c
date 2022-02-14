
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct binderfs_device {int protocol_version; int name; int minor; int major; int member_0; } ;
struct binder_version {int protocol_version; int name; int minor; int major; int member_0; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_8 ;
 int FUNC_2 (int,int ,struct binderfs_device*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (char*,int ,...) ;
 int FUNC_8 (int ,char*,int ) ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (int *,char*,char*,int ,int ) ;
 int FUNC_11 (char*,int) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char*,int ) ;
 int FUNC_16 (char*) ;

__attribute__((used)) static void FUNC_17(void)
{
 int VAR_9, VAR_10, VAR_11;
 size_t VAR_12;
 ssize_t VAR_13;
 bool VAR_14 = 0;
 struct binderfs_device VAR_15 = { 0 };
 struct binder_version VAR_16 = { 0 };

 FUNC_0();

 VAR_10 = FUNC_9("/dev/binderfs", 0755);
 if (VAR_10 < 0) {
  if (VAR_8 != VAR_2)
   FUNC_3(
    "%s - Failed to create binderfs mountpoint\n",
    FUNC_13(VAR_8));

  VAR_14 = 1;
 }

 VAR_10 = FUNC_10(((void*)0), "/dev/binderfs", "binder", 0, 0);
 if (VAR_10 < 0) {
  if (VAR_8 != VAR_3)
   FUNC_3("%s - Failed to mount binderfs\n",
        FUNC_13(VAR_8));

  VAR_14 ? : FUNC_12("/dev/binderfs");
  FUNC_4(
   "The Android binderfs filesystem is not available\n");
 }


 FUNC_5();

 FUNC_8(VAR_15.name, "my-binder", FUNC_14("my-binder"));

 VAR_9 = FUNC_11("/dev/binderfs/binder-control", VAR_7 | VAR_6);
 if (VAR_9 < 0)
  FUNC_3(
   "%s - Failed to open binder-control device\n",
   FUNC_13(VAR_8));

 VAR_10 = FUNC_2(VAR_9, VAR_0, &VAR_15);
 VAR_11 = VAR_8;
 FUNC_1(VAR_9);
 VAR_8 = VAR_11;
 if (VAR_10 < 0) {
  VAR_14 ? : FUNC_12("/dev/binderfs");
  FUNC_3(
   "%s - Failed to allocate new binder device\n",
   FUNC_13(VAR_8));
 }

 FUNC_7(
  "Allocated new binder device with major %d, minor %d, and name %s\n",
  VAR_15.major, VAR_15.minor, VAR_15.name);


 FUNC_5();

 VAR_9 = FUNC_11("/dev/binderfs/my-binder", VAR_6 | VAR_7);
 if (VAR_9 < 0) {
  VAR_14 ? : FUNC_12("/dev/binderfs");
  FUNC_3("%s - Failed to open my-binder device\n",
       FUNC_13(VAR_8));
 }

 VAR_10 = FUNC_2(VAR_9, VAR_1, &VAR_16);
 VAR_11 = VAR_8;
 FUNC_1(VAR_9);
 VAR_8 = VAR_11;
 if (VAR_10 < 0) {
  VAR_14 ? : FUNC_12("/dev/binderfs");
  FUNC_3(
   "%s - Failed to open perform BINDER_VERSION request\n",
   FUNC_13(VAR_8));
 }

 FUNC_7("Detected binder version: %d\n",
         VAR_16.protocol_version);


 FUNC_5();

 VAR_10 = FUNC_16("/dev/binderfs/my-binder");
 if (VAR_10 < 0) {
  VAR_14 ? : FUNC_12("/dev/binderfs");
  FUNC_3("%s - Failed to delete binder device\n",
       FUNC_13(VAR_8));
 }


 FUNC_5();

 VAR_10 = FUNC_16("/dev/binderfs/binder-control");
 if (!VAR_10) {
  VAR_14 ? : FUNC_12("/dev/binderfs");
  FUNC_3("Managed to delete binder-control device\n");
 } else if (VAR_8 != VAR_4) {
  VAR_14 ? : FUNC_12("/dev/binderfs");
  FUNC_3(
   "%s - Failed to delete binder-control device but exited with unexpected error code\n",
   FUNC_13(VAR_8));
 }


 FUNC_6();

on_error:
 VAR_10 = FUNC_15("/dev/binderfs", VAR_5);
 VAR_14 ?: FUNC_12("/dev/binderfs");
 if (VAR_10 < 0)
  FUNC_3("%s - Failed to unmount binderfs\n",
       FUNC_13(VAR_8));


 FUNC_5();
}
