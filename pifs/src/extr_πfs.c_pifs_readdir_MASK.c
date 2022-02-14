
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_file_info {scalar_t__ fh; } ;
struct dirent {int d_off; int d_name; } ;
typedef int off_t ;
typedef int (* fuse_fill_dir_t ) (void*,int ,int *,int ) ;
typedef int DIR ;


 int VAR_0 ;
 struct dirent* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(const char *VAR_1, void *VAR_2, fuse_fill_dir_t VAR_3,
                       off_t VAR_4, struct fuse_file_info *VAR_5)
{
  DIR *VAR_6 = (DIR *) VAR_5->fh;
  if (VAR_4) {
    FUNC_1(VAR_6, VAR_4);
  }

  int VAR_7;
  do {
    VAR_0 = 0;
    struct dirent *VAR_8 = FUNC_0(VAR_6);
    if (!VAR_8) {
      if (VAR_0) {
        return -VAR_0;
      } else {
        break;
      }
    }

    VAR_7 = VAR_3(VAR_2, VAR_8->d_name, ((void*)0), VAR_8->d_off);
  } while (VAR_7 == 0);

  return 0;
}
