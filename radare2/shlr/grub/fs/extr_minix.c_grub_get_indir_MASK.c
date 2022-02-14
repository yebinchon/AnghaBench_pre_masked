
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_minix_sblock {int dummy; } ;
struct grub_minix_data {int version; int disk; struct grub_minix_sblock sblock; } ;
typedef int grub_uint32_t ;
typedef int grub_uint16_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int,int,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3 (int VAR_1, int VAR_2, struct grub_minix_data *VAR_3)
{
  struct grub_minix_sblock *VAR_4 = &VAR_3->sblock;
  if (VAR_3->version == 1)
    {
      grub_uint16_t VAR_5;
      FUNC_0 (VAR_3->disk,
        VAR_1 << VAR_0,
        sizeof (grub_uint16_t) * VAR_2,
        sizeof (grub_uint16_t), (char *) &VAR_5);
      return FUNC_1 (VAR_5);
    }
  else
    {
      grub_uint32_t VAR_6;
      FUNC_0 (VAR_3->disk,
        VAR_1 << VAR_0,
        sizeof (grub_uint32_t) * VAR_2,
        sizeof (grub_uint32_t), (char *) &VAR_6);
      return FUNC_2 (VAR_6);
    }
}
