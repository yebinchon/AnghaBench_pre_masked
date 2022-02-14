
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int delivery_count; int delivery_time; TYPE_1__* consumer; } ;
typedef TYPE_3__ streamNACK ;
struct TYPE_13__ {int last_id; } ;
typedef TYPE_4__ streamCG ;
typedef int robj ;
struct TYPE_14__ {TYPE_2__* db; } ;
typedef TYPE_5__ client ;
struct TYPE_15__ {int xclaimCommand; } ;
struct TYPE_11__ {int id; } ;
struct TYPE_10__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *) ;
 int * FUNC_1 (char*,int) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int **,int,int) ;
 int FUNC_5 (char*) ;
 TYPE_9__ VAR_2 ;

void FUNC_6(client *VAR_3, robj *VAR_4, streamCG *VAR_5, robj *VAR_6, robj *VAR_7, streamNACK *VAR_8) {







    robj *VAR_9[14];
    VAR_9[0] = FUNC_1("XCLAIM",6);
    VAR_9[1] = VAR_4;
    VAR_9[2] = VAR_6;
    VAR_9[3] = FUNC_1(VAR_8->consumer->name,FUNC_5(VAR_8->consumer->name));
    VAR_9[4] = FUNC_2(0);
    VAR_9[5] = VAR_7;
    VAR_9[6] = FUNC_1("TIME",4);
    VAR_9[7] = FUNC_2(VAR_8->delivery_time);
    VAR_9[8] = FUNC_1("RETRYCOUNT",10);
    VAR_9[9] = FUNC_2(VAR_8->delivery_count);
    VAR_9[10] = FUNC_1("FORCE",5);
    VAR_9[11] = FUNC_1("JUSTID",6);
    VAR_9[12] = FUNC_1("LASTID",6);
    VAR_9[13] = FUNC_0(&VAR_5->last_id);
    FUNC_4(VAR_2.xclaimCommand,VAR_3->db->id,VAR_9,14,VAR_0|VAR_1);
    FUNC_3(VAR_9[0]);
    FUNC_3(VAR_9[3]);
    FUNC_3(VAR_9[4]);
    FUNC_3(VAR_9[6]);
    FUNC_3(VAR_9[7]);
    FUNC_3(VAR_9[8]);
    FUNC_3(VAR_9[9]);
    FUNC_3(VAR_9[10]);
    FUNC_3(VAR_9[11]);
    FUNC_3(VAR_9[12]);
    FUNC_3(VAR_9[13]);
}
