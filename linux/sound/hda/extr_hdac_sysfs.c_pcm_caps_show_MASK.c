
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct widget_attribute {int dummy; } ;
struct hdac_device {int dummy; } ;
typedef int ssize_t ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int FUNC_0 (struct hdac_device*,int ) ;
 int FUNC_1 (struct hdac_device*,int ,int ) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct hdac_device *VAR_1, hda_nid_t VAR_2,
        struct widget_attribute *VAR_3, char *VAR_4)
{
 if (!FUNC_0(VAR_1, VAR_2))
  return 0;
 return FUNC_2(VAR_4, "0x%08x\n",
         FUNC_1(VAR_1, VAR_2, VAR_0));
}
