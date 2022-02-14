
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {char* name; char* num_requests; char* read_fw_idx; scalar_t__ sync_direct; scalar_t__ into_buf; scalar_t__ send_uevent; } ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char*,scalar_t__,char*,...) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_3,
      struct device_attribute *VAR_4,
      char *VAR_5)
{
 int VAR_6 = 0;

 FUNC_1(&VAR_2);

 VAR_6 += FUNC_3(VAR_5, VAR_0 - VAR_6,
   "Custom trigger configuration for: %s\n",
   FUNC_0(VAR_3));

 if (VAR_1->name)
  VAR_6 += FUNC_3(VAR_5+VAR_6, VAR_0 - VAR_6,
    "name:\t%s\n",
    VAR_1->name);
 else
  VAR_6 += FUNC_3(VAR_5+VAR_6, VAR_0 - VAR_6,
    "name:\tEMTPY\n");

 VAR_6 += FUNC_3(VAR_5+VAR_6, VAR_0 - VAR_6,
   "num_requests:\t%u\n", VAR_1->num_requests);

 VAR_6 += FUNC_3(VAR_5+VAR_6, VAR_0 - VAR_6,
   "send_uevent:\t\t%s\n",
   VAR_1->send_uevent ?
   "FW_ACTION_HOTPLUG" :
   "FW_ACTION_NOHOTPLUG");
 VAR_6 += FUNC_3(VAR_5+VAR_6, VAR_0 - VAR_6,
   "into_buf:\t\t%s\n",
   VAR_1->into_buf ? "true" : "false");
 VAR_6 += FUNC_3(VAR_5+VAR_6, VAR_0 - VAR_6,
   "sync_direct:\t\t%s\n",
   VAR_1->sync_direct ? "true" : "false");
 VAR_6 += FUNC_3(VAR_5+VAR_6, VAR_0 - VAR_6,
   "read_fw_idx:\t%u\n", VAR_1->read_fw_idx);

 FUNC_2(&VAR_2);

 return VAR_6;
}
