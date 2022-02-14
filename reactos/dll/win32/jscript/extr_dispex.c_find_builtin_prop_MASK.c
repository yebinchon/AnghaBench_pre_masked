
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* builtin_info; TYPE_1__* ctx; } ;
typedef TYPE_3__ jsdisp_t ;
struct TYPE_10__ {unsigned int flags; int name; } ;
typedef TYPE_4__ builtin_prop_t ;
typedef int WCHAR ;
struct TYPE_8__ {int props_cnt; TYPE_4__ const* props; } ;
struct TYPE_7__ {unsigned int version; int html_mode; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int const*,int ) ;

__attribute__((used)) static const builtin_prop_t *FUNC_1(jsdisp_t *VAR_3, const WCHAR *VAR_4)
{
    int VAR_5 = 0, VAR_6, VAR_7, VAR_8;

    VAR_6 = VAR_3->builtin_info->props_cnt-1;
    while(VAR_5 <= VAR_6) {
        VAR_7 = (VAR_5+VAR_6)/2;

        VAR_8 = FUNC_0(VAR_4, VAR_3->builtin_info->props[VAR_7].name);
        if(!VAR_8) {

            unsigned VAR_9 = (VAR_3->builtin_info->props[VAR_7].flags & VAR_1)
                >> VAR_2;
            if(VAR_9 && VAR_9 > VAR_3->ctx->version)
                return ((void*)0);


            if((VAR_3->builtin_info->props[VAR_7].flags & VAR_0) && !VAR_3->ctx->html_mode)
                return ((void*)0);

            return VAR_3->builtin_info->props + VAR_7;
        }

        if(VAR_8 < 0)
            VAR_6 = VAR_7-1;
        else
            VAR_5 = VAR_7+1;
    }

    return ((void*)0);
}
