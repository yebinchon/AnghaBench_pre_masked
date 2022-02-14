
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * properties; } ;
typedef TYPE_1__ ThemeWidget ;
typedef int GHashTable ;
typedef int GDestroyNotify ;


 int FUNC_0 (int *,int ,int *) ;
 int * FUNC_1 (int ,int ,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

void FUNC_2 ( ThemeWidget *VAR_4, GHashTable *VAR_5 )
{
    if ( VAR_5 == ((void*)0) ) {
        return;
    }
    if ( VAR_4->properties == ((void*)0) ) {
        VAR_4->properties = FUNC_1 ( VAR_1, VAR_0, ((void*)0), (GDestroyNotify) VAR_3 );
    }
    FUNC_0 ( VAR_5, VAR_2, VAR_4->properties );
}
