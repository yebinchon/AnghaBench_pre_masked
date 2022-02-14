
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_cmd_def {struct m_option* args; } ;
struct m_option {scalar_t__ type; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct mp_cmd_def const*,int) ;

__attribute__((used)) static const struct m_option *FUNC_2(const struct mp_cmd_def *VAR_1, int VAR_2)
{
    const struct m_option *VAR_3 = ((void*)0);
    if (FUNC_1(VAR_1, VAR_2)) {

        for (int VAR_4 = FUNC_0(VAR_2, VAR_0 - 1); VAR_4 >= 0; VAR_4--) {
            if (VAR_1->args[VAR_4].type) {
                VAR_3 = &VAR_1->args[VAR_4];
                break;
            }
        }
    } else if (VAR_2 < VAR_0) {
        VAR_3 = &VAR_1->args[VAR_2];
    }
    return VAR_3 && VAR_3->type ? VAR_3 : ((void*)0);
}
