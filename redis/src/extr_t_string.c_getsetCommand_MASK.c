
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* db; int * argv; } ;
typedef TYPE_1__ client ;
struct TYPE_8__ {int dirty; } ;
struct TYPE_7__ {int id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 TYPE_3__ VAR_2 ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(client *VAR_3) {
    if (FUNC_0(VAR_3) == VAR_0) return;
    VAR_3->argv[2] = FUNC_3(VAR_3->argv[2]);
    FUNC_2(VAR_3->db,VAR_3->argv[1],VAR_3->argv[2]);
    FUNC_1(VAR_1,"set",VAR_3->argv[1],VAR_3->db->id);
    VAR_2.dirty++;
}
