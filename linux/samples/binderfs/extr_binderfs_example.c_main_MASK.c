
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct binderfs_device {char* name; int major; int minor; int member_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (int,int ,struct binderfs_device*) ;
 int FUNC_4 (char*,char*,int ) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int *,char*,char*,int,int ) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (char*,int,int,char*) ;
 int VAR_10 ;
 char* FUNC_9 (int) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int ) ;

int FUNC_13(int VAR_11, char *VAR_12[])
{
 int VAR_13, VAR_14, VAR_15;
 size_t VAR_16;
 struct binderfs_device VAR_17 = { 0 };

 VAR_14 = FUNC_12(VAR_1);
 if (VAR_14 < 0) {
  FUNC_2(VAR_10, "%s - Failed to unshare mount namespace\n",
   FUNC_9(VAR_9));
  FUNC_1(VAR_3);
 }

 VAR_14 = FUNC_6(((void*)0), "/", ((void*)0), VAR_6 | VAR_5, 0);
 if (VAR_14 < 0) {
  FUNC_2(VAR_10, "%s - Failed to mount / as private\n",
   FUNC_9(VAR_9));
  FUNC_1(VAR_3);
 }

 VAR_14 = FUNC_5("/dev/binderfs", 0755);
 if (VAR_14 < 0 && VAR_9 != VAR_2) {
  FUNC_2(VAR_10, "%s - Failed to create binderfs mountpoint\n",
   FUNC_9(VAR_9));
  FUNC_1(VAR_3);
 }

 VAR_14 = FUNC_6(((void*)0), "/dev/binderfs", "binder", 0, 0);
 if (VAR_14 < 0) {
  FUNC_2(VAR_10, "%s - Failed to mount binderfs\n",
   FUNC_9(VAR_9));
  FUNC_1(VAR_3);
 }

 FUNC_4(VAR_17.name, "my-binder", FUNC_10("my-binder"));

 VAR_13 = FUNC_7("/dev/binderfs/binder-control", VAR_8 | VAR_7);
 if (VAR_13 < 0) {
  FUNC_2(VAR_10, "%s - Failed to open binder-control device\n",
   FUNC_9(VAR_9));
  FUNC_1(VAR_3);
 }

 VAR_14 = FUNC_3(VAR_13, VAR_0, &VAR_17);
 VAR_15 = VAR_9;
 FUNC_0(VAR_13);
 VAR_9 = VAR_15;
 if (VAR_14 < 0) {
  FUNC_2(VAR_10, "%s - Failed to allocate new binder device\n",
   FUNC_9(VAR_9));
  FUNC_1(VAR_3);
 }

 FUNC_8("Allocated new binder device with major %d, minor %d, and name %s\n",
        VAR_17.major, VAR_17.minor, VAR_17.name);

 VAR_14 = FUNC_11("/dev/binderfs/my-binder");
 if (VAR_14 < 0) {
  FUNC_2(VAR_10, "%s - Failed to delete binder device\n",
   FUNC_9(VAR_9));
  FUNC_1(VAR_3);
 }


 FUNC_1(VAR_4);
}
