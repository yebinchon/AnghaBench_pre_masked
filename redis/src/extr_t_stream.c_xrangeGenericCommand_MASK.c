
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int streamID ;
typedef int stream ;
struct TYPE_17__ {int * ptr; } ;
typedef TYPE_1__ robj ;
struct TYPE_18__ {int argc; TYPE_1__** argv; } ;
typedef TYPE_2__ client ;
struct TYPE_19__ {int emptyarray; int syntaxerr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,TYPE_1__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*,TYPE_1__*,long long*,int *) ;
 TYPE_1__* FUNC_4 (TYPE_2__*,TYPE_1__*,int ) ;
 TYPE_7__ VAR_4 ;
 scalar_t__ FUNC_5 (int *,char*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,TYPE_1__*,int *,int ) ;
 int FUNC_7 (TYPE_2__*,int *,int *,int *,long long,int,int *,int *,int ,int *) ;

void FUNC_8(client *VAR_5, int VAR_6) {
    robj *VAR_7;
    stream *VAR_8;
    streamID VAR_9, VAR_10;
    long long VAR_11 = -1;
    robj *VAR_12 = VAR_6 ? VAR_5->argv[3] : VAR_5->argv[2];
    robj *VAR_13 = VAR_6 ? VAR_5->argv[2] : VAR_5->argv[3];

    if (FUNC_6(VAR_5,VAR_12,&VAR_9,0) == VAR_0) return;
    if (FUNC_6(VAR_5,VAR_13,&VAR_10,VAR_3) == VAR_0) return;


    if (VAR_5->argc > 4) {
        for (int VAR_14 = 4; VAR_14 < VAR_5->argc; VAR_14++) {
            int VAR_15 = VAR_5->argc-VAR_14-1;
            if (FUNC_5(VAR_5->argv[VAR_14]->ptr,"COUNT") == 0 && VAR_15 >= 1) {
                if (FUNC_3(VAR_5,VAR_5->argv[VAR_14+1],&VAR_11,((void*)0))
                    != VAR_1) return;
                if (VAR_11 < 0) VAR_11 = 0;
                VAR_14++;
            } else {
                FUNC_0(VAR_5,VAR_4.syntaxerr);
                return;
            }
        }
    }


    if ((VAR_7 = FUNC_4(VAR_5,VAR_5->argv[1],VAR_4.emptyarray)) == ((void*)0) ||
         FUNC_2(VAR_5,VAR_7,VAR_2)) return;

    VAR_8 = VAR_7->ptr;

    if (VAR_11 == 0) {
        FUNC_1(VAR_5);
    } else {
        if (VAR_11 == -1) VAR_11 = 0;
        FUNC_7(VAR_5,VAR_8,&VAR_9,&VAR_10,VAR_11,VAR_6,((void*)0),((void*)0),0,((void*)0));
    }
}
