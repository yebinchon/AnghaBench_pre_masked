
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int top; } ;
struct TYPE_7__ {int top; } ;
struct TYPE_6__ {int top; } ;
struct TYPE_9__ {TYPE_3__ margin; TYPE_2__ border; TYPE_1__ padding; } ;
typedef TYPE_4__ widget ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

int FUNC_1 ( const widget *VAR_1 )
{
    if ( VAR_1 == ((void*)0) ) {
        return 0;
    }
    int VAR_2 = FUNC_0 ( VAR_1->padding.top, VAR_0 );
    VAR_2 += FUNC_0 ( VAR_1->border.top, VAR_0 );
    VAR_2 += FUNC_0 ( VAR_1->margin.top, VAR_0 );
    return VAR_2;
}
