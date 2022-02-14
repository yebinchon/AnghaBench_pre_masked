
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int jsdisp_t ;
struct TYPE_6__ {void* val; } ;
struct TYPE_7__ {scalar_t__ type; TYPE_1__ u; int flags; } ;
typedef TYPE_2__ dispex_prop_t ;
typedef int WCHAR ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ) ;
 TYPE_2__* FUNC_2 (int *,int const*,scalar_t__,int ) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int *,int ,int const*,TYPE_2__**) ;
 void* FUNC_5 () ;
 int FUNC_6 (int const*) ;

__attribute__((used)) static HRESULT FUNC_7(jsdisp_t *VAR_3, const WCHAR *VAR_4, DWORD VAR_5, dispex_prop_t **VAR_6)
{
    dispex_prop_t *VAR_7;
    HRESULT VAR_8;

    VAR_8 = FUNC_4(VAR_3, FUNC_6(VAR_4), VAR_4, &VAR_7);
    if(FUNC_0(VAR_8) && (!VAR_7 || VAR_7->type == VAR_1)) {
        FUNC_1("creating prop %s flags %x\n", FUNC_3(VAR_4), VAR_5);

        if(VAR_7) {
            VAR_7->type = VAR_2;
            VAR_7->flags = VAR_5;
            VAR_7->u.val = FUNC_5();
        }else {
            VAR_7 = FUNC_2(VAR_3, VAR_4, VAR_2, VAR_5);
            if(!VAR_7)
                return VAR_0;
        }

        VAR_7->u.val = FUNC_5();
    }

    *VAR_6 = VAR_7;
    return VAR_8;
}
