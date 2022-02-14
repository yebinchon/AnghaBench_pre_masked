
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int COND_input ;


 void* FUNC_0 (int *,unsigned int) ;
 int FUNC_1 (void*,void*,unsigned int) ;
 int FUNC_2 (void*) ;

__attribute__((used)) static void *FUNC_3( COND_input *VAR_0, void *VAR_1, unsigned int VAR_2 )
{
    void *VAR_3;

    if( !VAR_1 )
        return VAR_1;

    VAR_3 = FUNC_0( VAR_0, VAR_2 );
    if( !VAR_3 )
    {
        FUNC_2( VAR_1 );
        return ((void*)0);
    }

    FUNC_1( VAR_3, VAR_1, VAR_2 );
    FUNC_2( VAR_1 );
    return VAR_3;
}
