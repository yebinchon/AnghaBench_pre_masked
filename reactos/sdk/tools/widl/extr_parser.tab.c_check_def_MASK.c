
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int line_number; int input_name; } ;
struct TYPE_5__ {TYPE_1__ loc_info; int name; scalar_t__ defined; } ;
typedef TYPE_2__ type_t ;


 int FUNC_0 (char*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(const type_t *VAR_0)
{
    if (VAR_0->defined)
        FUNC_0("%s: redefinition error; original definition was at %s:%d\n",
                  VAR_0->name, VAR_0->loc_info.input_name, VAR_0->loc_info.line_number);
}
