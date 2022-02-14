
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* f; } ;
struct TYPE_5__ {int (* fromstr ) (char*,void*,char**,TYPE_2__*) ;} ;
typedef TYPE_2__ PyArray_Descr ;


 scalar_t__ FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*,void*,char**,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_2(char **VAR_0, void *VAR_1, PyArray_Descr *VAR_2,
                     const char *VAR_3)
{
    char *VAR_4 = *VAR_0;
    int VAR_5 = VAR_2->f->fromstr(*VAR_0, VAR_1, &VAR_4, VAR_2);





    if (*VAR_0 == VAR_4 || VAR_5 < 0) {

        if (FUNC_0(*VAR_0, VAR_3)) {
            return -1;
        }
        return -2;
    }
    *VAR_0 = VAR_4;
    if (VAR_3 != ((void*)0) && *VAR_0 > VAR_3) {

        return -1;
    }
    return 0;
}
