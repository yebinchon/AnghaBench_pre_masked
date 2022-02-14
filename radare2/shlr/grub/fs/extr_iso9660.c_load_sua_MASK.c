
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_iso9660_data {int disk; } ;


 scalar_t__ FUNC_0 (int ,int,int,int,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int) ;

__attribute__((used)) static char *
FUNC_3 (struct grub_iso9660_data *VAR_0, int VAR_1, int VAR_2,
   int VAR_3)
{
  char *VAR_4;

  VAR_4 = FUNC_2 (VAR_3);
  if (!VAR_4)
    return 0;

  if (FUNC_0 (VAR_0->disk, VAR_1, VAR_2, VAR_3, VAR_4))
    {
      FUNC_1 (VAR_4);
      return 0;
    }

  return VAR_4;
}
