
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct widget_attribute {int dummy; } ;
struct hdac_device {scalar_t__ afg; } ;
typedef int ssize_t ;
typedef scalar_t__ hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hdac_device*,scalar_t__) ;
 int FUNC_1 (struct hdac_device*,scalar_t__,int ) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct hdac_device *VAR_2, hda_nid_t VAR_3,
    struct widget_attribute *VAR_4, char *VAR_5)
{
 if (VAR_3 != VAR_2->afg && !(FUNC_0(VAR_2, VAR_3) & VAR_1))
  return 0;
 return FUNC_2(VAR_5, "0x%08x\n",
         FUNC_1(VAR_2, VAR_3, VAR_0));
}
