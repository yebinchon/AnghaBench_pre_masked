
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_device {scalar_t__ afg; scalar_t__ mfg; } ;
typedef scalar_t__ hda_nid_t ;




 int FUNC_0 (struct hdac_device*,scalar_t__) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct hdac_device *VAR_0, hda_nid_t VAR_1)
{
 if (VAR_1 == VAR_0->afg || VAR_1 == VAR_0->mfg)
  return 1;
 switch (FUNC_1(FUNC_0(VAR_0, VAR_1))) {
 case 128:
 case 129:
  return 1;
 default:
  return 0;
 }
}
