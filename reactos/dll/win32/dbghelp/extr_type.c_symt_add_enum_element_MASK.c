
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ tag; } ;
struct symt_enum {int vchildren; int base_type; TYPE_2__ symt; } ;
struct symt {int tag; } ;
struct TYPE_10__ {int lVal; } ;
struct TYPE_11__ {TYPE_3__ n3; int vt; } ;
struct TYPE_12__ {TYPE_4__ n2; } ;
struct TYPE_13__ {TYPE_5__ n1; } ;
struct TYPE_14__ {TYPE_6__ value; } ;
struct TYPE_8__ {int * next; int name; } ;
struct symt_data {struct symt symt; TYPE_7__ u; int type; TYPE_2__* container; int kind; TYPE_1__ hash_elt; } ;
struct module {int pool; } ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 struct symt_data* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char const*) ;
 struct symt** FUNC_3 (int *,int *) ;

BOOL FUNC_4(struct module* VAR_6, struct symt_enum* VAR_7,
                           const char* VAR_8, int VAR_9)
{
    struct symt_data* VAR_10;
    struct symt** VAR_11;

    FUNC_0(VAR_7->symt.tag == VAR_3);
    VAR_10 = FUNC_1(&VAR_6->pool, sizeof(*VAR_10));
    if (VAR_10 == ((void*)0)) return VAR_1;

    VAR_10->symt.tag = VAR_2;
    VAR_10->hash_elt.name = FUNC_2(&VAR_6->pool, VAR_8);
    VAR_10->hash_elt.next = ((void*)0);
    VAR_10->kind = VAR_0;
    VAR_10->container = &VAR_7->symt;
    VAR_10->type = VAR_7->base_type;
    VAR_10->u.value.n1.n2.vt = VAR_5;
    VAR_10->u.value.n1.n2.n3.lVal = VAR_9;

    VAR_11 = FUNC_3(&VAR_7->vchildren, &VAR_6->pool);
    if (!VAR_11) return VAR_1;
    *VAR_11 = &VAR_10->symt;

    return VAR_4;
}
