
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int Unit ;
struct TYPE_7__ {int result; int where; int state; } ;
typedef TYPE_1__ Automount ;


 TYPE_1__* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,char*,int ) ;
 scalar_t__ FUNC_6 (int ,int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(Unit *VAR_5) {
        Automount *VAR_6 = FUNC_0(VAR_5);
        int VAR_7;

        FUNC_2(VAR_6);
        FUNC_2(FUNC_1(VAR_6->state, VAR_0, VAR_1));

        if (FUNC_6(VAR_6->where, ((void*)0), 0) > 0) {
                FUNC_5(VAR_5, "Path %s is already a mount point, refusing start.", VAR_6->where);
                return -VAR_4;
        }

        VAR_7 = FUNC_9(VAR_5);
        if (VAR_7 < 0)
                return VAR_7;

        VAR_7 = FUNC_8(VAR_5);
        if (VAR_7 < 0) {
                FUNC_3(VAR_6, VAR_2);
                return VAR_7;
        }

        VAR_7 = FUNC_7(VAR_5);
        if (VAR_7 < 0)
                return VAR_7;

        VAR_6->result = VAR_3;
        FUNC_4(VAR_6);
        return 1;
}
