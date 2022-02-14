
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct widget_attribute {int dummy; } ;
struct hdac_device {int dummy; } ;
typedef int ssize_t ;
typedef int hda_nid_t ;


 int FUNC_0 (int*) ;
 int FUNC_1 (struct hdac_device*,int,int*,int ) ;
 int FUNC_2 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_3(struct hdac_device *VAR_0, hda_nid_t VAR_1,
    struct widget_attribute *VAR_2, char *VAR_3)
{
 hda_nid_t VAR_4[32];
 int VAR_5, VAR_6;
 ssize_t VAR_7 = 0;

 VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_4, FUNC_0(VAR_4));
 if (VAR_6 <= 0)
  return VAR_6;
 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
  VAR_7 += FUNC_2(VAR_3 + VAR_7, "%s0x%02x", VAR_5 ? " " : "", VAR_4[VAR_5]);
 VAR_7 += FUNC_2(VAR_3 + VAR_7, "\n");
 return VAR_7;
}
