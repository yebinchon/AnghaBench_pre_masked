
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ m_option_t ;


 int VAR_0 ;
 double FUNC_0 (void const*) ;
 scalar_t__ FUNC_1 (double) ;
 char* FUNC_2 (int *,char*,double) ;
 char* FUNC_3 (int *,char*) ;

__attribute__((used)) static char *FUNC_4(const m_option_t *VAR_1, const void *VAR_2)
{
    double VAR_3 = FUNC_0(VAR_2);
    if (FUNC_1(VAR_3) && (VAR_1->flags & VAR_0))
        return FUNC_3(((void*)0), "default");
    return FUNC_2(((void*)0), "%f", VAR_3);
}
