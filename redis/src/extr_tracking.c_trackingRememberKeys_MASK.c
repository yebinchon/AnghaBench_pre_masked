
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint64_t ;
typedef scalar_t__ sds ;
struct TYPE_4__ {int id; TYPE_3__** argv; int argc; int cmd; } ;
typedef TYPE_1__ client ;
struct TYPE_5__ {scalar_t__ ptr; } ;


 int VAR_0 ;
 int ** VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,unsigned char*,int ) ;
 int FUNC_1 (int*) ;
 int* FUNC_2 (int ,TYPE_3__**,int ,int*) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,unsigned char*,int,int *,int *) ;
 int FUNC_5 (scalar_t__) ;

void FUNC_6(client *VAR_3) {
    int VAR_4;
    int *VAR_5 = FUNC_2(VAR_3->cmd,VAR_3->argv,VAR_3->argc,&VAR_4);
    if (VAR_5 == ((void*)0)) return;

    for(int VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
        int VAR_7 = VAR_5[VAR_6];
        sds VAR_8 = VAR_3->argv[VAR_7]->ptr;
        uint64_t VAR_9 = FUNC_0(0,
            (unsigned char*)VAR_8,FUNC_5(VAR_8))&(VAR_0-1);
        if (VAR_1[VAR_9] == ((void*)0)) {
            VAR_1[VAR_9] = FUNC_3();
            VAR_2++;
        }
        FUNC_4(VAR_1[VAR_9],
            (unsigned char*)&VAR_3->id,sizeof(VAR_3->id),((void*)0),((void*)0));
    }
    FUNC_1(VAR_5);
}
