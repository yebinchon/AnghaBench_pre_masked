
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_21__ {int refcount; scalar_t__ encoding; void* ptr; } ;
typedef TYPE_1__ robj ;
struct TYPE_22__ {TYPE_3__* db; int * argv; } ;
typedef TYPE_2__ client ;
struct TYPE_25__ {int dirty; } ;
struct TYPE_24__ {TYPE_1__* crlf; TYPE_1__* colon; } ;
struct TYPE_23__ {int id; } ;


 scalar_t__ VAR_0 ;
 long long VAR_1 ;
 long long VAR_2 ;
 long long VAR_3 ;
 long long VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 long long VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,TYPE_1__*,int ) ;
 TYPE_1__* FUNC_3 (long long) ;
 int FUNC_4 (TYPE_3__*,int ,TYPE_1__*) ;
 int FUNC_5 (TYPE_3__*,int ,TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,TYPE_1__*,long long*,int *) ;
 TYPE_1__* FUNC_7 (TYPE_3__*,int ) ;
 int FUNC_8 (int ,char*,int ,int ) ;
 TYPE_5__ VAR_9 ;
 TYPE_4__ VAR_10 ;
 int FUNC_9 (TYPE_3__*,int ) ;

void FUNC_10(client *VAR_11, long long VAR_12) {
    long long VAR_13, VAR_14;
    robj *VAR_15, *VAR_16;

    VAR_15 = FUNC_7(VAR_11->db,VAR_11->argv[1]);
    if (VAR_15 != ((void*)0) && FUNC_2(VAR_11,VAR_15,VAR_8)) return;
    if (FUNC_6(VAR_11,VAR_15,&VAR_13,((void*)0)) != VAR_0) return;

    VAR_14 = VAR_13;
    if ((VAR_12 < 0 && VAR_14 < 0 && VAR_12 < (VAR_2-VAR_14)) ||
        (VAR_12 > 0 && VAR_14 > 0 && VAR_12 > (VAR_1-VAR_14))) {
        FUNC_1(VAR_11,"increment or decrement would overflow");
        return;
    }
    VAR_13 += VAR_12;

    if (VAR_15 && VAR_15->refcount == 1 && VAR_15->encoding == VAR_6 &&
        (VAR_13 < 0 || VAR_13 >= VAR_7) &&
        VAR_13 >= VAR_4 && VAR_13 <= VAR_3)
    {
        VAR_16 = VAR_15;
        VAR_15->ptr = (void*)((long)VAR_13);
    } else {
        VAR_16 = FUNC_3(VAR_13);
        if (VAR_15) {
            FUNC_5(VAR_11->db,VAR_11->argv[1],VAR_16);
        } else {
            FUNC_4(VAR_11->db,VAR_11->argv[1],VAR_16);
        }
    }
    FUNC_9(VAR_11->db,VAR_11->argv[1]);
    FUNC_8(VAR_5,"incrby",VAR_11->argv[1],VAR_11->db->id);
    VAR_9.dirty++;
    FUNC_0(VAR_11,VAR_10.colon);
    FUNC_0(VAR_11,VAR_16);
    FUNC_0(VAR_11,VAR_10.crlf);
}
