
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpv_handle {struct mp_log* log; } ;
struct mp_log {int dummy; } ;



struct mp_log *FUNC_0(struct mpv_handle *VAR_0)
{
    return VAR_0->log;
}
