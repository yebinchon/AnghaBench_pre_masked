
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int flags; scalar_t__ min; scalar_t__ max; TYPE_1__* type; } ;
typedef TYPE_2__ m_option_t ;
typedef scalar_t__ int64_t ;
struct TYPE_4__ {int size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_0(const m_option_t *VAR_6, void *VAR_7, double VAR_8, bool VAR_9)
{
    int64_t VAR_10 = *(int64_t *)VAR_7;

    VAR_10 = VAR_10 + VAR_8;

    bool VAR_11 = VAR_6->type->size == sizeof(int64_t);
    int64_t VAR_12 = VAR_11 ? VAR_1 : VAR_3;
    int64_t VAR_13 = VAR_11 ? VAR_0 : VAR_2;

    int64_t VAR_14 = (VAR_6->flags & VAR_5) ? VAR_6->min : VAR_12;
    int64_t VAR_15 = (VAR_6->flags & VAR_4) ? VAR_6->max : VAR_13;

    if (VAR_10 < VAR_14)
        VAR_10 = VAR_9 ? VAR_15 : VAR_14;
    if (VAR_10 > VAR_15)
        VAR_10 = VAR_9 ? VAR_14 : VAR_15;

    *(int64_t *)VAR_7 = VAR_10;
}
