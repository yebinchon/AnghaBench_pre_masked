
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_opt_choice_alternatives {int name; } ;
typedef int m_option_t ;


 struct m_opt_choice_alternatives* FUNC_0 (int const*,void const*,int*) ;
 char* FUNC_1 (int *,char*,int) ;
 char* FUNC_2 (int *,int ) ;

__attribute__((used)) static char *FUNC_3(const m_option_t *VAR_0, const void *VAR_1)
{
    int VAR_2 = 0;
    struct m_opt_choice_alternatives *VAR_3 = FUNC_0(VAR_0, VAR_1, &VAR_2);
    return VAR_3 ? FUNC_2(((void*)0), VAR_3->name)
               : FUNC_1(((void*)0), "%d", VAR_2);
}
