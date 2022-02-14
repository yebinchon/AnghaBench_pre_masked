
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int widget ;
struct TYPE_3__ {struct TYPE_3__* child; scalar_t__ enabled; } ;
typedef TYPE_1__ container ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_7 ( widget *VAR_0 )
{
    container *VAR_1 = (container *) VAR_0;
    if ( VAR_1->child && VAR_1->child->enabled ) {
        FUNC_6 ( FUNC_0 ( VAR_1->child ),
                        FUNC_4 ( FUNC_0 ( VAR_1 ) ),
                        FUNC_3 ( FUNC_0 ( VAR_1 ) )
                        );
        FUNC_1 ( FUNC_0 ( VAR_1->child ),
                      FUNC_2 ( FUNC_0 ( VAR_1 ) ),
                      FUNC_5 ( FUNC_0 ( VAR_1 ) )
                      );
    }
}
