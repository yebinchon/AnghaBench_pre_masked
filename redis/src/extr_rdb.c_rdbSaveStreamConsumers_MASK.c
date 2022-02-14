
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int pel; int seen_time; } ;
typedef TYPE_1__ streamConsumer ;
struct TYPE_10__ {int consumers; } ;
typedef TYPE_2__ streamCG ;
typedef int ssize_t ;
typedef int rio ;
struct TYPE_11__ {int key_len; int key; TYPE_1__* data; } ;
typedef TYPE_3__ raxIterator ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,char*,int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int *,int ,int ) ;

size_t FUNC_9(rio *VAR_0, streamCG *VAR_1) {
    ssize_t VAR_2, VAR_3 = 0;


    if ((VAR_2 = FUNC_5(VAR_0,FUNC_2(VAR_1->consumers))) == -1) return -1;
    VAR_3 += VAR_2;


    raxIterator VAR_4;
    FUNC_3(&VAR_4,VAR_1->consumers);
    FUNC_1(&VAR_4,"^",((void*)0),0);
    while(FUNC_0(&VAR_4)) {
        streamConsumer *VAR_5 = VAR_4.data;


        if ((VAR_2 = FUNC_7(VAR_0,VAR_4.key,VAR_4.key_len)) == -1) return -1;
        VAR_3 += VAR_2;


        if ((VAR_2 = FUNC_6(VAR_0,VAR_5->seen_time)) == -1)
            return -1;
        VAR_3 += VAR_2;





        if ((VAR_2 = FUNC_8(VAR_0,VAR_5->pel,0)) == -1)
            return -1;
        VAR_3 += VAR_2;
    }
    FUNC_4(&VAR_4);
    return VAR_3;
}
