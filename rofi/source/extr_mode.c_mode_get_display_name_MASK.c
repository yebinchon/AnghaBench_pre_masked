
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* display_name; char const* name; } ;
typedef TYPE_1__ Mode ;



const char *FUNC_0 ( const Mode *VAR_0 )
{
    if ( VAR_0->display_name != ((void*)0) ) {
        return VAR_0->display_name;
    }
    return VAR_0->name;
}
