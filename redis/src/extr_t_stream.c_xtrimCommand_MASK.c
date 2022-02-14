
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int stream ;
struct TYPE_20__ {int * ptr; } ;
typedef TYPE_1__ robj ;
typedef scalar_t__ int64_t ;
struct TYPE_21__ {int argc; TYPE_5__* db; TYPE_6__** argv; } ;
typedef TYPE_2__ client ;
struct TYPE_25__ {int dirty; } ;
struct TYPE_24__ {int syntaxerr; int czero; } ;
struct TYPE_23__ {char* ptr; } ;
struct TYPE_22__ {int id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_2__*,TYPE_1__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*,TYPE_6__*,long long*,int *) ;
 TYPE_1__* FUNC_5 (TYPE_2__*,TYPE_6__*,int ) ;
 int FUNC_6 (int ,char*,TYPE_6__*,int ) ;
 TYPE_8__ VAR_5 ;
 TYPE_7__ VAR_6 ;
 int FUNC_7 (TYPE_5__*,TYPE_6__*) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (TYPE_2__*,int *,int) ;
 scalar_t__ FUNC_10 (int *,long long,int) ;

void FUNC_11(client *VAR_7) {
    robj *VAR_8;



    if ((VAR_8 = FUNC_5(VAR_7,VAR_7->argv[1],VAR_6.czero)) == ((void*)0)
        || FUNC_3(VAR_7,VAR_8,VAR_2)) return;
    stream *VAR_9 = VAR_8->ptr;


    int VAR_10 = VAR_4;
    long long VAR_11 = -1;
    int VAR_12 = 0;

    int VAR_13 = 0;


    int VAR_14 = 2;
    for (; VAR_14 < VAR_7->argc; VAR_14++) {
        int VAR_15 = (VAR_7->argc-1) - VAR_14;
        char *VAR_16 = VAR_7->argv[VAR_14]->ptr;
        if (!FUNC_8(VAR_16,"maxlen") && VAR_15) {
            VAR_12 = 0;
            VAR_10 = VAR_3;
            char *VAR_17 = VAR_7->argv[VAR_14+1]->ptr;

            if (VAR_15 >= 2 && VAR_17[0] == '~' && VAR_17[1] == '\0') {
                VAR_12 = 1;
                VAR_14++;
            } else if (VAR_15 >= 2 && VAR_17[0] == '=' && VAR_17[1] == '\0') {
                VAR_14++;
            }
            if (FUNC_4(VAR_7,VAR_7->argv[VAR_14+1],&VAR_11,((void*)0))
                != VAR_0) return;

            if (VAR_11 < 0) {
                FUNC_1(VAR_7,"The MAXLEN argument must be >= 0.");
                return;
            }
            VAR_14++;
            VAR_13 = VAR_14;
        } else {
            FUNC_0(VAR_7,VAR_6.syntaxerr);
            return;
        }
    }


    int64_t VAR_18 = 0;
    if (VAR_10 == VAR_3) {
        VAR_18 = FUNC_10(VAR_9,VAR_11,VAR_12);
    } else {
        FUNC_1(VAR_7,"XTRIM called without an option to trim the stream");
        return;
    }


    if (VAR_18) {
        FUNC_7(VAR_7->db,VAR_7->argv[1]);
        FUNC_6(VAR_1,"xtrim",VAR_7->argv[1],VAR_7->db->id);
        VAR_5.dirty += VAR_18;
        if (VAR_12) FUNC_9(VAR_7,VAR_9,VAR_13);
    }
    FUNC_2(VAR_7,VAR_18);
}
