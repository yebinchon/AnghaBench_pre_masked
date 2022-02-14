
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* db; } ;
typedef TYPE_2__ client ;
struct TYPE_11__ {int dirty; } ;
struct TYPE_10__ {int ok; } ;
struct TYPE_8__ {int id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (int ,int,int *) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int*) ;
 int FUNC_3 () ;
 TYPE_4__ VAR_2 ;
 TYPE_3__ VAR_3 ;

void FUNC_4(client *VAR_4) {
    int VAR_5;

    if (FUNC_2(VAR_4,&VAR_5) == VAR_0) return;
    VAR_2.dirty += FUNC_1(VAR_4->db->id,VAR_5,((void*)0));
    FUNC_0(VAR_4,VAR_3.ok);







}
