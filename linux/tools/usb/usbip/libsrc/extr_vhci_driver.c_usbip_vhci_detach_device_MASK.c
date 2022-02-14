
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int detach_attr_path ;
typedef int buff ;
struct TYPE_2__ {int hc_device; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int,char*,...) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_4 (char*,char*,int ) ;

int FUNC_5(uint8_t VAR_2)
{
 char VAR_3[VAR_0];
 char VAR_4[] = "detach";
 char VAR_5[200];
 const char *VAR_6;
 int VAR_7;

 FUNC_1(VAR_5, sizeof(VAR_5), "%u", VAR_2);
 FUNC_0("writing: %s", VAR_5);

 VAR_6 = FUNC_3(VAR_1->hc_device);
 FUNC_1(VAR_3, sizeof(VAR_3), "%s/%s",
   VAR_6, VAR_4);
 FUNC_0("detach attribute path: %s", VAR_3);

 VAR_7 = FUNC_4(VAR_3, VAR_5, FUNC_2(VAR_5));
 if (VAR_7 < 0) {
  FUNC_0("write_sysfs_attribute failed");
  return -1;
 }

 FUNC_0("detached port: %d", VAR_2);

 return 0;
}
