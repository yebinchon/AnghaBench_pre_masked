
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_14__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


struct TYPE_29__ {TYPE_14__* zs; int node; } ;
struct TYPE_24__ {int * sptr; int * eptr; TYPE_14__* zl; } ;
struct TYPE_18__ {TYPE_9__ sl; TYPE_4__ zl; } ;
struct TYPE_22__ {int di; int de; TYPE_14__* dict; } ;
struct TYPE_21__ {scalar_t__ ii; TYPE_14__* is; } ;
struct TYPE_19__ {TYPE_2__ ht; TYPE_1__ is; } ;
struct TYPE_23__ {TYPE_11__ zset; TYPE_12__ set; } ;
struct TYPE_17__ {scalar_t__ type; scalar_t__ encoding; TYPE_5__* subject; TYPE_3__ iter; } ;
typedef TYPE_10__ zsetopsrc ;
typedef TYPE_11__ iterzset ;
typedef TYPE_12__ iterset ;
struct TYPE_28__ {TYPE_7__* header; } ;
struct TYPE_27__ {TYPE_6__* level; } ;
struct TYPE_26__ {int forward; } ;
struct TYPE_25__ {TYPE_14__* ptr; } ;
struct TYPE_20__ {TYPE_8__* zsl; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_14__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (TYPE_14__*,int ) ;
 int * FUNC_5 (TYPE_14__*,int *) ;

void FUNC_6(zsetopsrc *VAR_6) {
    if (VAR_6->subject == ((void*)0))
        return;

    if (VAR_6->type == VAR_4) {
        iterset *VAR_7 = &VAR_6->iter.set;
        if (VAR_6->encoding == VAR_1) {
            VAR_7->is.is = VAR_6->subject->ptr;
            VAR_7->is.ii = 0;
        } else if (VAR_6->encoding == VAR_0) {
            VAR_7->ht.dict = VAR_6->subject->ptr;
            VAR_7->ht.di = FUNC_0(VAR_6->subject->ptr);
            VAR_7->ht.de = FUNC_1(VAR_7->ht.di);
        } else {
            FUNC_3("Unknown set encoding");
        }
    } else if (VAR_6->type == VAR_5) {
        iterzset *VAR_8 = &VAR_6->iter.zset;
        if (VAR_6->encoding == VAR_3) {
            VAR_8->zl.zl = VAR_6->subject->ptr;
            VAR_8->zl.eptr = FUNC_4(VAR_8->zl.zl,0);
            if (VAR_8->zl.eptr != ((void*)0)) {
                VAR_8->zl.sptr = FUNC_5(VAR_8->zl.zl,VAR_8->zl.eptr);
                FUNC_2(VAR_8->zl.sptr != ((void*)0));
            }
        } else if (VAR_6->encoding == VAR_2) {
            VAR_8->sl.zs = VAR_6->subject->ptr;
            VAR_8->sl.node = VAR_8->sl.zs->zsl->header->level[0].forward;
        } else {
            FUNC_3("Unknown sorted set encoding");
        }
    } else {
        FUNC_3("Unsupported type");
    }
}
