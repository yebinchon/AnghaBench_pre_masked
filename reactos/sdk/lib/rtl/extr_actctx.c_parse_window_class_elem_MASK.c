
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int xmlstr_t ;
typedef int xmlbuf_t ;
struct TYPE_4__ {int name; void* versioned; } ;
struct TYPE_5__ {TYPE_1__ class; } ;
struct entity {TYPE_2__ u; } ;
struct dll_redirect {int entities; } ;
struct actctx_loader {TYPE_3__* actctx; } ;
typedef int UNICODE_STRING ;
struct TYPE_6__ {int sections; } ;
typedef void* BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,int *,...) ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 struct entity* FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,int *,int *,void**,void**) ;
 void* FUNC_3 (int *,int *) ;
 int VAR_4 ;
 void* FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 void* FUNC_6 (int *,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int ) ;
 scalar_t__ FUNC_9 (int *,int ) ;
 scalar_t__ FUNC_10 (int *,int ) ;
 int FUNC_11 (int *) ;
 int VAR_7 ;

__attribute__((used)) static BOOL FUNC_12(xmlbuf_t* VAR_8, struct dll_redirect* VAR_9, struct actctx_loader* VAR_10)
{
    xmlstr_t VAR_11, VAR_12, VAR_13, VAR_14;
    BOOL VAR_15 = VAR_1, VAR_16 = VAR_2, VAR_17;
    struct entity* VAR_18;
    UNICODE_STRING VAR_19, VAR_20, VAR_21;

    if (!(VAR_18 = FUNC_1(&VAR_9->entities, VAR_0)))
        return VAR_1;

    VAR_18->u.class.versioned = VAR_2;
    while (FUNC_2(VAR_8, &VAR_13, &VAR_14, &VAR_17, &VAR_15))
    {
        if (FUNC_8(&VAR_13, VAR_5))
        {
            if (FUNC_10(&VAR_14, VAR_4))
                VAR_18->u.class.versioned = VAR_1;
            else if (!FUNC_10(&VAR_14, VAR_7))
               return VAR_1;
        }
        else
        {
            VAR_20 = FUNC_7(&VAR_13);
            VAR_21 = FUNC_7(&VAR_14);
            FUNC_0("unknown attr %wZ=%wZ\n", &VAR_20, &VAR_21);
        }
    }

    if (VAR_17 || VAR_15) return VAR_15;

    if (!FUNC_5(VAR_8, &VAR_12)) return VAR_1;

    if (!(VAR_18->u.class.name = FUNC_11(&VAR_12))) return VAR_1;

    VAR_10->actctx->sections |= VAR_3;

    while (VAR_16 && (VAR_16 = FUNC_3(VAR_8, &VAR_11)))
    {
        if (FUNC_9(&VAR_11, VAR_6))
        {
            VAR_16 = FUNC_4(VAR_8);
            break;
        }
        else
        {
            VAR_19 = FUNC_7(&VAR_11);
            FUNC_0("unknown elem %wZ\n", &VAR_19);
            VAR_16 = FUNC_6(VAR_8, &VAR_11);
        }
    }

    return VAR_16;
}
