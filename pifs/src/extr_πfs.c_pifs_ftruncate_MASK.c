
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_file_info {int fh; } ;
typedef int off_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1(const char *VAR_1, off_t VAR_2,
                          struct fuse_file_info *VAR_3)
{
  int VAR_4 = FUNC_0(VAR_3->fh, VAR_2 * 2);
  return VAR_4 == -1 ? -VAR_0 : VAR_4;
}
