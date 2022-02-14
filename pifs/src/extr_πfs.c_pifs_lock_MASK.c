
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_file_info {int fh; } ;
struct flock {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,struct flock*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_1, struct fuse_file_info *VAR_2, int VAR_3,
                     struct flock *VAR_4)
{
  int VAR_5 = FUNC_0(VAR_2->fh, VAR_3, VAR_4);
  return VAR_5 == -1 ? -VAR_0 : VAR_5;
}
