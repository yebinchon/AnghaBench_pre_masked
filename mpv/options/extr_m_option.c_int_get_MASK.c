
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int int64; } ;
struct mpv_node {TYPE_1__ u; int format; } ;
typedef int m_option_t ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(const m_option_t *VAR_1, void *VAR_2,
                   struct mpv_node *VAR_3, void *VAR_4)
{
    VAR_3->format = VAR_0;
    VAR_3->u.int64 = *(int *)VAR_4;
    return 1;
}
