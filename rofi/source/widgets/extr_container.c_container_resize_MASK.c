
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int widget ;
struct TYPE_3__ {short w; short h; } ;
struct TYPE_4__ {TYPE_1__ widget; } ;
typedef TYPE_2__ container ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1 ( widget *VAR_0, short VAR_1, short VAR_2 )
{
    container *VAR_3 = (container *) VAR_0;
    if ( VAR_3->widget.w != VAR_1 || VAR_3->widget.h != VAR_2 ) {
        VAR_3->widget.w = VAR_1;
        VAR_3->widget.h = VAR_2;
        FUNC_0 ( VAR_0 );
    }
}
