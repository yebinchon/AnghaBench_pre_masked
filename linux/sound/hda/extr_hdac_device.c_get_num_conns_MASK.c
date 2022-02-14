
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_device {int dummy; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_0 (struct hdac_device*,int ) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (struct hdac_device*,int ,int ) ;

__attribute__((used)) static unsigned int FUNC_3(struct hdac_device *VAR_3, hda_nid_t VAR_4)
{
 unsigned int VAR_5 = FUNC_0(VAR_3, VAR_4);
 unsigned int VAR_6;

 if (!(VAR_5 & VAR_1) &&
     FUNC_1(VAR_5) != VAR_2)
  return 0;

 VAR_6 = FUNC_2(VAR_3, VAR_4, VAR_0);
 if (VAR_6 == -1)
  VAR_6 = 0;
 return VAR_6;
}
