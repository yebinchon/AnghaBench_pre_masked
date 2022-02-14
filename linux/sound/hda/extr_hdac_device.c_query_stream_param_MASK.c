
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_device {int afg; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct hdac_device*,int ,int ) ;

__attribute__((used)) static unsigned int FUNC_1(struct hdac_device *VAR_1, hda_nid_t VAR_2)
{
 unsigned int VAR_3 = FUNC_0(VAR_1, VAR_2, VAR_0);

 if (!VAR_3 || VAR_3 == -1)
  VAR_3 = FUNC_0(VAR_1, VAR_1->afg, VAR_0);
 if (!VAR_3 || VAR_3 == -1)
  return 0;
 return VAR_3;
}
