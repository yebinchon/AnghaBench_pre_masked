
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ encoding; int ptr; } ;
typedef TYPE_1__ robj ;
struct TYPE_16__ {int * argv; TYPE_3__* db; } ;
typedef TYPE_2__ client ;
struct TYPE_19__ {int dirty; } ;
struct TYPE_18__ {int ok; } ;
struct TYPE_17__ {int id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ,long*,int *) ;
 long FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (TYPE_2__*,int ,int ) ;
 int FUNC_6 (int ,char*,int ,int ) ;
 int FUNC_7 (int ,long,long) ;
 TYPE_5__ VAR_5 ;
 int FUNC_8 (char*) ;
 TYPE_4__ VAR_6 ;
 int FUNC_9 (TYPE_3__*,int ) ;

void FUNC_10(client *VAR_7) {
    robj *VAR_8;
    long VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;

    if ((FUNC_3(VAR_7, VAR_7->argv[2], &VAR_9, ((void*)0)) != VAR_0) ||
        (FUNC_3(VAR_7, VAR_7->argv[3], &VAR_10, ((void*)0)) != VAR_0)) return;

    if ((VAR_8 = FUNC_5(VAR_7,VAR_7->argv[1],VAR_6.ok)) == ((void*)0) ||
        FUNC_1(VAR_7,VAR_8,VAR_4)) return;
    VAR_11 = FUNC_4(VAR_8);


    if (VAR_9 < 0) VAR_9 = VAR_11+VAR_9;
    if (VAR_10 < 0) VAR_10 = VAR_11+VAR_10;
    if (VAR_9 < 0) VAR_9 = 0;



    if (VAR_9 > VAR_10 || VAR_9 >= VAR_11) {

        VAR_12 = VAR_11;
        VAR_13 = 0;
    } else {
        if (VAR_10 >= VAR_11) VAR_10 = VAR_11-1;
        VAR_12 = VAR_9;
        VAR_13 = VAR_11-VAR_10-1;
    }


    if (VAR_8->encoding == VAR_3) {
        FUNC_7(VAR_8->ptr,0,VAR_12);
        FUNC_7(VAR_8->ptr,-VAR_13,VAR_13);
    } else {
        FUNC_8("Unknown list encoding");
    }

    FUNC_6(VAR_2,"ltrim",VAR_7->argv[1],VAR_7->db->id);
    if (FUNC_4(VAR_8) == 0) {
        FUNC_2(VAR_7->db,VAR_7->argv[1]);
        FUNC_6(VAR_1,"del",VAR_7->argv[1],VAR_7->db->id);
    }
    FUNC_9(VAR_7->db,VAR_7->argv[1]);
    VAR_5.dirty++;
    FUNC_0(VAR_7,VAR_6.ok);
}
