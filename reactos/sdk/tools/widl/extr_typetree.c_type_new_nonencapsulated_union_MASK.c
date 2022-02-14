
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int var_list_t ;
struct TYPE_9__ {TYPE_3__* structure; } ;
struct TYPE_10__ {char const* name; int defined; TYPE_1__ details; } ;
typedef TYPE_2__ type_t ;
struct TYPE_11__ {int * fields; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (char const*,int *,int ) ;
 TYPE_2__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,char const*,int *,int ) ;
 int VAR_2 ;
 TYPE_3__* FUNC_4 (int) ;

type_t *FUNC_5(const char *VAR_3, int VAR_4, var_list_t *VAR_5)
{
    type_t *VAR_6 = VAR_3 ? FUNC_1(VAR_3, ((void*)0), VAR_2) : ((void*)0);
    type_t *VAR_7 = FUNC_2(VAR_1);
    VAR_7->name = VAR_3;
    if (VAR_6 && VAR_6->details.structure)
        VAR_7->details.structure = VAR_6->details.structure;
    else if (VAR_4)
    {
        VAR_7->details.structure = FUNC_4(sizeof(*VAR_7->details.structure));
        VAR_7->details.structure->fields = VAR_5;
        VAR_7->defined = VAR_0;
    }
    if (VAR_3)
    {
        if (VAR_4)
            FUNC_3(VAR_7, VAR_3, ((void*)0), VAR_2);
        else
            FUNC_0(VAR_7);
    }
    return VAR_7;
}
