
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int **** dirent ;
typedef int cdev_name ;
struct TYPE_4__ {int max_cdev_instance; TYPE_1__* cdi; int nr_cooling_dev; } ;
struct TYPE_3__ {int instance; int flag; int type; } ;
typedef int DIR ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int VAR_7 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ******) ;
 int FUNC_3 (char*,int ,int) ;
 int * FUNC_4 (char*) ;
 TYPE_2__ VAR_8 ;
 int FUNC_5 (char*,int *******,int ,int ) ;
 int FUNC_6 (char*,int,char*,char*,char*,int) ;
 int VAR_9 ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (char*,char*,int ) ;
 int FUNC_9 (int ,char*,...) ;

__attribute__((used)) static int FUNC_10(void)
{
 DIR *VAR_10;
 struct dirent **VAR_11;
 char VAR_12[256];
 int VAR_13, VAR_14, VAR_15 = 0;

 if (!VAR_8.nr_cooling_dev) {
  FUNC_1(VAR_9, "No cooling devices found\n");
  return 0;
 }
 for (VAR_13 = 0; VAR_13 <= VAR_8.max_cdev_instance; VAR_13++) {
  FUNC_3(VAR_12, 0, sizeof(VAR_12));
  FUNC_6(VAR_12, 256, "%s/%s%d", VAR_5, VAR_0, VAR_13);

  VAR_10 = FUNC_4(VAR_12);
  if (!VAR_10) {
   FUNC_9(VAR_4, "Cooling dev %s skipped\n", VAR_12);



   continue;
  }

  VAR_14 = FUNC_5(VAR_12, &VAR_11, 0, VAR_6);
  if (VAR_14 < 0)
   FUNC_9(VAR_3, "scandir failed in %s", VAR_12);
  else {
   FUNC_8(VAR_12, "type", VAR_8.cdi[VAR_15].type);
   VAR_8.cdi[VAR_15].instance = VAR_13;
   if (FUNC_7(VAR_8.cdi[VAR_15].type, VAR_7)) {
    VAR_8.cdi[VAR_15].flag |= VAR_1;
    FUNC_9(VAR_2, "control cdev id %d\n", VAR_13);
   }
   while (VAR_14--)
    FUNC_2(VAR_11[VAR_14]);
   FUNC_2(VAR_11);
  }
  FUNC_0(VAR_10);
  VAR_15++;
 }
 return 0;
}
