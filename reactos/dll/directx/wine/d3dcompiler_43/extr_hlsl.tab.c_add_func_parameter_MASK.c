
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct source_location {int dummy; } ;
struct parse_parameter {int modifiers; int reg_reservation; int semantic; int name; int type; } ;
struct list {int dummy; } ;
struct hlsl_ir_var {int param_entry; int modifiers; int reg_reservation; int semantic; int name; struct source_location loc; int data_type; } ;
struct TYPE_2__ {int cur_scope; } ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,struct hlsl_ir_var*,int ) ;
 struct hlsl_ir_var* FUNC_2 (int) ;
 int FUNC_3 (struct hlsl_ir_var*) ;
 TYPE_1__ VAR_2 ;
 int FUNC_4 (struct list*,int *) ;

__attribute__((used)) static BOOL FUNC_5(struct list *VAR_3, struct parse_parameter *VAR_4, const struct source_location *VAR_5)
{
    struct hlsl_ir_var *VAR_6 = FUNC_2(sizeof(*VAR_6));

    if (!VAR_6)
    {
        FUNC_0("Out of memory.\n");
        return VAR_0;
    }
    VAR_6->data_type = VAR_4->type;
    VAR_6->loc = *VAR_5;
    VAR_6->name = VAR_4->name;
    VAR_6->semantic = VAR_4->semantic;
    VAR_6->reg_reservation = VAR_4->reg_reservation;
    VAR_6->modifiers = VAR_4->modifiers;

    if (!FUNC_1(VAR_2.cur_scope, VAR_6, VAR_0))
    {
        FUNC_3(VAR_6);
        return VAR_0;
    }
    FUNC_4(VAR_3, &VAR_6->param_entry);
    return VAR_1;
}
