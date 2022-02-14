
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int VAR_0 ;
 void* FUNC_1 (int ,int ,unsigned int) ;
 int FUNC_2 (int ,int ,void*) ;
 void* FUNC_3 (int ,int ,void*,unsigned int) ;

__attribute__((used)) static void *FUNC_4( void *VAR_1, unsigned int *VAR_2, size_t VAR_3 )
{
    void *VAR_4;
    unsigned int VAR_5 = *VAR_2 + *VAR_2 / 2;
    if (VAR_5 < 32) VAR_5 = 32;

    if (VAR_1)
 VAR_4 = FUNC_3( FUNC_0(), VAR_0, VAR_1, VAR_5 * VAR_3 );
    else
 VAR_4 = FUNC_1( FUNC_0(), VAR_0, VAR_5 * VAR_3 );

    if (VAR_4)
        *VAR_2 = VAR_5;
    else
        FUNC_2( FUNC_0(), 0, VAR_1 );
    return VAR_4;
}
