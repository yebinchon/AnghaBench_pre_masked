
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;
typedef struct TYPE_26__ TYPE_15__ ;
typedef struct TYPE_25__ TYPE_11__ ;


typedef int streamID ;
typedef int stream ;
struct TYPE_27__ {int * ptr; } ;
typedef TYPE_1__ robj ;
struct TYPE_28__ {int argc; TYPE_6__** argv; TYPE_11__* db; } ;
typedef TYPE_2__ client ;
struct TYPE_29__ {char* ptr; } ;
struct TYPE_26__ {scalar_t__* blocked_clients_by_type; int dirty; } ;
struct TYPE_25__ {int id; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,TYPE_6__*,long long*,int *) ;
 int FUNC_5 (int ,char*,TYPE_6__*,int ) ;
 int FUNC_6 (TYPE_2__*,int,TYPE_1__*) ;
 TYPE_15__ VAR_4 ;
 int FUNC_7 (TYPE_11__*,TYPE_6__*) ;
 int FUNC_8 (TYPE_11__*,TYPE_6__*) ;
 int FUNC_9 (char*,char*) ;
 scalar_t__ FUNC_10 (int *,TYPE_6__**,int,int *,int *) ;
 scalar_t__ FUNC_11 (TYPE_2__*,TYPE_6__*,int *,int ) ;
 int FUNC_12 (TYPE_2__*,int *,int) ;
 scalar_t__ FUNC_13 (int *,long long,int) ;
 TYPE_1__* FUNC_14 (TYPE_2__*,TYPE_6__*) ;

void FUNC_15(client *VAR_5) {
    streamID VAR_6;
    int VAR_7 = 0;
    long long VAR_8 = -1;
    int VAR_9 = 0;

    int VAR_10 = 0;


    int VAR_11 = 2;

    for (; VAR_11 < VAR_5->argc; VAR_11++) {
        int VAR_12 = (VAR_5->argc-1) - VAR_11;
        char *VAR_13 = VAR_5->argv[VAR_11]->ptr;
        if (VAR_13[0] == '*' && VAR_13[1] == '\0') {


            break;
        } else if (!FUNC_9(VAR_13,"maxlen") && VAR_12) {
            VAR_9 = 0;
            char *VAR_14 = VAR_5->argv[VAR_11+1]->ptr;

            if (VAR_12 >= 2 && VAR_14[0] == '~' && VAR_14[1] == '\0') {
                VAR_9 = 1;
                VAR_11++;
            } else if (VAR_12 >= 2 && VAR_14[0] == '=' && VAR_14[1] == '\0') {
                VAR_11++;
            }
            if (FUNC_4(VAR_5,VAR_5->argv[VAR_11+1],&VAR_8,((void*)0))
                != VAR_2) return;

            if (VAR_8 < 0) {
                FUNC_0(VAR_5,"The MAXLEN argument must be >= 0.");
                return;
            }
            VAR_11++;
            VAR_10 = VAR_11;
        } else {

            if (FUNC_11(VAR_5,VAR_5->argv[VAR_11],&VAR_6,0) != VAR_2) return;
            VAR_7 = 1;
            break;
        }
    }
    int VAR_15 = VAR_11+1;


    if ((VAR_5->argc - VAR_15) < 2 || ((VAR_5->argc-VAR_15) % 2) == 1) {
        FUNC_0(VAR_5,"wrong number of arguments for XADD");
        return;
    }


    robj *VAR_16;
    stream *VAR_17;
    if ((VAR_16 = FUNC_14(VAR_5,VAR_5->argv[1])) == ((void*)0)) return;
    VAR_17 = VAR_16->ptr;


    if (FUNC_10(VAR_17,VAR_5->argv+VAR_15,(VAR_5->argc-VAR_15)/2,
        &VAR_6, VAR_7 ? &VAR_6 : ((void*)0))
        == VAR_1)
    {
        FUNC_0(VAR_5,"The ID specified in XADD is equal or smaller than the "
                        "target stream top item");
        return;
    }
    FUNC_1(VAR_5,&VAR_6);

    FUNC_8(VAR_5->db,VAR_5->argv[1]);
    FUNC_5(VAR_3,"xadd",VAR_5->argv[1],VAR_5->db->id);
    VAR_4.dirty++;

    if (VAR_8 >= 0) {

        if (FUNC_13(VAR_17,VAR_8,VAR_9)) {
            FUNC_5(VAR_3,"xtrim",VAR_5->argv[1],VAR_5->db->id);
        }
        if (VAR_9) FUNC_12(VAR_5,VAR_17,VAR_10);
    }



    robj *VAR_18 = FUNC_2(&VAR_6);
    FUNC_6(VAR_5,VAR_11,VAR_18);
    FUNC_3(VAR_18);



    if (VAR_4.blocked_clients_by_type[VAR_0])
        FUNC_7(VAR_5->db, VAR_5->argv[1]);
}
