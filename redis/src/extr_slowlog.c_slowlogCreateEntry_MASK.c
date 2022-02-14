
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int argc; long long duration; void* cname; void* peerid; scalar_t__ id; int time; TYPE_3__** argv; } ;
typedef TYPE_2__ slowlogEntry ;
typedef void* sds ;
struct TYPE_15__ {scalar_t__ type; scalar_t__ refcount; int ptr; } ;
typedef TYPE_3__ robj ;
struct TYPE_16__ {TYPE_1__* name; } ;
typedef TYPE_4__ client ;
struct TYPE_17__ {int slowlog_entry_id; } ;
struct TYPE_13__ {int ptr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 void* FUNC_0 (scalar_t__,void*) ;
 TYPE_3__* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 void* FUNC_4 (void*,char*,unsigned long) ;
 void* FUNC_5 () ;
 unsigned long FUNC_6 (int ) ;
 void* FUNC_7 (int ) ;
 void* FUNC_8 (int ,unsigned long) ;
 TYPE_8__ VAR_4 ;
 int FUNC_9 (int *) ;
 void* FUNC_10 (int) ;

slowlogEntry *FUNC_11(client *VAR_5, robj **VAR_6, int VAR_7, long long VAR_8) {
    slowlogEntry *VAR_9 = FUNC_10(sizeof(*VAR_9));
    int VAR_10, VAR_11 = VAR_7;

    if (VAR_11 > VAR_2) VAR_11 = VAR_2;
    VAR_9->argc = VAR_11;
    VAR_9->argv = FUNC_10(sizeof(robj*)*VAR_11);
    for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {



        if (VAR_11 != VAR_7 && VAR_10 == VAR_11-1) {
            VAR_9->argv[VAR_10] = FUNC_0(VAR_1,
                FUNC_4(FUNC_5(),"... (%d more arguments)",
                VAR_7-VAR_11+1));
        } else {

            if (VAR_6[VAR_10]->type == VAR_1 &&
                FUNC_3(VAR_6[VAR_10]) &&
                FUNC_6(VAR_6[VAR_10]->ptr) > VAR_3)
            {
                sds VAR_12 = FUNC_8(VAR_6[VAR_10]->ptr, VAR_3);

                VAR_12 = FUNC_4(VAR_12,"... (%lu more bytes)",
                    (unsigned long)
                    FUNC_6(VAR_6[VAR_10]->ptr) - VAR_3);
                VAR_9->argv[VAR_10] = FUNC_0(VAR_1,VAR_12);
            } else if (VAR_6[VAR_10]->refcount == VAR_0) {
                VAR_9->argv[VAR_10] = VAR_6[VAR_10];
            } else {






                VAR_9->argv[VAR_10] = FUNC_1(VAR_6[VAR_10]);
            }
        }
    }
    VAR_9->time = FUNC_9(((void*)0));
    VAR_9->duration = VAR_8;
    VAR_9->id = VAR_4.slowlog_entry_id++;
    VAR_9->peerid = FUNC_7(FUNC_2(VAR_5));
    VAR_9->cname = VAR_5->name ? FUNC_7(VAR_5->name->ptr) : FUNC_5();
    return VAR_9;
}
