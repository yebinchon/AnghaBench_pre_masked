
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct diseqc_cmd {int wait; int cmd; } ;
typedef int * fe_sec_voltage_t ;
typedef int * fe_sec_tone_mode_t ;
typedef int * fe_sec_mini_cmd_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 scalar_t__ FUNC_0 (int,int ,int *) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(int VAR_5, fe_sec_voltage_t VAR_6, struct diseqc_cmd *VAR_7,
                           fe_sec_tone_mode_t VAR_8, fe_sec_mini_cmd_t VAR_9)
{
    if (FUNC_0(VAR_5, VAR_2, VAR_4) < 0)
        return -1;
    if (FUNC_0(VAR_5, VAR_3, VAR_6) < 0)
        return -1;
    FUNC_1(15 * 1000);
    if (FUNC_0(VAR_5, VAR_1, &VAR_7->cmd) < 0)
        return -1;
    FUNC_1(VAR_7->wait * 1000);
    FUNC_1(15 * 1000);
    if (FUNC_0(VAR_5, VAR_0, VAR_9) < 0)
        return -1;
    FUNC_1(15 * 1000);
    if (FUNC_0(VAR_5, VAR_2, VAR_8) < 0)
        return -1;
    FUNC_1(100000);

    return 0;
}
