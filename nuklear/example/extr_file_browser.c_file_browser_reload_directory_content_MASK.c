
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_browser {int dir_count; void* directories; int file_count; void* files; int directory; } ;


 int VAR_0 ;
 int FUNC_0 (void*,int ) ;
 void* FUNC_1 (char const*,int,int *) ;
 int FUNC_2 (int ,char const*,int ) ;

__attribute__((used)) static void
FUNC_3(struct file_browser *VAR_1, const char *VAR_2)
{
    FUNC_2(VAR_1->directory, VAR_2, VAR_0);
    FUNC_0(VAR_1->files, VAR_1->file_count);
    FUNC_0(VAR_1->directories, VAR_1->dir_count);
    VAR_1->files = FUNC_1(VAR_2, 0, &VAR_1->file_count);
    VAR_1->directories = FUNC_1(VAR_2, 1, &VAR_1->dir_count);
}
