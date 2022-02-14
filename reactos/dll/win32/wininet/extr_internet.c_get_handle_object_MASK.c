
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int object_header_t ;
typedef size_t UINT_PTR ;
struct TYPE_3__ {scalar_t__ valid_handle; } ;
typedef int HINTERNET ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,size_t,int *) ;
 int * FUNC_3 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__** VAR_1 ;
 size_t VAR_2 ;

object_header_t *FUNC_4( HINTERNET VAR_3 )
{
    object_header_t *VAR_4 = ((void*)0);
    UINT_PTR VAR_5 = (UINT_PTR) VAR_3;

    FUNC_0( &VAR_0 );

    if(VAR_5 > 0 && VAR_5 < VAR_2 && VAR_1[VAR_5] && VAR_1[VAR_5]->valid_handle)
        VAR_4 = FUNC_3(VAR_1[VAR_5]);

    FUNC_1( &VAR_0 );

    FUNC_2("handle %ld -> %p\n", VAR_5, VAR_4);

    return VAR_4;
}
