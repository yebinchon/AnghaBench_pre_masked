
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_file_info {int fh; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(const char *VAR_1, int VAR_2,
                      struct fuse_file_info *VAR_3)
{
  int VAR_4 = VAR_2 ? FUNC_0(VAR_3->fh) : FUNC_1(VAR_3->fh);
  return VAR_4 == -1 ? -VAR_0 : VAR_4;
}
