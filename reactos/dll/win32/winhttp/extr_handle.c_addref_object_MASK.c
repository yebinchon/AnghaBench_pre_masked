
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int refs; } ;
typedef TYPE_1__ object_header_t ;
typedef int ULONG ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,TYPE_1__*,int ) ;

object_header_t *FUNC_2( object_header_t *VAR_0 )
{
    ULONG VAR_1 = FUNC_0( &VAR_0->refs );
    FUNC_1("%p -> refcount = %d\n", VAR_0, VAR_1);
    return VAR_0;
}
