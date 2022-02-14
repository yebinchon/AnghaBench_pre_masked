
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int type; char const* suffix; int group; } ;
typedef enum file_types { ____Placeholder_file_types } file_types ;
typedef enum file_groups { ____Placeholder_file_groups } file_groups ;



__attribute__((used)) static struct file
FUNC_0(enum file_types VAR_0, const char *VAR_1, enum file_groups VAR_2)
{
    struct file VAR_3;
    VAR_3.type = VAR_0;
    VAR_3.suffix = VAR_1;
    VAR_3.group = VAR_2;
    return VAR_3;
}
