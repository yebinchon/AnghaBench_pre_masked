
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int gboolean ;
struct TYPE_7__ {int name; } ;
typedef TYPE_1__ Mode ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__** VAR_2 ;
 TYPE_1__** FUNC_0 (TYPE_1__**,int) ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (int ) ;

__attribute__((used)) static gboolean FUNC_2 ( Mode *VAR_4 )
{
    Mode *VAR_5 = FUNC_1 ( VAR_4->name );
    if ( VAR_5 == ((void*)0) ) {
        VAR_2 = FUNC_0 ( VAR_2, sizeof ( Mode * ) * ( VAR_3 + 1 ) );

        VAR_2[VAR_3] = VAR_4;
        VAR_3++;
        return VAR_1;
    }
    return VAR_0;
}
