
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int grub_size_t ;
typedef int grub_off_t ;
typedef int grub_err_t ;
typedef int grub_disk_t ;
typedef int grub_disk_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static grub_err_t
FUNC_0 (grub_disk_t VAR_3, grub_disk_addr_t *VAR_4,
   grub_off_t *VAR_5, grub_size_t VAR_6)
{
  *VAR_4 += *VAR_5 >> VAR_0;
  *VAR_5 &= VAR_1 - 1;
  return VAR_2;

}
