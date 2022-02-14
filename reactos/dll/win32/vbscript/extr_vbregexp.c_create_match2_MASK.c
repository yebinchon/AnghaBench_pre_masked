
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int match_state_t ;
struct TYPE_9__ {int * lpVtbl; } ;
struct TYPE_7__ {int * lpVtbl; } ;
struct TYPE_8__ {int ref; TYPE_3__ IMatch2_iface; TYPE_1__ IMatch_iface; int sub_matches; int index; } ;
typedef TYPE_2__ Match2 ;
typedef TYPE_3__ IMatch2 ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int *,int *) ;
 TYPE_2__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static HRESULT FUNC_5(DWORD VAR_4, match_state_t **VAR_5, IMatch2 **VAR_6)
{
    Match2 *VAR_7;
    HRESULT VAR_8;

    VAR_8 = FUNC_4(VAR_2);
    if(FUNC_0(VAR_8))
        return VAR_8;

    VAR_7 = FUNC_2(sizeof(*VAR_7));
    if(!VAR_7)
        return VAR_0;

    VAR_7->index = VAR_4;
    VAR_8 = FUNC_1(VAR_4, VAR_5 ? *VAR_5 : ((void*)0), &VAR_7->sub_matches);
    if(FUNC_0(VAR_8)) {
        FUNC_3(VAR_7);
        return VAR_8;
    }
    if(VAR_5)
        *VAR_5 = ((void*)0);

    VAR_7->IMatch2_iface.lpVtbl = &VAR_1;
    VAR_7->IMatch_iface.lpVtbl = &VAR_3;

    VAR_7->ref = 1;
    *VAR_6 = &VAR_7->IMatch2_iface;
    return VAR_8;
}
