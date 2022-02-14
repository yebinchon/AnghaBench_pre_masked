
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int robj ;
struct TYPE_9__ {unsigned char* key; scalar_t__ key_len; } ;
typedef TYPE_2__ raxIterator ;
struct TYPE_10__ {TYPE_1__* cluster; } ;
struct TYPE_8__ {int slots_to_keys; } ;


 int * FUNC_0 (char*,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,char*,unsigned char*,int) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_3__ VAR_0 ;

unsigned int FUNC_5(unsigned int VAR_1, robj **VAR_2, unsigned int VAR_3) {
    raxIterator VAR_4;
    int VAR_5 = 0;
    unsigned char VAR_6[2];

    VAR_6[0] = (VAR_1 >> 8) & 0xff;
    VAR_6[1] = VAR_1 & 0xff;
    FUNC_3(&VAR_4,VAR_0.cluster->slots_to_keys);
    FUNC_2(&VAR_4,">=",VAR_6,2);
    while(VAR_3-- && FUNC_1(&VAR_4)) {
        if (VAR_4.key[0] != VAR_6[0] || VAR_4.key[1] != VAR_6[1]) break;
        VAR_2[VAR_5++] = FUNC_0((char*)VAR_4.key+2,VAR_4.key_len-2);
    }
    FUNC_4(&VAR_4);
    return VAR_5;
}
