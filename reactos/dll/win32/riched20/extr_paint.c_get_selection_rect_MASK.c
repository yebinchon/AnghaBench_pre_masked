
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int len; } ;
struct TYPE_6__ {int bottom; void* right; scalar_t__ top; void* left; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__ ME_Run ;
typedef int ME_Context ;


 void* FUNC_0 (int *,TYPE_2__*,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3( ME_Context *VAR_1, ME_Run *VAR_2, int VAR_3, int VAR_4, int VAR_5, RECT *VAR_6 )
{
    VAR_3 = FUNC_1( 0, VAR_3 );
    VAR_4 = FUNC_2( VAR_2->len, VAR_4 );
    VAR_6->left = FUNC_0( VAR_1, VAR_2, VAR_3, VAR_0 );
    VAR_6->top = 0;
    VAR_6->right = FUNC_0( VAR_1, VAR_2, VAR_4, VAR_0 );
    VAR_6->bottom = VAR_5;
    return;
}
