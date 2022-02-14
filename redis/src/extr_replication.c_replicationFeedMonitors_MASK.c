
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
typedef int sds ;
struct TYPE_13__ {scalar_t__ encoding; scalar_t__ ptr; } ;
typedef TYPE_1__ robj ;
struct TYPE_14__ {TYPE_3__* value; } ;
typedef TYPE_2__ listNode ;
typedef int listIter ;
typedef int list ;
struct TYPE_15__ {int flags; } ;
typedef TYPE_3__ client ;
struct TYPE_16__ {int unixsocket; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (struct timeval*,int *) ;
 TYPE_2__* FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (int ,char*,long,...) ;
 int FUNC_9 (int ,char*,int ) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (char*) ;
 TYPE_4__ VAR_4 ;

void FUNC_12(client *VAR_5, list *VAR_6, int VAR_7, robj **VAR_8, int VAR_9) {
    listNode *VAR_10;
    listIter VAR_11;
    int VAR_12;
    sds VAR_13 = FUNC_11("+");
    robj *VAR_14;
    struct timeval VAR_15;

    FUNC_4(&VAR_15,((void*)0));
    VAR_13 = FUNC_8(VAR_13,"%ld.%06ld ",(long)VAR_15.tv_sec,(long)VAR_15.tv_usec);
    if (VAR_5->flags & VAR_0) {
        VAR_13 = FUNC_8(VAR_13,"[%d lua] ",VAR_7);
    } else if (VAR_5->flags & VAR_1) {
        VAR_13 = FUNC_8(VAR_13,"[%d unix:%s] ",VAR_7,VAR_4.unixsocket);
    } else {
        VAR_13 = FUNC_8(VAR_13,"[%d %s] ",VAR_7,FUNC_3(VAR_5));
    }

    for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++) {
        if (VAR_8[VAR_12]->encoding == VAR_2) {
            VAR_13 = FUNC_8(VAR_13, "\"%ld\"", (long)VAR_8[VAR_12]->ptr);
        } else {
            VAR_13 = FUNC_9(VAR_13,(char*)VAR_8[VAR_12]->ptr,
                        FUNC_10(VAR_8[VAR_12]->ptr));
        }
        if (VAR_12 != VAR_9-1)
            VAR_13 = FUNC_7(VAR_13," ",1);
    }
    VAR_13 = FUNC_7(VAR_13,"\r\n",2);
    VAR_14 = FUNC_1(VAR_3,VAR_13);

    FUNC_6(VAR_6,&VAR_11);
    while((VAR_10 = FUNC_5(&VAR_11))) {
        client *VAR_16 = VAR_10->value;
        FUNC_0(VAR_16,VAR_14);
    }
    FUNC_2(VAR_14);
}
