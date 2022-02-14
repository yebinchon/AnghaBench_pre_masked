
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; int min; int max; } ;
typedef TYPE_1__ m_option_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (void*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(const m_option_t *VAR_3, void *VAR_4)
{
    char *VAR_5 = FUNC_0(VAR_4);
    int VAR_6 = VAR_5 ? FUNC_1(VAR_5) : 0;
    if ((VAR_3->flags & VAR_1) && (VAR_6 < VAR_3->min))
        return VAR_2;
    if ((VAR_3->flags & VAR_0) && (VAR_6 > VAR_3->max))
        return VAR_2;
    return 0;
}
