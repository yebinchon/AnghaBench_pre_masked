
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int flags; int var; int name; } ;
typedef TYPE_1__ dynamic_prop_t ;
struct TYPE_9__ {int prop_cnt; int buf_size; TYPE_1__* props; } ;
typedef TYPE_2__ dispex_dynamic_data_t ;
typedef int WCHAR ;
typedef int HRESULT ;
typedef int DispatchEx ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int const*) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (int) ;
 TYPE_1__* FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (int const*) ;
 int FUNC_7 (int ,int const*) ;
 int FUNC_8 (int ,int const*) ;

__attribute__((used)) static HRESULT FUNC_9(DispatchEx *VAR_6, const WCHAR *VAR_7, DWORD VAR_8, dynamic_prop_t **VAR_9)
{
    const BOOL VAR_10 = VAR_8 & VAR_5;
    dispex_dynamic_data_t *VAR_11;
    dynamic_prop_t *VAR_12;

    VAR_11 = FUNC_3(VAR_6);
    if(!VAR_11)
        return VAR_2;

    for(VAR_12 = VAR_11->props; VAR_12 < VAR_11->props+VAR_11->prop_cnt; VAR_12++) {
        if(VAR_8 & VAR_4 ? !FUNC_8(VAR_12->name, VAR_7) : !FUNC_7(VAR_12->name, VAR_7)) {
            if(VAR_12->flags & VAR_1) {
                if(!VAR_10)
                    return VAR_0;
                VAR_12->flags &= ~VAR_1;
            }
            *VAR_9 = VAR_12;
            return VAR_3;
        }
    }

    if(!VAR_10)
        return VAR_0;

    FUNC_0("creating dynamic prop %s\n", FUNC_2(VAR_7));

    if(!VAR_11->buf_size) {
        VAR_11->props = FUNC_4(sizeof(dynamic_prop_t)*4);
        if(!VAR_11->props)
            return VAR_2;
        VAR_11->buf_size = 4;
    }else if(VAR_11->buf_size == VAR_11->prop_cnt) {
        dynamic_prop_t *VAR_13;

        VAR_13 = FUNC_5(VAR_11->props, sizeof(dynamic_prop_t)*(VAR_11->buf_size<<1));
        if(!VAR_13)
            return VAR_2;

        VAR_11->props = VAR_13;
        VAR_11->buf_size <<= 1;
    }

    VAR_12 = VAR_11->props + VAR_11->prop_cnt;

    VAR_12->name = FUNC_6(VAR_7);
    if(!VAR_12->name)
        return VAR_2;

    FUNC_1(&VAR_12->var);
    VAR_12->flags = 0;
    VAR_11->prop_cnt++;
    *VAR_9 = VAR_12;
    return VAR_3;
}
