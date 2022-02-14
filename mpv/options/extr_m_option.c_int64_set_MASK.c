
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ int64; } ;
struct mpv_node {scalar_t__ format; TYPE_1__ u; } ;
struct TYPE_5__ {int flags; scalar_t__ min; scalar_t__ max; } ;
typedef TYPE_2__ m_option_t ;
typedef scalar_t__ int64_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_0(const m_option_t *VAR_5, void *VAR_6, struct mpv_node *VAR_7)
{
    if (VAR_7->format != VAR_0)
        return VAR_4;
    int64_t VAR_8 = VAR_7->u.int64;
    if ((VAR_5->flags & VAR_2) && VAR_8 < VAR_5->min)
        return VAR_3;
    if ((VAR_5->flags & VAR_1) && VAR_8 > VAR_5->max)
        return VAR_3;
    *(int64_t *)VAR_6 = VAR_8;
    return 1;
}
