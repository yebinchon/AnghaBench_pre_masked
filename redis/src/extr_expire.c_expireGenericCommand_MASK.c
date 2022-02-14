
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int robj ;
struct TYPE_15__ {TYPE_2__* db; int ** argv; } ;
typedef TYPE_1__ client ;
struct TYPE_18__ {int dirty; scalar_t__ lazyfree_lazy_expire; int masterhost; int loading; } ;
struct TYPE_17__ {int cone; int * del; int * unlink; int czero; } ;
struct TYPE_16__ {int id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int *,long long*,int *) ;
 int * FUNC_4 (TYPE_2__*,int *) ;
 long long FUNC_5 () ;
 int FUNC_6 (int ,char*,int *,int ) ;
 int FUNC_7 (TYPE_1__*,int,int *,int *) ;
 TYPE_7__ VAR_3 ;
 int FUNC_8 (TYPE_1__*,int *,int) ;
 int FUNC_9 (TYPE_1__*,TYPE_2__*,int *,long long) ;
 TYPE_3__ VAR_4 ;
 int FUNC_10 (TYPE_2__*,int *) ;

void FUNC_11(client *VAR_5, long long VAR_6, int VAR_7) {
    robj *VAR_8 = VAR_5->argv[1], *VAR_9 = VAR_5->argv[2];
    long long VAR_10;

    if (FUNC_3(VAR_5, VAR_9, &VAR_10, ((void*)0)) != VAR_0)
        return;

    if (VAR_7 == VAR_2) VAR_10 *= 1000;
    VAR_10 += VAR_6;


    if (FUNC_4(VAR_5->db,VAR_8) == ((void*)0)) {
        FUNC_0(VAR_5,VAR_4.czero);
        return;
    }







    if (VAR_10 <= FUNC_5() && !VAR_3.loading && !VAR_3.masterhost) {
        robj *VAR_11;

        int VAR_12 = VAR_3.lazyfree_lazy_expire ? FUNC_1(VAR_5->db,VAR_8) :
                                                    FUNC_2(VAR_5->db,VAR_8);
        FUNC_8(VAR_5,VAR_8,VAR_12);
        VAR_3.dirty++;


        VAR_11 = VAR_3.lazyfree_lazy_expire ? VAR_4.unlink : VAR_4.del;
        FUNC_7(VAR_5,2,VAR_11,VAR_8);
        FUNC_10(VAR_5->db,VAR_8);
        FUNC_6(VAR_1,"del",VAR_8,VAR_5->db->id);
        FUNC_0(VAR_5, VAR_4.cone);
        return;
    } else {
        FUNC_9(VAR_5,VAR_5->db,VAR_8,VAR_10);
        FUNC_0(VAR_5,VAR_4.cone);
        FUNC_10(VAR_5->db,VAR_8);
        FUNC_6(VAR_1,"expire",VAR_8,VAR_5->db->id);
        VAR_3.dirty++;
        return;
    }
}
