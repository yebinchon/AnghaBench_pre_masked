
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int prop_cnt; TYPE_3__* props; struct TYPE_10__* prototype; } ;
typedef TYPE_2__ jsdisp_t ;
struct TYPE_9__ {int ref; } ;
struct TYPE_11__ {scalar_t__ type; int name; TYPE_1__ u; scalar_t__ flags; int hash; } ;
typedef TYPE_3__ dispex_prop_t ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (TYPE_2__*,int ,int ,TYPE_3__**) ;

__attribute__((used)) static HRESULT FUNC_3(jsdisp_t *VAR_4)
{
    dispex_prop_t *VAR_5, *VAR_6;
    HRESULT VAR_7;

    if(!VAR_4->prototype)
        return VAR_3;

    FUNC_3(VAR_4->prototype);

    for(VAR_5 = VAR_4->prototype->props; VAR_5 < VAR_4->prototype->props+VAR_4->prototype->prop_cnt; VAR_5++) {
        if(!VAR_5->name)
            continue;
        VAR_7 = FUNC_2(VAR_4, VAR_5->hash, VAR_5->name, &VAR_6);
        if(FUNC_0(VAR_7))
            return VAR_7;
        if(!VAR_6 || VAR_6->type==VAR_1) {
            if(VAR_6) {
                VAR_6->type = VAR_2;
                VAR_6->flags = 0;
                VAR_6->u.ref = VAR_5 - VAR_4->prototype->props;
            }else {
                VAR_6 = FUNC_1(VAR_4, VAR_5->name, VAR_5 - VAR_4->prototype->props);
                if(!VAR_6)
                    return VAR_0;
            }
        }
    }

    return VAR_3;
}
