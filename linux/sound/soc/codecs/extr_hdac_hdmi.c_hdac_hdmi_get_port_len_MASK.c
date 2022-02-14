
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_device {int dummy; } ;
typedef int hda_nid_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_0 (struct hdac_device*,int ) ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (struct hdac_device*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct hdac_device *VAR_4, hda_nid_t VAR_5)
{
 unsigned int VAR_6;
 unsigned int VAR_7, VAR_8;

 VAR_6 = FUNC_0(VAR_4, VAR_5);
 VAR_7 = FUNC_1(VAR_6);

 if (!(VAR_6 & VAR_2) || (VAR_7 != VAR_3))
  return 0;

 VAR_8 = FUNC_2(VAR_4, VAR_5, VAR_1);
 if (VAR_8 == -1)
  return VAR_8;

 return VAR_8 & VAR_0;
}
