
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int xmlstr_t ;
typedef int xmlbuf_t ;
struct TYPE_4__ {void* helpdir; void* tlbid; } ;
struct TYPE_5__ {TYPE_1__ typelib; } ;
struct entity {TYPE_2__ u; } ;
struct dll_redirect {int entities; } ;
struct actctx_loader {TYPE_3__* actctx; } ;
typedef int UNICODE_STRING ;
struct TYPE_6__ {int sections; } ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,int *,int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct entity* FUNC_1 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int *,int *,int *,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,struct entity*) ;
 int FUNC_5 (int *,struct entity*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int ) ;
 void* FUNC_8 (int *) ;

__attribute__((used)) static BOOL FUNC_9(xmlbuf_t* VAR_10, struct dll_redirect* VAR_11, struct actctx_loader* VAR_12)
{
    xmlstr_t VAR_13, VAR_14;
    BOOL VAR_15 = VAR_1, VAR_16;
    struct entity* VAR_17;
    UNICODE_STRING VAR_18, VAR_19;

    if (!(VAR_17 = FUNC_1(&VAR_11->entities, VAR_0)))
        return VAR_1;

    while (FUNC_2(VAR_10, &VAR_13, &VAR_14, &VAR_16, &VAR_15))
    {
        if (FUNC_7(&VAR_13, VAR_7))
        {
            if (!(VAR_17->u.typelib.tlbid = FUNC_8(&VAR_14))) return VAR_1;
        }
        else if (FUNC_7(&VAR_13, VAR_9))
        {
            if (!FUNC_5(&VAR_14, VAR_17)) return VAR_1;
        }
        else if (FUNC_7(&VAR_13, VAR_6))
        {
            if (!(VAR_17->u.typelib.helpdir = FUNC_8(&VAR_14))) return VAR_1;
        }
        else if (FUNC_7(&VAR_13, VAR_5))
        {
            if (!FUNC_4(&VAR_14, VAR_17)) return VAR_1;
        }
        else
        {
            VAR_19 = FUNC_6(&VAR_13);
            VAR_18 = FUNC_6(&VAR_14);
            FUNC_0("unknown attr %wZ=%wZ\n", &VAR_19, &VAR_18);
        }
    }

    if (VAR_16) return VAR_1;

    VAR_12->actctx->sections |= VAR_2;

    if (VAR_15) return VAR_3;

    return FUNC_3(VAR_10, VAR_8, VAR_4);
}
