
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ tid_t ;
struct TYPE_20__ {scalar_t__ id; scalar_t__ tid; int func_disp_idx; scalar_t__ prop_vt; int argc; scalar_t__* arg_types; int call_vtbl_off; int get_vtbl_off; int put_vtbl_off; int name; } ;
typedef TYPE_7__ func_info_t ;
struct TYPE_21__ {int func_cnt; int func_disp_cnt; TYPE_7__* funcs; } ;
typedef TYPE_8__ dispex_data_t ;
typedef scalar_t__ VARTYPE ;
struct TYPE_16__ {scalar_t__ vt; } ;
struct TYPE_17__ {TYPE_3__ tdesc; } ;
struct TYPE_22__ {scalar_t__ memid; int invkind; int cParams; scalar_t__ funckind; scalar_t__ callconv; int oVft; TYPE_6__* lprgelemdescParam; TYPE_4__ elemdescFunc; scalar_t__ cParamsOpt; } ;
struct TYPE_18__ {scalar_t__ vt; } ;
struct TYPE_14__ {int wParamFlags; } ;
struct TYPE_15__ {TYPE_1__ paramdesc; } ;
struct TYPE_19__ {TYPE_5__ tdesc; TYPE_2__ u; } ;
typedef int ITypeInfo ;
typedef int HRESULT ;
typedef TYPE_9__ FUNCDESC ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *,scalar_t__,int *,int *,int *,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char*,int ,...) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 scalar_t__* FUNC_5 (int) ;
 TYPE_7__* FUNC_6 (TYPE_7__*,int) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static void FUNC_8(dispex_data_t *VAR_9, DWORD *VAR_10, tid_t VAR_11, const FUNCDESC *VAR_12, ITypeInfo *VAR_13)
{
    func_info_t *VAR_14;
    HRESULT VAR_15;

    for(VAR_14 = VAR_9->funcs; VAR_14 < VAR_9->funcs+VAR_9->func_cnt; VAR_14++) {
        if(VAR_14->id == VAR_12->memid) {
            if(VAR_14->tid != VAR_11)
                return;
            break;
        }
    }

    if(VAR_14 == VAR_9->funcs+VAR_9->func_cnt) {
        if(VAR_9->func_cnt == *VAR_10)
            VAR_9->funcs = FUNC_6(VAR_9->funcs, (*VAR_10 <<= 1)*sizeof(func_info_t));

        VAR_14 = VAR_9->funcs+VAR_9->func_cnt;
        VAR_15 = FUNC_1(VAR_13, VAR_12->memid, &VAR_14->name, ((void*)0), ((void*)0), ((void*)0));
        if(FUNC_0(VAR_15))
            return;

        VAR_9->func_cnt++;

        VAR_14->id = VAR_12->memid;
        VAR_14->tid = VAR_11;
        VAR_14->func_disp_idx = -1;
        VAR_14->prop_vt = VAR_7;
    }

    if(VAR_12->invkind & VAR_1) {
        unsigned VAR_16;

        VAR_14->func_disp_idx = VAR_9->func_disp_cnt++;
        VAR_14->argc = VAR_12->cParams;

        FUNC_3(VAR_14->argc < VAR_5);
        FUNC_3(VAR_12->funckind == VAR_4);

        VAR_14->arg_types = FUNC_5(sizeof(*VAR_14->arg_types) * VAR_14->argc);
        if(!VAR_14->arg_types)
            return;

        for(VAR_16=0; VAR_16 < VAR_14->argc; VAR_16++)
            VAR_14->arg_types[VAR_16] = VAR_12->lprgelemdescParam[VAR_16].tdesc.vt;

        VAR_14->prop_vt = VAR_12->elemdescFunc.tdesc.vt;
        if(VAR_14->prop_vt != VAR_8 && !FUNC_7(VAR_14->prop_vt)) {
            FUNC_2("%s: return type %d\n", FUNC_4(VAR_14->name), VAR_14->prop_vt);
            return;
        }

        if(VAR_12->cParamsOpt) {
            FUNC_2("%s: optional params\n", FUNC_4(VAR_14->name));
            return;
        }

        for(VAR_16=0; VAR_16 < VAR_14->argc; VAR_16++) {
            if(!FUNC_7(VAR_14->arg_types[VAR_16])) {
                return;
            }

            if(VAR_12->lprgelemdescParam[VAR_16].u.paramdesc.wParamFlags & VAR_6) {
                FUNC_2("%s param %d: default value\n", FUNC_4(VAR_14->name), VAR_16);
                return;
            }
        }

        FUNC_3(VAR_14->argc <= VAR_5);
        FUNC_3(VAR_12->callconv == VAR_0);

        VAR_14->call_vtbl_off = VAR_12->oVft/sizeof(void*);
    }else if(VAR_12->invkind & (VAR_3|VAR_2)) {
        VARTYPE VAR_17 = VAR_7;

        if(VAR_12->invkind & VAR_2) {
            VAR_17 = VAR_12->elemdescFunc.tdesc.vt;
            VAR_14->get_vtbl_off = VAR_12->oVft/sizeof(void*);
        }
        if(VAR_12->invkind & VAR_3) {
            FUNC_3(VAR_12->cParams == 1);
            VAR_17 = VAR_12->lprgelemdescParam->tdesc.vt;
            VAR_14->put_vtbl_off = VAR_12->oVft/sizeof(void*);
        }

        FUNC_3(VAR_14->prop_vt == VAR_7 || VAR_17 == VAR_14->prop_vt);
        VAR_14->prop_vt = VAR_17;
    }
}
