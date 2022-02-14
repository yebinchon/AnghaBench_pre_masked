
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_2__ {int ref; int IUnknown_iface; } ;
typedef int REFIID ;
typedef int IUnknown ;
typedef int IRpcProxyBuffer ;
typedef int IPSFactoryBuffer ;
typedef int HRESULT ;


 int FUNC_0 (int *,int *,int ,int **,void**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_3 (int,char*,int,...) ;

__attribute__((used)) static void FUNC_4( IPSFactoryBuffer *VAR_2, REFIID VAR_3, const void *VAR_4 )
{
    IRpcProxyBuffer *VAR_5 = ((void*)0);
    IUnknown *VAR_6 = ((void*)0);
    HRESULT VAR_7;
    ULONG VAR_8;

    VAR_7 = FUNC_0(VAR_2, ((void*)0), VAR_3, &VAR_5, (void **)&VAR_6);
    FUNC_3( VAR_7 == VAR_0, "IPSFactoryBuffer_CreateProxy failed %x\n", VAR_7 );
    FUNC_3( *(void **)VAR_6 == VAR_4, "wrong iface pointer %p/%p\n", *(void **)VAR_6, VAR_4 );
    VAR_8 = FUNC_2( VAR_6 );
    FUNC_3( VAR_8 == 1, "wrong refcount %u\n", VAR_8 );
    VAR_8 = FUNC_1( VAR_5 );
    FUNC_3( VAR_8 == 0, "wrong refcount %u\n", VAR_8 );

    VAR_1.ref = 4;
    VAR_7 = FUNC_0(VAR_2, &VAR_1.IUnknown_iface, VAR_3, &VAR_5,
            (void **)&VAR_6);
    FUNC_3( VAR_7 == VAR_0, "IPSFactoryBuffer_CreateProxy failed %x\n", VAR_7 );
    FUNC_3( VAR_1.ref == 5, "wrong refcount %u\n", VAR_1.ref );
    FUNC_3( *(void **)VAR_6 == VAR_4, "wrong iface pointer %p/%p\n", *(void **)VAR_6, VAR_4 );
    VAR_8 = FUNC_2( VAR_6 );
    FUNC_3( VAR_8 == 4, "wrong refcount %u\n", VAR_8 );
    FUNC_3( VAR_1.ref == 4, "wrong refcount %u\n", VAR_1.ref );
    VAR_8 = FUNC_1( VAR_5 );
    FUNC_3( VAR_8 == 0, "wrong refcount %u\n", VAR_8 );
    FUNC_3( VAR_1.ref == 4, "wrong refcount %u\n", VAR_1.ref );
}
