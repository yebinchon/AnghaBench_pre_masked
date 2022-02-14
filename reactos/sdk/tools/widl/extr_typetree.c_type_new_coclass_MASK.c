
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int line_number; int input_name; } ;
struct TYPE_6__ {scalar_t__ type_type; char* name; TYPE_1__ loc_info; scalar_t__ defined; } ;
typedef TYPE_2__ type_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*,int ,int ) ;
 TYPE_2__* FUNC_1 (scalar_t__,char*,int *,int ) ;

type_t *FUNC_2(char *VAR_1)
{
    type_t *VAR_2 = FUNC_1(VAR_0, VAR_1, ((void*)0), 0);
    if (VAR_2->type_type != VAR_0 || VAR_2->defined)
        FUNC_0("%s: redefinition error; original definition was at %s:%d\n",
                  VAR_2->name, VAR_2->loc_info.input_name, VAR_2->loc_info.line_number);
    VAR_2->name = VAR_1;
    return VAR_2;
}
