
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int ptr; } ;
typedef TYPE_2__ robj ;
typedef int dictEntry ;
struct TYPE_9__ {TYPE_1__* db; } ;
typedef TYPE_3__ client ;
struct TYPE_7__ {int dict; } ;


 int * FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int *) ;

robj *FUNC_2(client *VAR_0, robj *VAR_1) {
    dictEntry *VAR_2;

    if ((VAR_2 = FUNC_0(VAR_0->db->dict,VAR_1->ptr)) == ((void*)0)) return ((void*)0);
    return (robj*) FUNC_1(VAR_2);
}
