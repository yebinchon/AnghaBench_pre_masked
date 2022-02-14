
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int jsdisp_t ;
struct TYPE_10__ {unsigned int argc; TYPE_2__* function; struct TYPE_10__* buf; } ;
struct TYPE_8__ {int dispex; } ;
struct TYPE_9__ {TYPE_1__ function; } ;
typedef TYPE_3__ ArgumentsInstance ;


 int FUNC_0 (char*,TYPE_3__*) ;
 TYPE_3__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__) ;

__attribute__((used)) static void FUNC_5(jsdisp_t *VAR_0)
{
    ArgumentsInstance *VAR_1 = FUNC_1(VAR_0);

    FUNC_0("(%p)\n", VAR_1);

    if(VAR_1->buf) {
        unsigned VAR_2;
        for(VAR_2 = 0; VAR_2 < VAR_1->argc; VAR_2++)
            FUNC_4(VAR_1->buf[VAR_2]);
        FUNC_2(VAR_1->buf);
    }

    FUNC_3(&VAR_1->function->function.dispex);
    FUNC_2(VAR_1);
}
