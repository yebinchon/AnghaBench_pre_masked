
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dummy_statfs_t {int f_blocks; int f_bfree; int f_bsize; int f_namelen; int f_namemax; } ;



__attribute__((used)) static int
FUNC_0(struct dummy_statfs_t *VAR_0)
{
 VAR_0->f_blocks = 262144;
 VAR_0->f_bfree = 131072;
 VAR_0->f_bsize = 512;
 VAR_0->f_namelen = 255;
 VAR_0->f_namemax = 255;

 return 0;
}
