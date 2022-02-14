
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_5__ {int refs; TYPE_2__ IUnknown_iface; int * typelib_base; } ;
typedef TYPE_1__ TLB_NEFile ;
typedef int OFSTRUCT ;
typedef int LPWSTR ;
typedef int * LPVOID ;
typedef scalar_t__ LPCWSTR ;
typedef TYPE_2__ IUnknown ;
typedef int INT ;
typedef int HRESULT ;
typedef scalar_t__ HFILE ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (scalar_t__,int *,int) ;
 int FUNC_3 (scalar_t__,int,int ) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_6 (scalar_t__,char*,int ,int*,int*) ;
 void* FUNC_7 (int) ;
 scalar_t__ FUNC_8 (scalar_t__) ;

__attribute__((used)) static HRESULT FUNC_9(LPCWSTR VAR_7, INT VAR_8, LPVOID *VAR_9, DWORD *VAR_10, IUnknown **VAR_11){

    HFILE VAR_12 = -1;
    OFSTRUCT VAR_13;
    HRESULT VAR_14 = VAR_6;
    TLB_NEFile *VAR_15;

    VAR_15 = FUNC_7(sizeof(TLB_NEFile));
    if (!VAR_15) return VAR_0;

    VAR_15->IUnknown_iface.lpVtbl = &VAR_5;
    VAR_15->refs = 1;
    VAR_15->typelib_base = ((void*)0);

    VAR_12 = FUNC_1( (LPWSTR)VAR_7, &VAR_13, VAR_2 );
    if ( VAR_12 >= 0 && FUNC_8( VAR_12 ) == VAR_1 )
    {
        DWORD VAR_16, VAR_17;
        if( FUNC_6( VAR_12, "TYPELIB", FUNC_4(VAR_8), &VAR_16, &VAR_17 ) )
        {
            VAR_15->typelib_base = FUNC_7(VAR_16);
            if( !VAR_15->typelib_base )
                VAR_14 = VAR_0;
            else
            {
                FUNC_3( VAR_12, VAR_17, VAR_3 );
                VAR_16 = FUNC_2( VAR_12, VAR_15->typelib_base, VAR_16 );
                FUNC_0( VAR_12 );
                *VAR_9 = VAR_15->typelib_base;
                *VAR_10 = VAR_16;
                *VAR_11 = &VAR_15->IUnknown_iface;
                return VAR_4;
            }
        }
    }

    if( VAR_12 >= 0) FUNC_0( VAR_12 );
    FUNC_5(&VAR_15->IUnknown_iface);
    return VAR_14;
}
