
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* _init ) (TYPE_1__*) ;} ;
typedef TYPE_1__ Mode ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2 ( Mode *VAR_1 )
{
    FUNC_0 ( VAR_1 != ((void*)0), VAR_0 );
    FUNC_0 ( VAR_1->_init != ((void*)0), VAR_0 );
    return VAR_1->_init ( VAR_1 );
}
