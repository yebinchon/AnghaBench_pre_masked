
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int xmlstr_t ;
typedef int xmlbuf_t ;
struct TYPE_4__ {void* version; void* clsid; void* name; } ;
struct TYPE_5__ {TYPE_1__ clrsurrogate; } ;
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
 scalar_t__ VAR_3 ;
 struct entity* FUNC_1 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int *,int *,int *,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;
 int VAR_8 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 void* FUNC_6 (int *) ;

__attribute__((used)) static BOOL FUNC_7(xmlbuf_t* VAR_9, struct assembly* VAR_10, struct actctx_loader *VAR_11)
{
    xmlstr_t VAR_12, VAR_13;
    UNICODE_STRING VAR_14, VAR_15;
    BOOL VAR_16 = VAR_2, VAR_17;
    struct entity* VAR_18;

    VAR_18 = FUNC_1(&VAR_10->entities, VAR_0);
    if (!VAR_18) return VAR_2;

    while (FUNC_2(VAR_9, &VAR_12, &VAR_13, &VAR_17, &VAR_16))
    {
        if (FUNC_5(&VAR_12, VAR_7))
        {
            if (!(VAR_18->u.clrsurrogate.name = FUNC_6(&VAR_13))) return VAR_2;
        }
        else if (FUNC_5(&VAR_12, VAR_6))
        {
            if (!(VAR_18->u.clrsurrogate.clsid = FUNC_6(&VAR_13))) return VAR_2;
        }
        else if (FUNC_5(&VAR_12, VAR_8))
        {
            if (!(VAR_18->u.clrsurrogate.version = FUNC_6(&VAR_13))) return VAR_2;
        }
        else
        {
            VAR_14 = FUNC_4(&VAR_12);
            VAR_15 = FUNC_4(&VAR_13);
            FUNC_0("unknown attr %wZ=%wZ\n", &VAR_14, &VAR_15);
        }
    }

    if (VAR_17) return VAR_2;
    VAR_11->actctx->sections |= VAR_1;
    if (VAR_16) return VAR_3;

    return FUNC_3(VAR_9, VAR_5, VAR_4);
}
