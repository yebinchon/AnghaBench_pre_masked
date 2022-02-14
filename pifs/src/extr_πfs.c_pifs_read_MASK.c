
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_file_info {int fh; } ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (short) ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int ,short*,int) ;

__attribute__((used)) static int FUNC_3(const char *VAR_2, char *VAR_3, size_t VAR_4, off_t VAR_5,
                     struct fuse_file_info *VAR_6)
{
  int VAR_7 = FUNC_1(VAR_6->fh, VAR_5 * 2, VAR_0);
  if (VAR_7 == -1) {
    return -VAR_1;
  }

  for (size_t VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
    short VAR_9;
    VAR_7 = FUNC_2(VAR_6->fh, &VAR_9, sizeof VAR_9);
    if (VAR_7 == -1) {
      return -VAR_1;
    } else if (VAR_7 == 0) {
      return VAR_8;
    }
    *VAR_3 = (char) FUNC_0(VAR_9);
    VAR_3++;
  }

  return VAR_4;
}
