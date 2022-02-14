
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_device {int dummy; } ;
typedef int hda_nid_t ;


 scalar_t__ FUNC_0 (struct hdac_device*,unsigned int,int,unsigned int*) ;
 unsigned int FUNC_1 (struct hdac_device*,int ,unsigned int,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_2(struct hdac_device *VAR_0, hda_nid_t VAR_1,
   int VAR_2, unsigned int VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_3, VAR_4);
 unsigned int VAR_6;

 if (FUNC_0(VAR_0, VAR_5, VAR_2, &VAR_6))
  return -1;

 return VAR_6;
}
