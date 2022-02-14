
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_ntfs_file {int dummy; } ;
struct grub_ntfs_attr {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (struct grub_ntfs_attr*,unsigned char) ;
 int FUNC_1 (struct grub_ntfs_attr*) ;
 int VAR_2 ;
 int FUNC_2 (struct grub_ntfs_attr*,struct grub_ntfs_file*) ;

__attribute__((used)) static char *
FUNC_3 (struct grub_ntfs_attr *VAR_3, struct grub_ntfs_file *VAR_4,
      unsigned char VAR_5)
{
  char *VAR_6;

  FUNC_2 (VAR_3, VAR_4);
  if ((VAR_6 = FUNC_0 (VAR_3, VAR_5)) == ((void*)0))
    return ((void*)0);
  if ((VAR_3->flags & VAR_0) == 0)
    {
      while (1)
 {
   if ((VAR_6 = FUNC_0 (VAR_3, VAR_5)) == ((void*)0))
     break;
   if (VAR_3->flags & VAR_0)
     return VAR_6;
 }
      VAR_2 = VAR_1;
      FUNC_1 (VAR_3);
      FUNC_2 (VAR_3, VAR_4);
      VAR_6 = FUNC_0 (VAR_3, VAR_5);
    }
  return VAR_6;
}
