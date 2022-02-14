
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int buff ;
typedef int attach_attr_path ;
struct TYPE_2__ {int hc_device; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int,char*,...) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_4 (char*,char*,int ) ;

int FUNC_5(uint8_t VAR_2, int VAR_3, uint32_t VAR_4,
  uint32_t VAR_5) {
 char VAR_6[200];
 char VAR_7[VAR_0];
 char VAR_8[] = "attach";
 const char *VAR_9;
 int VAR_10;

 FUNC_1(VAR_6, sizeof(VAR_6), "%u %d %u %u",
   VAR_2, VAR_3, VAR_4, VAR_5);
 FUNC_0("writing: %s", VAR_6);

 VAR_9 = FUNC_3(VAR_1->hc_device);
 FUNC_1(VAR_7, sizeof(VAR_7), "%s/%s",
   VAR_9, VAR_8);
 FUNC_0("attach attribute path: %s", VAR_7);

 VAR_10 = FUNC_4(VAR_7, VAR_6, FUNC_2(VAR_6));
 if (VAR_10 < 0) {
  FUNC_0("write_sysfs_attribute failed");
  return -1;
 }

 FUNC_0("attached port: %d", VAR_2);

 return 0;
}
