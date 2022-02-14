
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {double double_; int string; } ;
struct mpv_node {TYPE_1__ u; int format; } ;
struct TYPE_5__ {int flags; } ;
typedef TYPE_2__ m_option_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (double) ;
 int FUNC_1 (void*,char*) ;

__attribute__((used)) static int FUNC_2(const m_option_t *VAR_3, void *VAR_4,
                      struct mpv_node *VAR_5, void *VAR_6)
{
    double VAR_7 = *(double *)VAR_6;
    if (FUNC_0(VAR_7) && (VAR_3->flags & VAR_2)) {
        VAR_5->format = VAR_1;
        VAR_5->u.string = FUNC_1(VAR_4, "default");
    } else {
        VAR_5->format = VAR_0;
        VAR_5->u.double_ = VAR_7;
    }
    return 1;
}
