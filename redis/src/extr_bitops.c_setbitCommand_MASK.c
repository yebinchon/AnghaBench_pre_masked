
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t ssize_t ;
struct TYPE_13__ {scalar_t__ ptr; } ;
typedef TYPE_1__ robj ;
struct TYPE_14__ {TYPE_3__* db; int * argv; } ;
typedef TYPE_2__ client ;
struct TYPE_17__ {int dirty; } ;
struct TYPE_16__ {int czero; int cone; } ;
struct TYPE_15__ {int id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ,size_t*,int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ,long*,char*) ;
 TYPE_1__* FUNC_4 (TYPE_2__*,size_t) ;
 int FUNC_5 (int ,char*,int ,int ) ;
 TYPE_6__ VAR_2 ;
 TYPE_4__ VAR_3 ;
 int FUNC_6 (TYPE_3__*,int ) ;

void FUNC_7(client *VAR_4) {
    robj *VAR_5;
    char *VAR_6 = "bit is not an integer or out of range";
    size_t VAR_7;
    ssize_t VAR_8, VAR_9;
    int VAR_10, VAR_11;
    long VAR_12;

    if (FUNC_2(VAR_4,VAR_4->argv[2],&VAR_7,0,0) != VAR_0)
        return;

    if (FUNC_3(VAR_4,VAR_4->argv[3],&VAR_12,VAR_6) != VAR_0)
        return;


    if (VAR_12 & ~1) {
        FUNC_1(VAR_4,VAR_6);
        return;
    }

    if ((VAR_5 = FUNC_4(VAR_4,VAR_7)) == ((void*)0)) return;


    VAR_8 = VAR_7 >> 3;
    VAR_10 = ((uint8_t*)VAR_5->ptr)[VAR_8];
    VAR_9 = 7 - (VAR_7 & 0x7);
    VAR_11 = VAR_10 & (1 << VAR_9);


    VAR_10 &= ~(1 << VAR_9);
    VAR_10 |= ((VAR_12 & 0x1) << VAR_9);
    ((uint8_t*)VAR_5->ptr)[VAR_8] = VAR_10;
    FUNC_6(VAR_4->db,VAR_4->argv[1]);
    FUNC_5(VAR_1,"setbit",VAR_4->argv[1],VAR_4->db->id);
    VAR_2.dirty++;
    FUNC_0(VAR_4, VAR_11 ? VAR_3.cone : VAR_3.czero);
}
