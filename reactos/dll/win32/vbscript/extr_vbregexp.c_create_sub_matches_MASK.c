
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int match_len; size_t paren_count; TYPE_2__* parens; int * cp; } ;
typedef TYPE_3__ match_state_t ;
typedef int WCHAR ;
struct TYPE_9__ {int * lpVtbl; } ;
struct TYPE_12__ {int ref; scalar_t__* match; TYPE_3__* result; TYPE_1__ ISubMatches_iface; } ;
struct TYPE_10__ {int index; } ;
typedef TYPE_4__ SubMatches ;
typedef int HRESULT ;
typedef size_t DWORD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__* FUNC_1 (int) ;
 TYPE_4__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__*,int *,int) ;

__attribute__((used)) static HRESULT FUNC_6(DWORD VAR_3, match_state_t *VAR_4, SubMatches **VAR_5)
{
    SubMatches *VAR_6;
    DWORD VAR_7;
    HRESULT VAR_8;

    VAR_8 = FUNC_4(VAR_2);
    if(FUNC_0(VAR_8))
        return VAR_8;

    VAR_6 = FUNC_2(sizeof(*VAR_6));
    if(!VAR_6)
        return VAR_0;

    VAR_6->ISubMatches_iface.lpVtbl = &VAR_1;

    VAR_6->result = VAR_4;
    if(VAR_4) {
        VAR_6->match = FUNC_1((VAR_4->match_len+1) * sizeof(WCHAR));
        if(!VAR_6->match) {
            FUNC_3(VAR_6);
            return VAR_0;
        }
        FUNC_5(VAR_6->match, VAR_4->cp-VAR_4->match_len, VAR_4->match_len*sizeof(WCHAR));
        VAR_6->match[VAR_4->match_len] = 0;

        VAR_4->cp = ((void*)0);
        for(VAR_7=0; VAR_7<VAR_4->paren_count; VAR_7++)
            if(VAR_4->parens[VAR_7].index != -1)
                VAR_4->parens[VAR_7].index -= VAR_3;
    }else {
        VAR_6->match = ((void*)0);
    }

    VAR_6->ref = 1;
    *VAR_5 = VAR_6;
    return VAR_8;
}
