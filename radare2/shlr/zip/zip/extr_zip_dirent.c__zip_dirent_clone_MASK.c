
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zip_dirent {int cloned; scalar_t__ changed; } ;


 int FUNC_0 (struct zip_dirent*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct zip_dirent*,struct zip_dirent const*,int) ;

struct zip_dirent *
FUNC_3(const struct zip_dirent *VAR_0)
{
    struct zip_dirent *VAR_1;

    if ((VAR_1=(struct zip_dirent *)FUNC_1(sizeof(*VAR_1))) == ((void*)0))
 return ((void*)0);

    if (VAR_0)
 FUNC_2(VAR_1, VAR_0, sizeof(*VAR_0));
    else
 FUNC_0(VAR_1);

    VAR_1->changed = 0;
    VAR_1->cloned = 1;

    return VAR_1;
}
