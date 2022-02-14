
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int robj ;
struct TYPE_9__ {scalar_t__ key_len; scalar_t__ key; } ;
typedef TYPE_2__ raxIterator ;
struct TYPE_10__ {int * db; TYPE_1__* cluster; } ;
struct TYPE_8__ {scalar_t__* slots_keys_count; int slots_to_keys; } ;


 int * FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,char*,unsigned char*,int) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 TYPE_3__ VAR_0 ;

unsigned int FUNC_7(unsigned int VAR_1) {
    raxIterator VAR_2;
    int VAR_3 = 0;
    unsigned char VAR_4[2];

    VAR_4[0] = (VAR_1 >> 8) & 0xff;
    VAR_4[1] = VAR_1 & 0xff;
    FUNC_5(&VAR_2,VAR_0.cluster->slots_to_keys);
    while(VAR_0.cluster->slots_keys_count[VAR_1]) {
        FUNC_4(&VAR_2,">=",VAR_4,2);
        FUNC_3(&VAR_2);

        robj *VAR_5 = FUNC_0((char*)VAR_2.key+2,VAR_2.key_len-2);
        FUNC_1(&VAR_0.db[0],VAR_5);
        FUNC_2(VAR_5);
        VAR_3++;
    }
    FUNC_6(&VAR_2);
    return VAR_3;
}
