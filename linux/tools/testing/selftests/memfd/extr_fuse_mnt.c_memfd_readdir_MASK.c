
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_file_info {int dummy; } ;
typedef int off_t ;
typedef int (* fuse_fill_dir_t ) (void*,char*,int *,int ) ;


 int VAR_0 ;
 char* VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_2,
    void *VAR_3,
    fuse_fill_dir_t VAR_4,
    off_t VAR_5,
    struct fuse_file_info *VAR_6)
{
 if (FUNC_0(VAR_2, "/"))
  return -VAR_0;

 VAR_4(VAR_3, ".", ((void*)0), 0);
 VAR_4(VAR_3, "..", ((void*)0), 0);
 VAR_4(VAR_3, VAR_1 + 1, ((void*)0), 0);

 return 0;
}
