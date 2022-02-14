
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* _result ) (TYPE_1__*,int,char**,unsigned int) ;} ;
typedef int ModeMode ;
typedef TYPE_1__ Mode ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int,char**,unsigned int) ;

ModeMode FUNC_2 ( Mode *VAR_0, int VAR_1, char **VAR_2, unsigned int VAR_3 )
{
    FUNC_0 ( VAR_0 != ((void*)0) );
    FUNC_0 ( VAR_0->_result != ((void*)0) );
    FUNC_0 ( VAR_2 != ((void*)0) );
    return VAR_0->_result ( VAR_0, VAR_1, VAR_2, VAR_3 );
}
