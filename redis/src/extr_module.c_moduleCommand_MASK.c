
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {char* ptr; } ;
typedef TYPE_1__ robj ;
struct TYPE_12__ {int argc; TYPE_1__** argv; } ;
typedef TYPE_2__ client ;
struct TYPE_13__ {int ok; } ;


 scalar_t__ VAR_0 ;




 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (TYPE_2__*,char*,char*) ;
 int FUNC_3 (TYPE_2__*,char const**) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (char*,void**,int) ;
 scalar_t__ FUNC_7 (char*) ;
 TYPE_3__ VAR_2 ;
 int FUNC_8 (char*,char*) ;

void FUNC_9(client *VAR_3) {
    char *VAR_4 = VAR_3->argv[1]->ptr;
    if (VAR_3->argc == 2 && !FUNC_8(VAR_4,"help")) {
        const char *VAR_5[] = {
"LIST -- Return a list of loaded modules.",
"LOAD <path> [arg ...] -- Load a module library from <path>.",
"UNLOAD <name> -- Unload a module.",
((void*)0)
        };
        FUNC_3(VAR_3, VAR_5);
    } else
    if (!FUNC_8(VAR_4,"load") && VAR_3->argc >= 3) {
        robj **VAR_6 = ((void*)0);
        int VAR_7 = 0;

        if (VAR_3->argc > 3) {
            VAR_7 = VAR_3->argc - 3;
            VAR_6 = &VAR_3->argv[3];
        }

        if (FUNC_6(VAR_3->argv[2]->ptr,(void **)VAR_6,VAR_7) == VAR_0)
            FUNC_0(VAR_3,VAR_2.ok);
        else
            FUNC_1(VAR_3,
                "Error loading the extension. Please check the server logs.");
    } else if (!FUNC_8(VAR_4,"unload") && VAR_3->argc == 3) {
        if (FUNC_7(VAR_3->argv[2]->ptr) == VAR_0)
            FUNC_0(VAR_3,VAR_2.ok);
        else {
            char *VAR_8;
            switch(VAR_1) {
            case 129:
                VAR_8 = "no such module with that name";
                break;
            case 130:
                VAR_8 = "the module exports one or more module-side data "
                         "types, can't unload";
                break;
            case 128:
                VAR_8 = "the module exports APIs used by other modules. "
                         "Please unload them first and try again";
                break;
            case 131:
                VAR_8 = "the module has blocked clients. "
                         "Please wait them unblocked and try again";
                break;
            default:
                VAR_8 = "operation not possible.";
                break;
            }
            FUNC_2(VAR_3,"Error unloading module: %s",VAR_8);
        }
    } else if (!FUNC_8(VAR_4,"list") && VAR_3->argc == 2) {
        FUNC_4(VAR_3);
    } else {
        FUNC_5(VAR_3);
        return;
    }
}
