
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct widget_attribute {int dummy; } ;
struct hdac_device {int dummy; } ;
typedef int ssize_t ;
typedef int hda_nid_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct hdac_device*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct hdac_device*,int ,int ,int ,unsigned int*) ;
 int FUNC_3 (char*,char*,unsigned int) ;

__attribute__((used)) static ssize_t FUNC_4(struct hdac_device *VAR_2, hda_nid_t VAR_3,
       struct widget_attribute *VAR_4, char *VAR_5)
{
 unsigned int VAR_6;

 if (FUNC_1(FUNC_0(VAR_2, VAR_3)) != VAR_1)
  return 0;
 if (FUNC_2(VAR_2, VAR_3, VAR_0, 0, &VAR_6))
  return 0;
 return FUNC_3(VAR_5, "0x%08x\n", VAR_6);
}
