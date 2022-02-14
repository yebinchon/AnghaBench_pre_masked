
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int robj ;
struct TYPE_14__ {int argc; TYPE_2__* db; TYPE_3__** argv; } ;
typedef TYPE_1__ client ;
struct TYPE_18__ {int dirty; } ;
struct TYPE_17__ {int ok; } ;
struct TYPE_16__ {char* ptr; } ;
struct TYPE_15__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int * FUNC_3 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_4 (int *,char*,char*,int ) ;
 int FUNC_5 (int *,TYPE_3__**,int,int) ;
 int FUNC_6 (int ,char*,TYPE_3__*,int ) ;
 TYPE_5__ VAR_2 ;
 TYPE_4__ VAR_3 ;
 int FUNC_7 (TYPE_2__*,TYPE_3__*) ;

void FUNC_8(client *VAR_4) {
    int VAR_5, VAR_6 = 0;
    robj *VAR_7;

    if ((VAR_4->argc % 2) == 1) {
        FUNC_1(VAR_4,"wrong number of arguments for HMSET");
        return;
    }

    if ((VAR_7 = FUNC_3(VAR_4,VAR_4->argv[1])) == ((void*)0)) return;
    FUNC_5(VAR_7,VAR_4->argv,2,VAR_4->argc-1);

    for (VAR_5 = 2; VAR_5 < VAR_4->argc; VAR_5 += 2)
        VAR_6 += !FUNC_4(VAR_7,VAR_4->argv[VAR_5]->ptr,VAR_4->argv[VAR_5+1]->ptr,VAR_0);


    char *VAR_8 = VAR_4->argv[0]->ptr;
    if (VAR_8[1] == 's' || VAR_8[1] == 'S') {

        FUNC_2(VAR_4, VAR_6);
    } else {

        FUNC_0(VAR_4, VAR_3.ok);
    }
    FUNC_7(VAR_4->db,VAR_4->argv[1]);
    FUNC_6(VAR_1,"hset",VAR_4->argv[1],VAR_4->db->id);
    VAR_2.dirty++;
}
