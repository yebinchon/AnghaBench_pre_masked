
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int notify_mask; int context; int handle; int (* callback ) (int ,int ,int,int ,int) ;} ;
typedef TYPE_1__ object_header_t ;
typedef int LPVOID ;
typedef int DWORD ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,int ,int,int ,int) ;

void FUNC_2( object_header_t *VAR_0, DWORD VAR_1, LPVOID VAR_2, DWORD VAR_3 )
{
    if (VAR_0->callback && (VAR_0->notify_mask & VAR_1))
    {
        FUNC_0("%p, 0x%08x, %p, %u\n", VAR_0, VAR_1, VAR_2, VAR_3);
        VAR_0->callback( VAR_0->handle, VAR_0->context, VAR_1, VAR_2, VAR_3 );
        FUNC_0("returning from 0x%08x callback\n", VAR_1);
    }
}
