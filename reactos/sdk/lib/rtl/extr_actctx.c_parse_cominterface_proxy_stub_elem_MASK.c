
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int xmlstr_t ;
typedef int xmlbuf_t ;
struct TYPE_4__ {void* tlib; int mask; void* base; void* name; void* iid; } ;
struct TYPE_5__ {TYPE_1__ ifaceps; } ;
struct entity {TYPE_2__ u; } ;
struct dll_redirect {int entities; } ;
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
 int VAR_14 ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int ) ;
 void* FUNC_7 (int *) ;

__attribute__((used)) static BOOL FUNC_8(xmlbuf_t* VAR_15, struct dll_redirect* VAR_16, struct actctx_loader* VAR_17)
{
    xmlstr_t VAR_18, VAR_19;
    BOOL VAR_20 = VAR_2, VAR_21;
    struct entity* VAR_22;
    UNICODE_STRING VAR_23, VAR_24;

    if (!(VAR_22 = FUNC_1(&VAR_16->entities, VAR_0)))
        return VAR_2;

    while (FUNC_2(VAR_15, &VAR_18, &VAR_19, &VAR_21, &VAR_20))
    {
        if (FUNC_6(&VAR_18, VAR_10))
        {
            if (!(VAR_22->u.ifaceps.iid = FUNC_7(&VAR_19))) return VAR_2;
        }
        else if (FUNC_6(&VAR_18, VAR_9))
        {
            if (!(VAR_22->u.ifaceps.name = FUNC_7(&VAR_19))) return VAR_2;
        }
        else if (FUNC_6(&VAR_18, VAR_7))
        {
            if (!(VAR_22->u.ifaceps.base = FUNC_7(&VAR_19))) return VAR_2;
            VAR_22->u.ifaceps.mask |= VAR_1;
        }
        else if (FUNC_6(&VAR_18, VAR_11))
        {
            if (!(FUNC_4(&VAR_19, VAR_22))) return VAR_2;
            VAR_22->u.ifaceps.mask |= VAR_4;
        }
        else if (FUNC_6(&VAR_18, VAR_14))
        {
            if (!(VAR_22->u.ifaceps.tlib = FUNC_7(&VAR_19))) return VAR_2;
        }

        else if (FUNC_6(&VAR_18, VAR_12) || FUNC_6(&VAR_18, VAR_13))
        {
        }
        else
        {
            VAR_24 = FUNC_5(&VAR_18);
            VAR_23 = FUNC_5(&VAR_19);
            FUNC_0("unknown attr %wZ=%wZ\n", &VAR_24, &VAR_23);
        }
    }

    if (VAR_21) return VAR_2;
    VAR_17->actctx->sections |= VAR_3;
    if (VAR_20) return VAR_5;

    return FUNC_3(VAR_15, VAR_8, VAR_6);
}
