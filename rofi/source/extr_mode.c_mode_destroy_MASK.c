
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* _destroy ) (TYPE_1__*) ;} ;
typedef TYPE_1__ Mode ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2 ( Mode *VAR_0 )
{
    FUNC_0 ( VAR_0 != ((void*)0) );
    FUNC_0 ( VAR_0->_destroy != ((void*)0) );
    VAR_0->_destroy ( VAR_0 );
}
