
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_file_info {scalar_t__ fh; } ;
typedef int DIR ;


 int FUNC_0 (int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(const char *VAR_1, struct fuse_file_info *VAR_2)
{
  int VAR_3 = FUNC_0((DIR *)VAR_2->fh);
  return VAR_3 == -1 ? -VAR_0 : VAR_3;
}
