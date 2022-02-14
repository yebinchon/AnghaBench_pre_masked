
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct widget_attribute {int dummy; } ;
struct hdac_device {int dummy; } ;
typedef int ssize_t ;
typedef int hda_nid_t ;


 int FUNC_0 (struct hdac_device*,int ) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct hdac_device *VAR_0, hda_nid_t VAR_1,
   struct widget_attribute *VAR_2, char *VAR_3)
{
 return FUNC_1(VAR_3, "0x%08x\n", FUNC_0(VAR_0, VAR_1));
}
