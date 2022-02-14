
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_hfsplus_extent {int count; int start; } ;
typedef int grub_size_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1 (struct grub_hfsplus_extent *VAR_0,
    int *VAR_1)
{
  int VAR_2;
  grub_size_t VAR_3 = *VAR_1;


  for (VAR_2 = 0; VAR_2 < 8; VAR_2++)
    {
      if (VAR_3 < FUNC_0 (VAR_0[VAR_2].count))
 return FUNC_0 (VAR_0[VAR_2].start) + VAR_3;
      VAR_3 -= FUNC_0 (VAR_0[VAR_2].count);
    }

  *VAR_1 = VAR_3;
  return -1;
}
