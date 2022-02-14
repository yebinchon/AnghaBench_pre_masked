
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct input_ctx {char* mouse_section; } ;
struct cmd_bind {TYPE_1__* owner; } ;
struct TYPE_2__ {char* section; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct input_ctx*,char*,char*,char*) ;
 struct cmd_bind* FUNC_1 (struct input_ctx*,int *,int ) ;
 int FUNC_2 (struct input_ctx*,char*,int ) ;
 int FUNC_3 (struct input_ctx*,int ) ;
 scalar_t__ FUNC_4 (char*,char*) ;

__attribute__((used)) static void FUNC_5(struct input_ctx *VAR_2)
{
    struct cmd_bind *VAR_3 =
        FUNC_1(VAR_2, ((void*)0), VAR_1);

    char *VAR_4 = VAR_3 ? VAR_3->owner->section : "default";

    char *VAR_5 = VAR_2->mouse_section;
    VAR_2->mouse_section = VAR_4;

    if (FUNC_4(VAR_5, VAR_2->mouse_section) != 0) {
        FUNC_0(VAR_2, "input: switch section %s -> %s\n",
                 VAR_5, VAR_2->mouse_section);
        FUNC_3(VAR_2, FUNC_2(VAR_2, VAR_5, VAR_0));
    }
}
