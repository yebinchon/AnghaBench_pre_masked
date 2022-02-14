
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct hllhdr {int encoding; int registers; } ;
struct TYPE_4__ {struct hllhdr* ptr; } ;
typedef TYPE_1__ robj ;




 int FUNC_0 (int ,unsigned char*,size_t) ;
 int FUNC_1 (TYPE_1__*,unsigned char*,size_t) ;

int FUNC_2(robj *VAR_0, unsigned char *VAR_1, size_t VAR_2) {
    struct hllhdr *VAR_3 = VAR_0->ptr;
    switch(VAR_3->encoding) {
    case 129: return FUNC_0(VAR_3->registers,VAR_1,VAR_2);
    case 128: return FUNC_1(VAR_0,VAR_1,VAR_2);
    default: return -1;
    }
}
