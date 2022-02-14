
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int props; struct TYPE_12__* prototype; } ;
typedef TYPE_2__ jsdisp_t ;
struct TYPE_11__ {TYPE_3__* ref; } ;
struct TYPE_13__ {scalar_t__ type; int name; TYPE_1__ u; } ;
typedef TYPE_3__ dispex_prop_t ;
typedef int WCHAR ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_1 (TYPE_2__*,int ,TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*,unsigned int,int const*,TYPE_3__**) ;

__attribute__((used)) static HRESULT FUNC_3(jsdisp_t *VAR_4, unsigned VAR_5, const WCHAR *VAR_6, dispex_prop_t **VAR_7)
{
    dispex_prop_t *VAR_8, *VAR_9=((void*)0);
    HRESULT VAR_10;

    VAR_10 = FUNC_2(VAR_4, VAR_5, VAR_6, &VAR_8);
    if(FUNC_0(VAR_10))
        return VAR_10;
    if(VAR_8 && VAR_8->type==VAR_1) {
        VAR_9 = VAR_8;
    } else if(VAR_8) {
        *VAR_7 = VAR_8;
        return VAR_3;
    }

    if(VAR_4->prototype) {
        VAR_10 = FUNC_3(VAR_4->prototype, VAR_5, VAR_6, &VAR_8);
        if(FUNC_0(VAR_10))
            return VAR_10;
        if(VAR_8) {
            if(VAR_9) {
                VAR_9->type = VAR_2;
                VAR_9->u.ref = VAR_8 - VAR_4->prototype->props;
                VAR_8 = VAR_9;
            }else {
                VAR_8 = FUNC_1(VAR_4, VAR_8->name, VAR_8 - VAR_4->prototype->props);
                if(!VAR_8)
                    return VAR_0;
            }

            *VAR_7 = VAR_8;
            return VAR_3;
        }
    }

    *VAR_7 = VAR_9;
    return VAR_3;
}
