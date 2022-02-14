
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct mpv_node {int format; } ;
typedef struct mpv_node mpv_node ;
struct TYPE_4__ {int log; } ;
typedef TYPE_1__ mpv_handle ;


 int VAR_0 ;
 int FUNC_0 (int ,char const**) ;
 int FUNC_1 (TYPE_1__*,int ,struct mpv_node*) ;

int FUNC_2(mpv_handle *VAR_1, const char **VAR_2, mpv_node *VAR_3)
{
    struct mpv_node VAR_4 = {.format = VAR_0};
    int VAR_5 = FUNC_1(VAR_1, FUNC_0(VAR_1->log, VAR_2), &VAR_4);
    if (VAR_3 && VAR_5 >= 0)
        *VAR_3 = VAR_4;
    return VAR_5;
}
