
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ encoding; int * ptr; } ;
typedef TYPE_1__ robj ;
typedef int quicklist ;
struct TYPE_18__ {TYPE_3__* db; TYPE_1__** argv; } ;
typedef TYPE_2__ client ;
struct TYPE_21__ {int dirty; } ;
struct TYPE_20__ {int ok; int outofrangeerr; int nokeyerr; } ;
struct TYPE_19__ {int id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,TYPE_1__*,long*,int *) ;
 TYPE_1__* FUNC_3 (TYPE_2__*,TYPE_1__*,int ) ;
 int FUNC_4 (int ,char*,TYPE_1__*,int ) ;
 int FUNC_5 (int *,long,int *,int ) ;
 int FUNC_6 (int *) ;
 TYPE_6__ VAR_4 ;
 int FUNC_7 (char*) ;
 TYPE_5__ VAR_5 ;
 int FUNC_8 (TYPE_3__*,TYPE_1__*) ;

void FUNC_9(client *VAR_6) {
    robj *VAR_7 = FUNC_3(VAR_6,VAR_6->argv[1],VAR_5.nokeyerr);
    if (VAR_7 == ((void*)0) || FUNC_1(VAR_6,VAR_7,VAR_3)) return;
    long VAR_8;
    robj *VAR_9 = VAR_6->argv[3];

    if ((FUNC_2(VAR_6, VAR_6->argv[2], &VAR_8, ((void*)0)) != VAR_0))
        return;

    if (VAR_7->encoding == VAR_2) {
        quicklist *VAR_10 = VAR_7->ptr;
        int VAR_11 = FUNC_5(VAR_10, VAR_8,
                                               VAR_9->ptr, FUNC_6(VAR_9->ptr));
        if (!VAR_11) {
            FUNC_0(VAR_6,VAR_5.outofrangeerr);
        } else {
            FUNC_0(VAR_6,VAR_5.ok);
            FUNC_8(VAR_6->db,VAR_6->argv[1]);
            FUNC_4(VAR_1,"lset",VAR_6->argv[1],VAR_6->db->id);
            VAR_4.dirty++;
        }
    } else {
        FUNC_7("Unknown list encoding");
    }
}
