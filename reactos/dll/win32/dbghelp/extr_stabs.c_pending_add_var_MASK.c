
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pending_list {size_t num; TYPE_3__* objs; } ;
struct location {int dummy; } ;
typedef enum DataKind { ____Placeholder_DataKind } DataKind ;
struct TYPE_4__ {int kind; struct location loc; int type; int name; } ;
struct TYPE_5__ {TYPE_1__ var; } ;
struct TYPE_6__ {TYPE_2__ u; int tag; } ;


 int VAR_0 ;
 int FUNC_0 (struct pending_list*) ;
 int FUNC_1 (int ,int,char const*) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static inline void FUNC_3(struct pending_list* VAR_1, const char* VAR_2,
                                   enum DataKind VAR_3, const struct location* VAR_4)
{
    FUNC_0(VAR_1);
    VAR_1->objs[VAR_1->num].tag = VAR_0;
    FUNC_1(VAR_1->objs[VAR_1->num].u.var.name,
                sizeof(VAR_1->objs[VAR_1->num].u.var.name), VAR_2);
    VAR_1->objs[VAR_1->num].u.var.type = FUNC_2(VAR_2);
    VAR_1->objs[VAR_1->num].u.var.kind = VAR_3;
    VAR_1->objs[VAR_1->num].u.var.loc = *VAR_4;
    VAR_1->num++;
}
