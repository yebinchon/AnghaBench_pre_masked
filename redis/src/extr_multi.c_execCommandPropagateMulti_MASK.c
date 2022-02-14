
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int robj ;
struct TYPE_6__ {TYPE_1__* db; } ;
typedef TYPE_2__ client ;
struct TYPE_7__ {int multiCommand; } ;
struct TYPE_5__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int **,int,int) ;
 TYPE_3__ VAR_2 ;

void FUNC_3(client *VAR_3) {
    robj *VAR_4 = FUNC_0("MULTI",5);

    FUNC_2(VAR_2.multiCommand,VAR_3->db->id,&VAR_4,1,
              VAR_0|VAR_1);
    FUNC_1(VAR_4);
}
