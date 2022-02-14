
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_device {scalar_t__ afg; } ;
typedef scalar_t__ hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hdac_device*,scalar_t__) ;
 unsigned int FUNC_1 (struct hdac_device*,scalar_t__,int ) ;

__attribute__((used)) static unsigned int FUNC_2(struct hdac_device *VAR_2, hda_nid_t VAR_3)
{
 unsigned int VAR_4 = 0;

 if (VAR_3 != VAR_2->afg &&
     (FUNC_0(VAR_2, VAR_3) & VAR_1))
  VAR_4 = FUNC_1(VAR_2, VAR_3, VAR_0);
 if (!VAR_4 || VAR_4 == -1)
  VAR_4 = FUNC_1(VAR_2, VAR_2->afg, VAR_0);
 if (!VAR_4 || VAR_4 == -1)
  return 0;
 return VAR_4;
}
