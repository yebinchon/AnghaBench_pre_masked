
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_12__ {scalar_t__ ptr; } ;
typedef TYPE_1__ robj ;
typedef int llbuf ;
struct TYPE_13__ {int * argv; } ;
typedef TYPE_2__ client ;
struct TYPE_14__ {int czero; int cone; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ,size_t*,int ,int ) ;
 scalar_t__ FUNC_3 (char*,int,long) ;
 TYPE_1__* FUNC_4 (TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 size_t FUNC_6 (scalar_t__) ;
 TYPE_3__ VAR_2 ;

void FUNC_7(client *VAR_3) {
    robj *VAR_4;
    char VAR_5[32];
    size_t VAR_6;
    size_t VAR_7, VAR_8;
    size_t VAR_9 = 0;

    if (FUNC_2(VAR_3,VAR_3->argv[2],&VAR_6,0,0) != VAR_0)
        return;

    if ((VAR_4 = FUNC_4(VAR_3,VAR_3->argv[1],VAR_2.czero)) == ((void*)0) ||
        FUNC_1(VAR_3,VAR_4,VAR_1)) return;

    VAR_7 = VAR_6 >> 3;
    VAR_8 = 7 - (VAR_6 & 0x7);
    if (FUNC_5(VAR_4)) {
        if (VAR_7 < FUNC_6(VAR_4->ptr))
            VAR_9 = ((uint8_t*)VAR_4->ptr)[VAR_7] & (1 << VAR_8);
    } else {
        if (VAR_7 < (size_t)FUNC_3(VAR_5,sizeof(VAR_5),(long)VAR_4->ptr))
            VAR_9 = VAR_5[VAR_7] & (1 << VAR_8);
    }

    FUNC_0(VAR_3, VAR_9 ? VAR_2.cone : VAR_2.czero);
}
