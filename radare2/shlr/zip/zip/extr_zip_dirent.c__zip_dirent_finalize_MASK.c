
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zip_dirent {int changed; int comment; int cloned; int extra_fields; int filename; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void
FUNC_2(struct zip_dirent *VAR_3)
{
    if (!VAR_3->cloned || VAR_3->changed & VAR_2)
 FUNC_1(VAR_3->filename);
    if (!VAR_3->cloned || VAR_3->changed & VAR_1)
 FUNC_0(VAR_3->extra_fields);
    if (!VAR_3->cloned || VAR_3->changed & VAR_0)
 FUNC_1(VAR_3->comment);
}
