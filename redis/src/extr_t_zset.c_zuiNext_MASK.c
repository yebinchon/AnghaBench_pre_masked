
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct TYPE_24__ {int flags; double score; int ele; int ell; int elen; int estr; } ;
typedef TYPE_8__ zsetopval ;
struct TYPE_23__ {TYPE_6__* node; } ;
struct TYPE_20__ {int * sptr; int * eptr; int zl; } ;
struct TYPE_15__ {TYPE_7__ sl; TYPE_4__ zl; } ;
struct TYPE_18__ {int di; int * de; } ;
struct TYPE_17__ {int ii; int is; } ;
struct TYPE_16__ {TYPE_2__ ht; TYPE_1__ is; } ;
struct TYPE_19__ {TYPE_10__ zset; TYPE_11__ set; } ;
struct TYPE_25__ {scalar_t__ type; scalar_t__ encoding; TYPE_3__ iter; int * subject; } ;
typedef TYPE_9__ zsetopsrc ;
typedef TYPE_10__ iterzset ;
typedef TYPE_11__ iterset ;
typedef int int64_t ;
struct TYPE_22__ {double score; TYPE_5__* level; int ele; } ;
struct TYPE_21__ {TYPE_6__* forward; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (TYPE_8__*,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *,int *,int *,int *) ;
 double FUNC_8 (int *) ;
 int FUNC_9 (int ,int **,int **) ;

int FUNC_10(zsetopsrc *VAR_7, zsetopval *VAR_8) {
    if (VAR_7->subject == ((void*)0))
        return 0;

    if (VAR_8->flags & VAR_6)
        FUNC_4(VAR_8->ele);

    FUNC_3(VAR_8,0,sizeof(zsetopval));

    if (VAR_7->type == VAR_4) {
        iterset *VAR_9 = &VAR_7->iter.set;
        if (VAR_7->encoding == VAR_1) {
            int64_t VAR_10;

            if (!FUNC_2(VAR_9->is.is,VAR_9->is.ii,&VAR_10))
                return 0;
            VAR_8->ell = VAR_10;
            VAR_8->score = 1.0;


            VAR_9->is.ii++;
        } else if (VAR_7->encoding == VAR_0) {
            if (VAR_9->ht.de == ((void*)0))
                return 0;
            VAR_8->ele = FUNC_0(VAR_9->ht.de);
            VAR_8->score = 1.0;


            VAR_9->ht.de = FUNC_1(VAR_9->ht.di);
        } else {
            FUNC_6("Unknown set encoding");
        }
    } else if (VAR_7->type == VAR_5) {
        iterzset *VAR_11 = &VAR_7->iter.zset;
        if (VAR_7->encoding == VAR_3) {

            if (VAR_11->zl.eptr == ((void*)0) || VAR_11->zl.sptr == ((void*)0))
                return 0;
            FUNC_5(FUNC_7(VAR_11->zl.eptr,&VAR_8->estr,&VAR_8->elen,&VAR_8->ell));
            VAR_8->score = FUNC_8(VAR_11->zl.sptr);


            FUNC_9(VAR_11->zl.zl,&VAR_11->zl.eptr,&VAR_11->zl.sptr);
        } else if (VAR_7->encoding == VAR_2) {
            if (VAR_11->sl.node == ((void*)0))
                return 0;
            VAR_8->ele = VAR_11->sl.node->ele;
            VAR_8->score = VAR_11->sl.node->score;


            VAR_11->sl.node = VAR_11->sl.node->level[0].forward;
        } else {
            FUNC_6("Unknown sorted set encoding");
        }
    } else {
        FUNC_6("Unsupported type");
    }
    return 1;
}
