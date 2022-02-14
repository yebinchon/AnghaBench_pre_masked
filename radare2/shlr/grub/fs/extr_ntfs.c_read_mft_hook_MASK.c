
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int grub_uint32_t ;
typedef int grub_disk_addr_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static void
FUNC_1 (grub_disk_addr_t VAR_2, unsigned VAR_3,
        unsigned VAR_4, void *VAR_5)
{
  grub_uint32_t **VAR_6 = VAR_5;

  if (*VAR_6)
    {
      if ((VAR_3 != 0) || (VAR_4 != VAR_0))
 FUNC_0 (VAR_1, "invalid mft location");
      **VAR_6 = VAR_2;
      *VAR_6 = 0;
    }
}
