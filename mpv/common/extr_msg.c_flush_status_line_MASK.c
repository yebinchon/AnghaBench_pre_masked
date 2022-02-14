
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_log_root {scalar_t__ blank_lines; scalar_t__ status_lines; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct mp_log_root *VAR_1)
{

    if (VAR_1->status_lines)
        FUNC_0(VAR_0, "\n");
    VAR_1->status_lines = 0;
    VAR_1->blank_lines = 0;
}
