
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
struct TYPE_6__ {TYPE_1__ progids; void* progid; void* miscstatusdocprint; void* miscstatusicon; void* miscstatusthumbnail; void* miscstatuscontent; void* miscstatus; int model; void* tlbid; void* clsid; } ;
struct TYPE_7__ {TYPE_2__ comclass; } ;
struct entity {TYPE_3__ u; } ;
struct dll_redirect {int entities; } ;
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
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_2 (int *,int *,int *,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 void* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,struct entity*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int *) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,int ) ;
 scalar_t__ FUNC_11 (int *,int ) ;
 void* FUNC_12 (int *) ;

__attribute__((used)) static BOOL FUNC_13(xmlbuf_t* VAR_16, struct dll_redirect* VAR_17, struct actctx_loader *VAR_18)
{
    xmlstr_t VAR_19, VAR_20, VAR_21;
    BOOL VAR_22 = VAR_4, VAR_23 = VAR_1, VAR_24;
    struct entity* VAR_25;
    UNICODE_STRING VAR_26, VAR_27;

    if (!(VAR_25 = FUNC_1(&VAR_17->entities, VAR_0)))
        return VAR_1;

    while (FUNC_2(VAR_16, &VAR_20, &VAR_21, &VAR_24, &VAR_23))
    {
        if (FUNC_10(&VAR_20, VAR_5))
        {
            if (!(VAR_25->u.comclass.clsid = FUNC_12(&VAR_21))) return VAR_1;
        }
        else if (FUNC_10(&VAR_20, VAR_13))
        {
            if (!(VAR_25->u.comclass.progid = FUNC_12(&VAR_21))) return VAR_1;
        }
        else if (FUNC_10(&VAR_20, VAR_15))
        {
            if (!(VAR_25->u.comclass.tlbid = FUNC_12(&VAR_21))) return VAR_1;
        }
        else if (FUNC_10(&VAR_20, VAR_14))
        {
            VAR_25->u.comclass.model = FUNC_6(&VAR_21);
        }
        else if (FUNC_10(&VAR_20, VAR_8))
        {
            VAR_25->u.comclass.miscstatus = FUNC_4(&VAR_21);
        }
        else if (FUNC_10(&VAR_20, VAR_9))
        {
            VAR_25->u.comclass.miscstatuscontent = FUNC_4(&VAR_21);
        }
        else if (FUNC_10(&VAR_20, VAR_12))
        {
            VAR_25->u.comclass.miscstatusthumbnail = FUNC_4(&VAR_21);
        }
        else if (FUNC_10(&VAR_20, VAR_11))
        {
            VAR_25->u.comclass.miscstatusicon = FUNC_4(&VAR_21);
        }
        else if (FUNC_10(&VAR_20, VAR_10))
        {
            VAR_25->u.comclass.miscstatusdocprint = FUNC_4(&VAR_21);
        }
        else if (FUNC_10(&VAR_20, VAR_7))
        {

        }
        else
        {
            VAR_27 = FUNC_9(&VAR_20);
            VAR_26 = FUNC_9(&VAR_21);
            FUNC_0("unknown attr %wZ=%wZ\n", &VAR_27, &VAR_26);
        }
    }

    if (VAR_24) return VAR_1;

    VAR_18->actctx->sections |= VAR_3;
    if (VAR_25->u.comclass.progid)
        VAR_18->actctx->sections |= VAR_2;

    if (VAR_23) return VAR_4;

    while (VAR_22 && (VAR_22 = FUNC_3(VAR_16, &VAR_19)))
    {
        if (FUNC_11(&VAR_19, VAR_6))
        {
            VAR_22 = FUNC_7(VAR_16);
            break;
        }
        else if (FUNC_10(&VAR_19, VAR_13))
        {
            VAR_22 = FUNC_5(VAR_16, VAR_25);
        }
        else
        {
            VAR_27 = FUNC_9(&VAR_19);
            FUNC_0("unknown elem %wZ\n", &VAR_27);
            VAR_22 = FUNC_8(VAR_16, &VAR_19);
        }
    }

    if (VAR_25->u.comclass.progids.num)
        VAR_18->actctx->sections |= VAR_2;

    return VAR_22;
}
