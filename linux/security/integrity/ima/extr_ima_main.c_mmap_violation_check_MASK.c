
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int f_path; int f_mapping; } ;
typedef enum ima_hooks { ____Placeholder_ima_hooks } ima_hooks ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct inode* FUNC_0 (struct file*) ;
 char* FUNC_1 (int *,char**,char*) ;
 int FUNC_2 (int ,struct inode*,char const*,char*,char*,int,int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(enum ima_hooks VAR_3, struct file *VAR_4,
    char **VAR_5, const char **VAR_6,
    char *VAR_7)
{
 struct inode *VAR_8;
 int VAR_9 = 0;

 if ((VAR_3 == VAR_2) && FUNC_3(VAR_4->f_mapping)) {
  VAR_9 = -VAR_1;
  VAR_8 = FUNC_0(VAR_4);

  if (!*VAR_5)
   *VAR_6 = FUNC_1(&VAR_4->f_path, VAR_5,
            VAR_7);
  FUNC_2(VAR_0, VAR_8, *VAR_6,
        "mmap_file", "mmapped_writers", VAR_9, 0);
 }
 return VAR_9;
}
