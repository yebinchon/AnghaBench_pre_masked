
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int xmlstr_t ;
typedef int xmlbuf_t ;
struct TYPE_5__ {scalar_t__ num; } ;
struct TYPE_6__ {TYPE_1__ progids; void* progid; void* version; int model; void* tlbid; void* clsid; void* name; } ;
struct TYPE_7__ {TYPE_2__ comclass; } ;
struct entity {TYPE_3__ u; } ;
struct assembly {int entities; } ;
struct actctx_loader {TYPE_4__* actctx; } ;
typedef int UNICODE_STRING ;
struct TYPE_8__ {int sections; } ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,int *,...) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct entity* FUNC_1 (int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int *,int *,int *,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *,struct entity*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,int ) ;
 scalar_t__ FUNC_10 (int *,int ) ;
 void* FUNC_11 (int *) ;

__attribute__((used)) static BOOL FUNC_12(xmlbuf_t* VAR_12, struct assembly* VAR_13, struct actctx_loader *VAR_14)
{
    xmlstr_t VAR_15, VAR_16, VAR_17;
    BOOL VAR_18 = VAR_1, VAR_19, VAR_20 = VAR_4;
    struct entity* VAR_21;

    VAR_21 = FUNC_1(&VAR_13->entities, VAR_0);
    if (!VAR_21) return VAR_1;

    while (FUNC_2(VAR_12, &VAR_15, &VAR_16, &VAR_19, &VAR_18))
    {
        if (FUNC_9(&VAR_15, VAR_7))
        {
            if (!(VAR_21->u.comclass.name = FUNC_11(&VAR_16))) return VAR_1;
        }
        else if (FUNC_9(&VAR_15, VAR_6))
        {
            if (!(VAR_21->u.comclass.clsid = FUNC_11(&VAR_16))) return VAR_1;
        }
        else if (FUNC_9(&VAR_15, VAR_8))
        {
            if (!(VAR_21->u.comclass.progid = FUNC_11(&VAR_16))) return VAR_1;
        }
        else if (FUNC_9(&VAR_15, VAR_11))
        {
            if (!(VAR_21->u.comclass.tlbid = FUNC_11(&VAR_16))) return VAR_1;
        }
        else if (FUNC_9(&VAR_15, VAR_10))
        {
            VAR_21->u.comclass.model = FUNC_5(&VAR_16);
        }
        else if (FUNC_9(&VAR_15, VAR_9))
        {
            if (!(VAR_21->u.comclass.version = FUNC_11(&VAR_16))) return VAR_1;
        }
        else
        {
            UNICODE_STRING VAR_22, VAR_23;
            VAR_22 = FUNC_8(&VAR_15);
            VAR_23 = FUNC_8(&VAR_16);
            FUNC_0("unknown attr %wZ=%wZ\n", &VAR_22, &VAR_23);
        }
    }

    if (VAR_19) return VAR_1;
    VAR_14->actctx->sections |= VAR_3;
    if (VAR_21->u.comclass.progid)
        VAR_14->actctx->sections |= VAR_2;
    if (VAR_18) return VAR_4;

    while (VAR_20 && (VAR_20 = FUNC_3(VAR_12, &VAR_17)))
    {
        if (FUNC_10(&VAR_17, VAR_5))
        {
            VAR_20 = FUNC_6(VAR_12);
            break;
        }
        else if (FUNC_9(&VAR_17, VAR_8))
        {
            VAR_20 = FUNC_4(VAR_12, VAR_21);
        }
        else
        {
            UNICODE_STRING VAR_24 = FUNC_8(&VAR_17);
            FUNC_0("unknown elem %wZ\n", &VAR_24);
            VAR_20 = FUNC_7(VAR_12, &VAR_17);
        }
    }

    if (VAR_21->u.comclass.progids.num)
        VAR_14->actctx->sections |= VAR_2;

    return VAR_20;
}
