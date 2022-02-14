
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int left; int top; int right; int bottom; } ;
typedef TYPE_1__ RECT ;
typedef int HDC ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (int ,TYPE_1__*,int ) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,int ,...) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4( HDC VAR_3, const char *VAR_4 )
{
    RECT VAR_5;

    FUNC_1( VAR_3, &VAR_5, VAR_0 );

    if (VAR_1->left == -1 &&
        VAR_1->top == -1 &&
        VAR_1->right == -1 &&
        VAR_1->bottom == -1)
    {
        FUNC_2( 0, "missing bounds, got %s,\n", FUNC_3( &VAR_5 ));
        return;
    }

    FUNC_2( FUNC_0( VAR_1, &VAR_5 ), "%s: %s: expected bounds %s got %s\n", VAR_2, VAR_4,
        FUNC_3( VAR_1 ), FUNC_3( &VAR_5 ));
    VAR_1++;
}
