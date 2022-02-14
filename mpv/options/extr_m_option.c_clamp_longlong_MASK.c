
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; long long max; long long min; } ;
typedef TYPE_1__ m_option_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(const m_option_t *VAR_3, void *VAR_4)
{
    long long VAR_5 = *(long long *)VAR_4;
    int VAR_6 = 0;
    if ((VAR_3->flags & VAR_0) && (VAR_5 > VAR_3->max)) {
        VAR_5 = VAR_3->max;
        VAR_6 = VAR_2;
    }
    if ((VAR_3->flags & VAR_1) && (VAR_5 < VAR_3->min)) {
        VAR_5 = VAR_3->min;
        VAR_6 = VAR_2;
    }
    *(long long *)VAR_4 = VAR_5;
    return VAR_6;
}
