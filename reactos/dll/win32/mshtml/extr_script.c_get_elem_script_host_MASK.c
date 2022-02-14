
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* outer_window; } ;
struct TYPE_12__ {TYPE_2__ base; } ;
struct TYPE_11__ {int nsscript; } ;
struct TYPE_9__ {scalar_t__ scriptmode; } ;
typedef int ScriptHost ;
typedef TYPE_3__ HTMLScriptElement ;
typedef TYPE_4__ HTMLInnerWindow ;
typedef int GUID ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_4__*,int ,int *) ;
 int * FUNC_4 (TYPE_4__*,int *) ;

__attribute__((used)) static ScriptHost *FUNC_5(HTMLInnerWindow *VAR_2, HTMLScriptElement *VAR_3)
{
    GUID VAR_4;

    if(!FUNC_3(VAR_2, VAR_3->nsscript, &VAR_4)) {
        FUNC_2("Could not find script GUID\n");
        return ((void*)0);
    }

    if(FUNC_0(&VAR_0, &VAR_4)
       && (!VAR_2->base.outer_window || VAR_2->base.outer_window->scriptmode != VAR_1)) {
        FUNC_1("Ignoring JScript\n");
        return ((void*)0);
    }

    return FUNC_4(VAR_2, &VAR_4);
}
