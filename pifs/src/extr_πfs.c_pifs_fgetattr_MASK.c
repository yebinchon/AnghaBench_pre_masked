
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct fuse_file_info {int fh; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct stat*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_1, struct stat *VAR_2,
                        struct fuse_file_info *VAR_3)
{
  int VAR_4 = FUNC_0(VAR_3->fh, VAR_2);
  return VAR_4 == -1 ? -VAR_0 : VAR_4;
}
