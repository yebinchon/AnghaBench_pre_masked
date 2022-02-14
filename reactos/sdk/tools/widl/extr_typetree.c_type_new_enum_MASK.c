
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int var_list_t ;
struct TYPE_9__ {TYPE_3__* enumeration; } ;
struct TYPE_10__ {char const* name; int defined; TYPE_1__ details; struct namespace* namespace; } ;
typedef TYPE_2__ type_t ;
struct namespace {int dummy; } ;
struct TYPE_11__ {int * enums; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (char const*,struct namespace*,int ) ;
 TYPE_2__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,char const*,struct namespace*,int ) ;
 int VAR_2 ;
 TYPE_3__* FUNC_4 (int) ;

type_t *FUNC_5(const char *VAR_3, struct namespace *VAR_4, int VAR_5, var_list_t *VAR_6)
{
    type_t *VAR_7 = VAR_3 ? FUNC_1(VAR_3, VAR_4, VAR_2) : ((void*)0);
    type_t *VAR_8 = FUNC_2(VAR_1);
    VAR_8->name = VAR_3;
    VAR_8->namespace = VAR_4;

    if (VAR_7 && VAR_7->details.enumeration)
        VAR_8->details.enumeration = VAR_7->details.enumeration;
    else if (VAR_5)
    {
        VAR_8->details.enumeration = FUNC_4(sizeof(*VAR_8->details.enumeration));
        VAR_8->details.enumeration->enums = VAR_6;
        VAR_8->defined = VAR_0;
    }

    if (VAR_3)
    {
        if (VAR_5)
            FUNC_3(VAR_8, VAR_3, VAR_4, VAR_2);
        else
            FUNC_0(VAR_8);
    }
    return VAR_8;
}
