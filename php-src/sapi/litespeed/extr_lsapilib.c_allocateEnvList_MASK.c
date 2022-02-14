
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct LSAPI_key_value_pair {int dummy; } ;


 scalar_t__ FUNC_0 (struct LSAPI_key_value_pair*,int) ;

__attribute__((used)) static int FUNC_1( struct LSAPI_key_value_pair ** VAR_0,
                        int *VAR_1, int VAR_2 )
{
    struct LSAPI_key_value_pair * VAR_3;
    if ( *VAR_1 >= VAR_2 )
        return 0;
    if ( VAR_2 > 8192 )
        return -1;
    VAR_3 = (struct LSAPI_key_value_pair *)FUNC_0( *VAR_0, VAR_2 *
                    sizeof(struct LSAPI_key_value_pair) );
    if ( VAR_3 )
    {
        *VAR_0 = VAR_3;
        *VAR_1 = VAR_2;
        return 0;
    }
    else
        return -1;

}
