
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bwriter_shader {int dummy; } ;
struct TYPE_3__ {int string; scalar_t__ capacity; scalar_t__ size; } ;
struct TYPE_4__ {scalar_t__ status; int line_no; TYPE_1__ messages; struct bwriter_shader* shader; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct bwriter_shader*) ;
 TYPE_2__ VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (int ,scalar_t__) ;

struct bwriter_shader *FUNC_5(char **VAR_3)
{
    struct bwriter_shader *VAR_4 = ((void*)0);

    VAR_2.shader = ((void*)0);
    VAR_2.status = VAR_1;
    VAR_2.messages.size = VAR_2.messages.capacity = 0;
    VAR_2.line_no = 1;

    FUNC_2();

    if (VAR_2.status != VAR_0)
        VAR_4 = VAR_2.shader;
    else if (VAR_2.shader)
        FUNC_1(VAR_2.shader);

    if (VAR_3)
    {
        if (VAR_2.messages.size)
        {

            *VAR_3 = FUNC_4(VAR_2.messages.string, VAR_2.messages.size + 1);
            if (!*VAR_3)
            {
                FUNC_0("Out of memory, no messages reported\n");
                FUNC_3(VAR_2.messages.string);
            }
        }
        else
        {
            *VAR_3 = ((void*)0);
        }
    }
    else
    {
        if (VAR_2.messages.capacity)
            FUNC_3(VAR_2.messages.string);
    }

    return VAR_4;
}
