
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int request_t ;
struct TYPE_8__ {scalar_t__ type; TYPE_1__* vtbl; int entry; int handle; int refs; } ;
typedef TYPE_2__ object_header_t ;
typedef int ULONG ;
struct TYPE_7__ {int (* destroy ) (TYPE_2__*) ;} ;
typedef int HINTERNET ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,TYPE_2__*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,int ,int *,int) ;
 int FUNC_5 (TYPE_2__*) ;

void FUNC_6( object_header_t *VAR_3 )
{
    ULONG VAR_4 = FUNC_0( &VAR_3->refs );
    FUNC_1("object %p refcount = %d\n", VAR_3, VAR_4);
    if (!VAR_4)
    {
        if (VAR_3->type == VAR_1) FUNC_2( (request_t *)VAR_3 );

        FUNC_4( VAR_3, VAR_0, &VAR_3->handle, sizeof(HINTERNET) );

        FUNC_1("destroying object %p\n", VAR_3);
        if (VAR_3->type != VAR_2) FUNC_3( &VAR_3->entry );
        VAR_3->vtbl->destroy( VAR_3 );
    }
}
