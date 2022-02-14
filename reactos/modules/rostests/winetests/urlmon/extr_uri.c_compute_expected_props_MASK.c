
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* dword_props; TYPE_1__* str_props; } ;
typedef TYPE_3__ uri_properties ;
struct TYPE_6__ {scalar_t__ expected; } ;
struct TYPE_5__ {scalar_t__ expected; scalar_t__ expected2; int * value2; } ;
typedef size_t DWORD ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;

__attribute__((used)) static DWORD FUNC_0(uri_properties *VAR_5, DWORD *VAR_6)
{
    DWORD VAR_7 = 0, VAR_8;

    *VAR_6 = 0;

    for(VAR_8=VAR_4; VAR_8 <= VAR_3; VAR_8++) {
        if(VAR_5->str_props[VAR_8-VAR_4].expected == VAR_0)
            VAR_7 |= 1<<VAR_8;
        if(VAR_5->str_props[VAR_8-VAR_4].value2 == ((void*)0) ||
           VAR_5->str_props[VAR_8-VAR_4].expected ==
           VAR_5->str_props[VAR_8-VAR_4].expected2)
            *VAR_6 |= 1<<VAR_8;
    }

    for(VAR_8=VAR_2; VAR_8 <= VAR_1; VAR_8++) {
        if(VAR_5->dword_props[VAR_8-VAR_2].expected == VAR_0)
            VAR_7 |= 1<<VAR_8;
        *VAR_6 |= 1<<VAR_8;
    }

    return VAR_7;
}
