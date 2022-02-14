
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int xmlstr_t ;
typedef int xmlbuf_t ;
struct TYPE_4__ {void* tlib; void* ps32; int mask; void* base; void* name; void* iid; } ;
struct TYPE_5__ {TYPE_1__ ifaceps; } ;
struct entity {TYPE_2__ u; } ;
struct assembly {int entities; } ;
struct actctx_loader {TYPE_3__* actctx; } ;
typedef int UNICODE_STRING ;
struct TYPE_6__ {int sections; } ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int *,int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 struct entity* FUNC_1 (int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_2 (int *,int *,int *,scalar_t__*,scalar_t__*) ;
 int VAR_11 ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,struct entity*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int ) ;
 void* FUNC_7 (int *) ;

__attribute__((used)) static BOOL FUNC_8(xmlbuf_t* VAR_14,
                                                         struct assembly* VAR_15,
                                                         struct actctx_loader* VAR_16)
{
    xmlstr_t VAR_17, VAR_18;
    UNICODE_STRING VAR_19, VAR_20;
    BOOL VAR_21 = VAR_2, VAR_22;
    struct entity* VAR_23;

    VAR_23 = FUNC_1(&VAR_15->entities, VAR_0);
    if (!VAR_23) return VAR_2;

    while (FUNC_2(VAR_14, &VAR_17, &VAR_18, &VAR_22, &VAR_21))
    {
        if (FUNC_6(&VAR_17, VAR_10))
        {
            if (!(VAR_23->u.ifaceps.iid = FUNC_7(&VAR_18))) return VAR_2;
        }
        else if (FUNC_6(&VAR_17, VAR_9))
        {
            if (!(VAR_23->u.ifaceps.name = FUNC_7(&VAR_18))) return VAR_2;
        }
        else if (FUNC_6(&VAR_17, VAR_7))
        {
            if (!(VAR_23->u.ifaceps.base = FUNC_7(&VAR_18))) return VAR_2;
            VAR_23->u.ifaceps.mask |= VAR_1;
        }
        else if (FUNC_6(&VAR_17, VAR_11))
        {
            if (!(FUNC_4(&VAR_18, VAR_23))) return VAR_2;
            VAR_23->u.ifaceps.mask |= VAR_4;
        }
        else if (FUNC_6(&VAR_17, VAR_12))
        {
            if (!(VAR_23->u.ifaceps.ps32 = FUNC_7(&VAR_18))) return VAR_2;
        }
        else if (FUNC_6(&VAR_17, VAR_13))
        {
            if (!(VAR_23->u.ifaceps.tlib = FUNC_7(&VAR_18))) return VAR_2;
        }
        else
        {
            VAR_19 = FUNC_5(&VAR_17);
            VAR_20 = FUNC_5(&VAR_18);
            FUNC_0("unknown attr %wZ=%wZ\n", &VAR_19, &VAR_20);
        }
    }

    if (VAR_22) return VAR_2;
    VAR_16->actctx->sections |= VAR_3;
    if (VAR_21) return VAR_5;

    return FUNC_3(VAR_14, VAR_8, VAR_6);
}
