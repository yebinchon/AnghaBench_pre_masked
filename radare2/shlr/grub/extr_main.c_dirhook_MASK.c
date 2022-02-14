
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_dirhook_info {int mtime; scalar_t__ dir; } ;


 int FUNC_0 (char*,char,int,char const*) ;

int FUNC_1 (const char *VAR_0, const struct grub_dirhook_info *VAR_1, void *VAR_2) {


 FUNC_0 ("DIRFILE: %c (%d) %s\n", VAR_1->dir?'d':'f',
  VAR_1->mtime, VAR_0);
 return 0;
}
