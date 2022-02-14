
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int func_cnt; TYPE_1__* funcs; } ;
typedef TYPE_2__ class_desc_t ;
typedef int WCHAR ;
struct TYPE_4__ {scalar_t__ name; } ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int const*) ;

__attribute__((used)) static BOOL FUNC_1(class_desc_t *VAR_2, const WCHAR *VAR_3)
{
    unsigned VAR_4;

    for(VAR_4=0; VAR_4 < VAR_2->func_cnt; VAR_4++) {
        if(VAR_2->funcs[VAR_4].name && !FUNC_0(VAR_2->funcs[VAR_4].name, VAR_3))
            return VAR_1;
    }

    return VAR_0;
}
