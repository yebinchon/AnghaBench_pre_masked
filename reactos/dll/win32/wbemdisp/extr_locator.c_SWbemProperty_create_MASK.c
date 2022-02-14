
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * lpVtbl; } ;
struct property {int refs; TYPE_1__ ISWbemProperty_iface; int name; int * object; } ;
typedef int IWbemClassObject ;
typedef TYPE_1__ ISWbemProperty ;
typedef int HRESULT ;
typedef int BSTR ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;
 struct property* FUNC_4 (int) ;
 int VAR_2 ;

__attribute__((used)) static HRESULT FUNC_5( IWbemClassObject *VAR_3, BSTR VAR_4, ISWbemProperty **VAR_5 )
{
    struct property *VAR_6;

    FUNC_3( "%p, %p\n", VAR_5, VAR_3 );

    if (!(VAR_6 = FUNC_4( sizeof(*VAR_6) ))) return VAR_0;
    VAR_6->ISWbemProperty_iface.lpVtbl = &VAR_2;
    VAR_6->refs = 1;
    VAR_6->object = VAR_3;
    FUNC_0( VAR_6->object );
    VAR_6->name = FUNC_1( VAR_4, FUNC_2( VAR_4 ) );
    *VAR_5 = &VAR_6->ISWbemProperty_iface;
    FUNC_3( "returning iface %p\n", *VAR_5 );
    return VAR_1;
}
