
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int type; } ;
typedef TYPE_2__ var_t ;
typedef int var_list_t ;
struct TYPE_11__ {TYPE_4__* structure; } ;
struct TYPE_13__ {int defined; TYPE_1__ details; } ;
typedef TYPE_3__ type_t ;
struct TYPE_14__ {int * fields; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int *,TYPE_2__*) ;
 TYPE_3__* FUNC_1 (int ,char*,int *,int ) ;
 TYPE_2__* FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int *,int ,int *) ;
 TYPE_4__* FUNC_4 (int) ;
 int FUNC_5 (char*) ;

type_t *FUNC_6(char *VAR_3, var_t *VAR_4, var_t *VAR_5, var_list_t *VAR_6)
{
    type_t *VAR_7 = FUNC_1(VAR_1, VAR_3, ((void*)0), VAR_2);
    if (!VAR_5) VAR_5 = FUNC_2( FUNC_5("tagged_union") );
    VAR_5->type = FUNC_3(((void*)0), VAR_0, VAR_6);
    VAR_7->details.structure = FUNC_4(sizeof(*VAR_7->details.structure));
    VAR_7->details.structure->fields = FUNC_0( ((void*)0), VAR_4 );
    VAR_7->details.structure->fields = FUNC_0( VAR_7->details.structure->fields, VAR_5 );
    VAR_7->defined = VAR_0;
    return VAR_7;
}
