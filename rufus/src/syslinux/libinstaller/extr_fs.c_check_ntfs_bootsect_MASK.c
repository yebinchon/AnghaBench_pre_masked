
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntfs_boot_sector {int bsOemName; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,char*,int) ;

__attribute__((used)) static const char *FUNC_1(const void *VAR_1, int *VAR_2)
{
    const struct ntfs_boot_sector *VAR_3 = VAR_1;

    if (FUNC_0(&VAR_3->bsOemName, "NTFS    ", 8) &&
 FUNC_0(&VAR_3->bsOemName, "MSWIN4.0", 8) &&
 FUNC_0(&VAR_3->bsOemName, "MSWIN4.1", 8))
 return "unknown OEM name but claims NTFS";

    if (VAR_2)
 *VAR_2 = VAR_0;

    return ((void*)0);
}
