
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tz_info {int cdev_binding; int* trip_binding; int nr_cdev; } ;
struct dirent {scalar_t__ d_type; char* d_name; } ;
typedef int cdev_name_linked ;
struct TYPE_2__ {int nr_cooling_dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (char*,int ,int) ;
 TYPE_1__ VAR_6 ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,int,char*,char*,char*) ;
 int FUNC_4 (char*,char*,unsigned long*) ;
 int FUNC_5 (int ,char*,...) ;

__attribute__((used)) static int FUNC_6(struct dirent *VAR_7, char *VAR_8,
   struct tz_info *VAR_9, int VAR_10, int VAR_11)
{
 unsigned long VAR_12 = 0;
 char VAR_13[256];
 char VAR_14[256];
 char VAR_15[256];
 int VAR_16;

 if (VAR_7->d_type == VAR_0) {
  FUNC_5(VAR_3, "TZ%d: cdev: %s cid %d\n", VAR_10, VAR_7->d_name,
   VAR_11);
  VAR_9->nr_cdev++;
  if (VAR_9->nr_cdev > VAR_6.nr_cooling_dev) {
   FUNC_5(VAR_4, "Err: Too many cdev? %d\n",
    VAR_9->nr_cdev);
   return -VAR_1;
  }

  FUNC_3(VAR_14, 256, "%s/%s", VAR_8, VAR_7->d_name);
  FUNC_1(VAR_13, 0, sizeof(VAR_13));
  if (FUNC_2(VAR_14, VAR_13,
    sizeof(VAR_13) - 1) != -1) {
   VAR_16 = FUNC_0(VAR_13, 1,
      sizeof("device") - 1);
   FUNC_5(VAR_3, "cdev %s linked to %s : %d\n",
    VAR_14, VAR_13, VAR_16);
   VAR_9->cdev_binding |= (1 << VAR_16);




   FUNC_3(VAR_15, 256, "%s%s", VAR_7->d_name,
    "_trip_point");
   FUNC_4(VAR_8, VAR_15,
     &VAR_12);



   if (VAR_12 > VAR_5)
    VAR_12 = 0;
   VAR_9->trip_binding[VAR_16] |= 1 << VAR_12;
   FUNC_5(VAR_3, "cdev %s -> trip:%lu: 0x%lx %d\n",
    VAR_14, VAR_12,
    VAR_9->trip_binding[VAR_16],
    VAR_16);


  }
  return 0;
 }

 return -VAR_2;
}
