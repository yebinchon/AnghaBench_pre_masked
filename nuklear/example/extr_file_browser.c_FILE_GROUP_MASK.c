
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nk_image {int dummy; } ;
struct file_group {int group; char const* name; struct nk_image* icon; } ;
typedef enum file_groups { ____Placeholder_file_groups } file_groups ;



__attribute__((used)) static struct file_group
FUNC_0(enum file_groups VAR_0, const char *VAR_1, struct nk_image *VAR_2)
{
    struct file_group VAR_3;
    VAR_3.group = VAR_0;
    VAR_3.name = VAR_1;
    VAR_3.icon = VAR_2;
    return VAR_3;
}
