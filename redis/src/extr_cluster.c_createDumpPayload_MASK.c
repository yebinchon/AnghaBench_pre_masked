
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef unsigned char uint64_t ;
typedef int robj ;
struct TYPE_8__ {void* ptr; } ;
struct TYPE_9__ {TYPE_1__ buffer; } ;
struct TYPE_10__ {TYPE_2__ io; } ;
typedef TYPE_3__ rio ;


 int VAR_0 ;
 unsigned char FUNC_0 (int ,unsigned char*,int ) ;
 int FUNC_1 (unsigned char*) ;
 int FUNC_2 (TYPE_3__*,int *,int *) ;
 int FUNC_3 (TYPE_3__*,int *) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 void* FUNC_5 (void*,unsigned char*,int) ;
 int FUNC_6 () ;
 int FUNC_7 (void*) ;
 int FUNC_8 (int ) ;

void FUNC_9(rio *VAR_1, robj *VAR_2, robj *VAR_3) {
    unsigned char VAR_4[2];
    uint64_t VAR_5;



    FUNC_4(VAR_1,FUNC_6());
    FUNC_8(FUNC_3(VAR_1,VAR_2));
    FUNC_8(FUNC_2(VAR_1,VAR_2,VAR_3));
    VAR_4[0] = VAR_0 & 0xff;
    VAR_4[1] = (VAR_0 >> 8) & 0xff;
    VAR_1->io.buffer.ptr = FUNC_5(VAR_1->io.buffer.ptr,VAR_4,2);


    VAR_5 = FUNC_0(0,(unsigned char*)VAR_1->io.buffer.ptr,
                FUNC_7(VAR_1->io.buffer.ptr));
    FUNC_1(&VAR_5);
    VAR_1->io.buffer.ptr = FUNC_5(VAR_1->io.buffer.ptr,&VAR_5,8);
}
