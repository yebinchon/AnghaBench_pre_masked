
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int ele; int ell; } ;
typedef TYPE_2__ zsetopval ;
struct TYPE_15__ {scalar_t__ type; scalar_t__ encoding; TYPE_1__* subject; } ;
typedef TYPE_3__ zsetopsrc ;
struct TYPE_16__ {struct TYPE_16__* dict; } ;
typedef TYPE_4__ zset ;
typedef int dictEntry ;
typedef TYPE_4__ dict ;
struct TYPE_13__ {TYPE_4__* ptr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int * FUNC_0 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int * FUNC_6 (TYPE_4__*,int ,double*) ;

int FUNC_7(zsetopsrc *VAR_6, zsetopval *VAR_7, double *VAR_8) {
    if (VAR_6->subject == ((void*)0))
        return 0;

    if (VAR_6->type == VAR_4) {
        if (VAR_6->encoding == VAR_1) {
            if (FUNC_4(VAR_7) &&
                FUNC_2(VAR_6->subject->ptr,VAR_7->ell))
            {
                *VAR_8 = 1.0;
                return 1;
            } else {
                return 0;
            }
        } else if (VAR_6->encoding == VAR_0) {
            dict *VAR_9 = VAR_6->subject->ptr;
            FUNC_5(VAR_7);
            if (FUNC_0(VAR_9,VAR_7->ele) != ((void*)0)) {
                *VAR_8 = 1.0;
                return 1;
            } else {
                return 0;
            }
        } else {
            FUNC_3("Unknown set encoding");
        }
    } else if (VAR_6->type == VAR_5) {
        FUNC_5(VAR_7);

        if (VAR_6->encoding == VAR_3) {
            if (FUNC_6(VAR_6->subject->ptr,VAR_7->ele,VAR_8) != ((void*)0)) {

                return 1;
            } else {
                return 0;
            }
        } else if (VAR_6->encoding == VAR_2) {
            zset *VAR_10 = VAR_6->subject->ptr;
            dictEntry *VAR_11;
            if ((VAR_11 = FUNC_0(VAR_10->dict,VAR_7->ele)) != ((void*)0)) {
                *VAR_8 = *(double*)FUNC_1(VAR_11);
                return 1;
            } else {
                return 0;
            }
        } else {
            FUNC_3("Unknown sorted set encoding");
        }
    } else {
        FUNC_3("Unsupported type");
    }
}
