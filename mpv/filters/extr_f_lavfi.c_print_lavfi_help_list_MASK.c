
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_log {int dummy; } ;


 int FUNC_0 (struct mp_log*,int) ;
 int FUNC_1 (struct mp_log*,char*) ;

void FUNC_2(struct mp_log *VAR_0, int VAR_1)
{
    FUNC_0(VAR_0, VAR_1);
    FUNC_1(VAR_0, "\nIf libavfilter filters clash with builtin mpv filters,\n"
            "prefix them with lavfi- to select the libavfilter one.\n\n");
}
