
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int rofi_int_matcher ;
struct TYPE_4__ {int (* _token_match ) (TYPE_1__ const*,int **,unsigned int) ;} ;
typedef TYPE_1__ Mode ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__ const*,int **,unsigned int) ;

int FUNC_2 ( const Mode *VAR_0, rofi_int_matcher **VAR_1, unsigned int VAR_2 )
{
    FUNC_0 ( VAR_0 != ((void*)0) );
    FUNC_0 ( VAR_0->_token_match != ((void*)0) );
    return VAR_0->_token_match ( VAR_0, VAR_1, VAR_2 );
}
