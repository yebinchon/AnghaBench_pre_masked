
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int object_header_t ;
typedef int ULONG_PTR ;
typedef int HINTERNET ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__* VAR_1 ;
 int VAR_2 ;

object_header_t *FUNC_4( HINTERNET VAR_3 )
{
    object_header_t *VAR_4 = ((void*)0);
    ULONG_PTR VAR_5 = (ULONG_PTR)VAR_3;

    FUNC_0( &VAR_0 );

    if ((VAR_5 > 0) && (VAR_5 <= VAR_2) && VAR_1[VAR_5 - 1])
        VAR_4 = FUNC_3( VAR_1[VAR_5 - 1] );

    FUNC_1( &VAR_0 );

    FUNC_2("handle 0x%lx -> %p\n", VAR_5, VAR_4);
    return VAR_4;
}
