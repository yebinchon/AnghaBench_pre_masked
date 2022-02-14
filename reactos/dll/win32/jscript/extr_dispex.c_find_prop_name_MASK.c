
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {TYPE_1__* builtin_info; TYPE_4__* props; } ;
typedef TYPE_3__ jsdisp_t ;
struct TYPE_15__ {unsigned int idx; TYPE_5__ const* p; } ;
struct TYPE_17__ {unsigned int bucket_head; unsigned int bucket_next; TYPE_2__ u; int name; } ;
typedef TYPE_4__ dispex_prop_t ;
struct TYPE_18__ {unsigned int flags; scalar_t__ setter; } ;
typedef TYPE_5__ builtin_prop_t ;
typedef unsigned int WCHAR ;
struct TYPE_14__ {unsigned int (* idx_length ) (TYPE_3__*) ;scalar_t__ idx_put; } ;
typedef int HRESULT ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_4__* FUNC_0 (TYPE_3__*,unsigned int const*,int ,unsigned int) ;
 TYPE_5__* FUNC_1 (TYPE_3__*,unsigned int const*) ;
 unsigned int FUNC_2 (TYPE_3__*,unsigned int) ;
 scalar_t__ FUNC_3 (unsigned int const) ;
 unsigned int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (unsigned int const*,int ) ;

__attribute__((used)) static HRESULT FUNC_6(jsdisp_t *VAR_8, unsigned VAR_9, const WCHAR *VAR_10, dispex_prop_t **VAR_11)
{
    const builtin_prop_t *VAR_12;
    unsigned VAR_13, VAR_14, VAR_15 = 0;
    dispex_prop_t *VAR_16;

    VAR_13 = FUNC_2(VAR_8, VAR_9);
    VAR_14 = VAR_8->props[VAR_13].bucket_head;
    while(VAR_14 != 0) {
        if(!FUNC_5(VAR_10, VAR_8->props[VAR_14].name)) {
            if(VAR_15 != 0) {
                VAR_8->props[VAR_15].bucket_next = VAR_8->props[VAR_14].bucket_next;
                VAR_8->props[VAR_14].bucket_next = VAR_8->props[VAR_13].bucket_head;
                VAR_8->props[VAR_13].bucket_head = VAR_14;
            }

            *VAR_11 = &VAR_8->props[VAR_14];
            return VAR_7;
        }

        VAR_15 = VAR_14;
        VAR_14 = VAR_8->props[VAR_14].bucket_next;
    }

    VAR_12 = FUNC_1(VAR_8, VAR_10);
    if(VAR_12) {
        unsigned VAR_17 = VAR_12->flags;
        if(VAR_17 & VAR_3)
            VAR_17 |= VAR_4 | VAR_1;
        else if(VAR_12->setter)
            VAR_17 |= VAR_4;
        VAR_17 &= VAR_2 | VAR_4 | VAR_1;
        VAR_16 = FUNC_0(VAR_8, VAR_10, VAR_5, VAR_17);
        if(!VAR_16)
            return VAR_0;

        VAR_16->u.p = VAR_12;
        *VAR_11 = VAR_16;
        return VAR_7;
    }

    if(VAR_8->builtin_info->idx_length) {
        const WCHAR *VAR_18;
        unsigned VAR_19 = 0;

        for(VAR_18 = VAR_10; FUNC_3(*VAR_18) && VAR_19 < 0x10000; VAR_18++)
            VAR_19 = VAR_19*10 + (*VAR_18-'0');
        if(!*VAR_18 && VAR_19 < VAR_8->builtin_info->idx_length(VAR_8)) {
            VAR_16 = FUNC_0(VAR_8, VAR_10, VAR_6, VAR_8->builtin_info->idx_put ? VAR_4 : 0);
            if(!VAR_16)
                return VAR_0;

            VAR_16->u.idx = VAR_19;
            *VAR_11 = VAR_16;
            return VAR_7;
        }
    }

    *VAR_11 = ((void*)0);
    return VAR_7;
}
