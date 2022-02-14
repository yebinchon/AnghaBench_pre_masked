
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_file_info {scalar_t__ fh; } ;
typedef int DIR ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(const char *VAR_1, int VAR_2,
                         struct fuse_file_info *VAR_3)
{
  int VAR_4 = FUNC_0((DIR *)VAR_3->fh);
  if (VAR_4 == -1) {
    return -VAR_0;
  }

  int VAR_5 = VAR_2 ? FUNC_1(VAR_4) : FUNC_2(VAR_4);
  return VAR_5 == -1 ? -VAR_0 : VAR_5;
}
