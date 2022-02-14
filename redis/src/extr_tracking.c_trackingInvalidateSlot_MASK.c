
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t uint64_t ;
struct TYPE_9__ {int key_len; int key; } ;
typedef TYPE_1__ raxIterator ;
struct TYPE_10__ {int flags; } ;
typedef TYPE_2__ client ;


 int VAR_0 ;
 int ** VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (size_t) ;
 int FUNC_1 (size_t*,int ,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char*,int *,int ) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_2__*,size_t) ;

void FUNC_8(uint64_t VAR_3) {
    if (VAR_1 == ((void*)0) || VAR_1[VAR_3] == ((void*)0)) return;

    raxIterator VAR_4;
    FUNC_5(&VAR_4,VAR_1[VAR_3]);
    FUNC_4(&VAR_4,"^",((void*)0),0);
    while(FUNC_3(&VAR_4)) {
        uint64_t VAR_5;
        FUNC_1(&VAR_5,VAR_4.key,VAR_4.key_len);
        client *VAR_6 = FUNC_0(VAR_5);
        if (VAR_6 == ((void*)0) || !(VAR_6->flags & VAR_0)) continue;
        FUNC_7(VAR_6,VAR_3);
    }
    FUNC_6(&VAR_4);



    FUNC_2(VAR_1[VAR_3]);
    VAR_1[VAR_3] = ((void*)0);
    VAR_2--;
}
