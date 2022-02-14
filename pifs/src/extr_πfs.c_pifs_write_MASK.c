
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_file_info {int fh; } ;
typedef int off_t ;


 int VAR_0 ;
 short VAR_1 ;
 int VAR_2 ;
 char const FUNC_0 (short) ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int ,short*,int) ;

__attribute__((used)) static int FUNC_3(const char *VAR_3, const char *VAR_4, size_t VAR_5,
                      off_t VAR_6, struct fuse_file_info *VAR_7)
{
  int VAR_8 = FUNC_1(VAR_7->fh, VAR_6 * 2, VAR_0);
  if (VAR_8 == -1) {
    return -VAR_2;
  }

  for (size_t VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
    short VAR_10;
    for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
      if (FUNC_0(VAR_10) == *VAR_4) {
        break;
      }
    }
    VAR_8 = FUNC_2(VAR_7->fh, &VAR_10, sizeof VAR_10);
    if (VAR_8 == -1) {
      return -VAR_2;
    }
    VAR_4++;
  }

  return VAR_5;
}
