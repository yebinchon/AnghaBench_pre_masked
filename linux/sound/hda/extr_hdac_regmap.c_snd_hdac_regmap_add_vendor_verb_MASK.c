
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_device {int vendor_verbs; } ;


 int VAR_0 ;
 unsigned int* FUNC_0 (int *) ;

int FUNC_1(struct hdac_device *VAR_1,
        unsigned int VAR_2)
{
 unsigned int *VAR_3 = FUNC_0(&VAR_1->vendor_verbs);

 if (!VAR_3)
  return -VAR_0;
 *VAR_3 = VAR_2 | 0x800;
 return 0;
}
