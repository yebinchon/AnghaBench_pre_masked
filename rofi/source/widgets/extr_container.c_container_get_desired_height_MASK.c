
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int widget ;
struct TYPE_2__ {scalar_t__ child; } ;
typedef TYPE_1__ container ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2 ( widget *VAR_0 )
{
    container *VAR_1 = (container *) VAR_0;
    int VAR_2 = 0;
    if ( VAR_1->child ) {
        VAR_2 += FUNC_0 ( VAR_1->child );
    }
    VAR_2 += FUNC_1 ( VAR_0 );
    return VAR_2;
}
