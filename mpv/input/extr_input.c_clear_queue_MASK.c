
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_cmd {int dummy; } ;
struct cmd_queue {struct mp_cmd* first; } ;


 int FUNC_0 (struct cmd_queue*,struct mp_cmd*) ;
 int FUNC_1 (struct mp_cmd*) ;

__attribute__((used)) static void FUNC_2(struct cmd_queue *VAR_0)
{
    while (VAR_0->first) {
        struct mp_cmd *VAR_1 = VAR_0->first;
        FUNC_0(VAR_0, VAR_1);
        FUNC_1(VAR_1);
    }
}
