
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int delivery_count; int delivery_time; } ;
typedef TYPE_1__ streamNACK ;
typedef int streamID ;
typedef int ssize_t ;
typedef int rio ;
struct TYPE_8__ {TYPE_1__* data; int key; } ;
typedef TYPE_2__ raxIterator ;
typedef int rax ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,char*,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ,int) ;

ssize_t FUNC_8(rio *VAR_0, rax *VAR_1, int VAR_2) {
    ssize_t VAR_3, VAR_4 = 0;


    if ((VAR_3 = FUNC_5(VAR_0,FUNC_2(VAR_1))) == -1) return -1;
    VAR_4 += VAR_3;


    raxIterator VAR_5;
    FUNC_3(&VAR_5,VAR_1);
    FUNC_1(&VAR_5,"^",((void*)0),0);
    while(FUNC_0(&VAR_5)) {


        if ((VAR_3 = FUNC_7(VAR_0,VAR_5.key,sizeof(streamID))) == -1) return -1;
        VAR_4 += VAR_3;

        if (VAR_2) {
            streamNACK *VAR_6 = VAR_5.data;
            if ((VAR_3 = FUNC_6(VAR_0,VAR_6->delivery_time)) == -1)
                return -1;
            VAR_4 += VAR_3;
            if ((VAR_3 = FUNC_5(VAR_0,VAR_6->delivery_count)) == -1) return -1;
            VAR_4 += VAR_3;



        }
    }
    FUNC_4(&VAR_5);
    return VAR_4;
}
