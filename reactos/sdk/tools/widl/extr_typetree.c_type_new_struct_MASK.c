
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int var_list_t ;
struct TYPE_9__ {TYPE_3__* structure; } ;
struct TYPE_10__ {char* name; int defined; TYPE_1__ details; struct namespace* namespace; } ;
typedef TYPE_2__ type_t ;
struct namespace {int dummy; } ;
struct TYPE_11__ {int * fields; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_2 ;
 TYPE_2__* FUNC_1 (char*,struct namespace*,int ) ;
 TYPE_2__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,char*,struct namespace*,int ) ;
 int VAR_3 ;
 TYPE_3__* FUNC_4 (int) ;

type_t *FUNC_5(char *VAR_4, struct namespace *VAR_5, int VAR_6, var_list_t *VAR_7)
{
    type_t *VAR_8 = VAR_4 ? FUNC_1(VAR_4, VAR_5, VAR_3) : ((void*)0);
    type_t *VAR_9;


    if (VAR_8 && VAR_2) return VAR_8;

    VAR_9 = FUNC_2(VAR_1);
    VAR_9->name = VAR_4;
    VAR_9->namespace = VAR_5;

    if (VAR_8 && VAR_8->details.structure)
        VAR_9->details.structure = VAR_8->details.structure;
    else if (VAR_6)
    {
        VAR_9->details.structure = FUNC_4(sizeof(*VAR_9->details.structure));
        VAR_9->details.structure->fields = VAR_7;
        VAR_9->defined = VAR_0;
    }
    if (VAR_4)
    {
        if (VAR_6)
            FUNC_3(VAR_9, VAR_4, VAR_5, VAR_3);
        else
            FUNC_0(VAR_9);
    }
    return VAR_9;
}
