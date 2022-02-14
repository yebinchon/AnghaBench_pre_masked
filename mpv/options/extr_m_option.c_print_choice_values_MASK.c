
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_log {int dummy; } ;
struct m_option {int flags; int max; int min; struct m_opt_choice_alternatives* priv; } ;
struct m_opt_choice_alternatives {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mp_log*,char*,char*,...) ;

__attribute__((used)) static void FUNC_1(struct mp_log *VAR_2, const struct m_option *VAR_3)
{
    struct m_opt_choice_alternatives *VAR_4 = VAR_3->priv;
    for ( ; VAR_4->name; VAR_4++)
        FUNC_0(VAR_2, "    %s\n", VAR_4->name[0] ? VAR_4->name : "(passing nothing)");
    if ((VAR_3->flags & VAR_1) && (VAR_3->flags & VAR_0))
        FUNC_0(VAR_2, "    %g-%g (integer range)\n", VAR_3->min, VAR_3->max);
}
