
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


struct TYPE_14__ {scalar_t__ type; } ;
typedef TYPE_1__ Unit ;
struct TYPE_17__ {int ** exec_command; } ;
struct TYPE_16__ {int ** exec_command; int * control_command; } ;
struct TYPE_15__ {int * control_command; } ;
struct TYPE_13__ {int * control_command; } ;
typedef int ExecCommand ;


 unsigned int FUNC_0 (int **) ;
 TYPE_11__* FUNC_1 (TYPE_1__*) ;
 TYPE_9__* FUNC_2 (TYPE_1__*) ;
 TYPE_7__* FUNC_3 (TYPE_1__*) ;
 TYPE_5__* FUNC_4 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_7(Unit *VAR_4) {
        ExecCommand *VAR_5;
        int VAR_6 = 0, VAR_7;
        unsigned VAR_8;

        FUNC_5(VAR_4);

        VAR_5 = VAR_4->type == VAR_2 ? FUNC_3(VAR_4)->control_command :
                VAR_4->type == VAR_0 ? FUNC_1(VAR_4)->control_command :
                VAR_4->type == VAR_3 ? FUNC_4(VAR_4)->control_command : ((void*)0);
        VAR_7 = FUNC_6(VAR_4, VAR_5);
        if (VAR_7 < 0 && VAR_6 == 0)
                VAR_6 = VAR_7;

        if (VAR_4->type == VAR_1)
                for (VAR_8 = 0; VAR_8 < FUNC_0(FUNC_2(VAR_4)->exec_command); VAR_8++) {
                        VAR_7 = FUNC_6(VAR_4, FUNC_2(VAR_4)->exec_command[VAR_8]);
                        if (VAR_7 < 0 && VAR_6 == 0)
                                VAR_6 = VAR_7;
                }

        if (VAR_4->type == VAR_2)
                for (VAR_8 = 0; VAR_8 < FUNC_0(FUNC_3(VAR_4)->exec_command); VAR_8++) {
                        VAR_7 = FUNC_6(VAR_4, FUNC_3(VAR_4)->exec_command[VAR_8]);
                        if (VAR_7 < 0 && VAR_6 == 0)
                                VAR_6 = VAR_7;
                }

        return VAR_6;
}
