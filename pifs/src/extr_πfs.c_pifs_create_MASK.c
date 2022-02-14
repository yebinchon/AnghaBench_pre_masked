
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_file_info {int fh; } ;
typedef int mode_t ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(const char *VAR_2, mode_t VAR_3,
                       struct fuse_file_info *VAR_4)
{
  FUNC_0(VAR_2);
  int VAR_5 = FUNC_1(VAR_1, VAR_3);
  VAR_4->fh = VAR_5;
  return VAR_5 == -1 ? -VAR_0 : 0;
}
