
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t (* get_comment ) (TYPE_1__*,void*,size_t) ;} ;
typedef TYPE_1__ ar_archive ;


 size_t FUNC_0 (TYPE_1__*,void*,size_t) ;

size_t FUNC_1(ar_archive *VAR_0, void *VAR_1, size_t VAR_2)
{
    if (!VAR_0->get_comment)
        return 0;
    return VAR_0->get_comment(VAR_0, VAR_1, VAR_2);
}
