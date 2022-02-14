
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_browser {int * directories; int * files; int dir_count; int file_count; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct file_browser*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct file_browser *VAR_0)
{
    if (VAR_0->files)
        FUNC_0(VAR_0->files, VAR_0->file_count);
    if (VAR_0->directories)
        FUNC_0(VAR_0->directories, VAR_0->dir_count);
    VAR_0->files = ((void*)0);
    VAR_0->directories = ((void*)0);
    FUNC_1(VAR_0, 0, sizeof(*VAR_0));
}
