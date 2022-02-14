
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* text; } ;
struct TYPE_4__ {char const* text; } ;
typedef TYPE_2__ RofiViewState ;



const char * FUNC_0 ( const RofiViewState *VAR_0 )
{
    if ( VAR_0->text ) {
        return VAR_0->text->text;
    }
    return ((void*)0);
}
