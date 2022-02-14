
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int (* _get_num_entries ) (TYPE_1__ const*) ;} ;
typedef TYPE_1__ Mode ;


 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (TYPE_1__ const*) ;

unsigned int FUNC_2 ( const Mode *VAR_0 )
{
    FUNC_0 ( VAR_0 != ((void*)0) );
    FUNC_0 ( VAR_0->_get_num_entries != ((void*)0) );
    return VAR_0->_get_num_entries ( VAR_0 );
}
