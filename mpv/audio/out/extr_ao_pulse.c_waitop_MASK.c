
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int mainloop; } ;
typedef scalar_t__ pa_operation_state_t ;
typedef int pa_operation ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct priv *VAR_2, pa_operation *VAR_3)
{
    if (!VAR_3) {
        FUNC_2(VAR_2->mainloop);
        return 0;
    }
    pa_operation_state_t VAR_4 = FUNC_0(VAR_3);
    while (VAR_4 == VAR_1) {
        FUNC_3(VAR_2->mainloop);
        VAR_4 = FUNC_0(VAR_3);
    }
    FUNC_1(VAR_3);
    FUNC_2(VAR_2->mainloop);
    return VAR_4 == VAR_0;
}
