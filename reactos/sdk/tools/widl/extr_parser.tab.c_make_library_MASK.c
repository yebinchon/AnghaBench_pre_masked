
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int importlibs; int const* attrs; int name; } ;
typedef TYPE_1__ typelib_t ;
typedef int attr_list_t ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static typelib_t *FUNC_3(const char *VAR_0, const attr_list_t *VAR_1)
{
    typelib_t *VAR_2 = FUNC_1(sizeof(*VAR_2));
    VAR_2->name = FUNC_2(VAR_0);
    VAR_2->attrs = VAR_1;
    FUNC_0( &VAR_2->importlibs );
    return VAR_2;
}
