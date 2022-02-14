
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int string; } ;
struct mpv_node {TYPE_1__ u; int format; } ;
typedef int m_option_t ;


 scalar_t__ FUNC_0 (int const*) ;
 int VAR_0 ;
 double VAR_1 ;
 int FUNC_1 (int const*,void*,struct mpv_node*,void*) ;
 int FUNC_2 (void*,char*) ;

__attribute__((used)) static int FUNC_3(const m_option_t *VAR_2, void *VAR_3,
                      struct mpv_node *VAR_4, void *VAR_5)
{
    if (FUNC_0(VAR_2) && *(double *)VAR_5 == VAR_1) {
        VAR_4->format = VAR_0;
        VAR_4->u.string = FUNC_2(VAR_3, "no");
        return 1;
    }
    return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
}
