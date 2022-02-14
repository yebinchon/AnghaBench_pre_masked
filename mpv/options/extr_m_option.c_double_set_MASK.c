
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {double int64; double double_; } ;
struct mpv_node {scalar_t__ format; TYPE_1__ u; } ;
typedef int m_option_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int const*,double*) ;

__attribute__((used)) static int FUNC_1(const m_option_t *VAR_4, void *VAR_5, struct mpv_node *VAR_6)
{
    double VAR_7;
    if (VAR_6->format == VAR_1) {

        VAR_7 = VAR_6->u.int64;
    } else if (VAR_6->format == VAR_0) {
        VAR_7 = VAR_6->u.double_;
    } else {
        return VAR_3;
    }
    if (FUNC_0(VAR_4, &VAR_7) < 0)
        return VAR_2;
    *(double *)VAR_5 = VAR_7;
    return 1;
}
