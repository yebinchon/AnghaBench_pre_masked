
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpv_global {int dummy; } ;
struct mp_log {int dummy; } ;
struct m_obj_desc {int dummy; } ;
struct m_config {int dummy; } ;
typedef int bstr ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct m_config*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct m_config *VAR_0, struct mp_log *VAR_1,
                                   struct mpv_global *VAR_2,
                                   struct m_obj_desc *VAR_3, char **VAR_4)
{
    for (int VAR_5 = 0; VAR_4 && VAR_4[VAR_5 * 2 + 0]; VAR_5++) {
        bstr VAR_6 = FUNC_0(VAR_4[VAR_5 * 2 + 0]);
        bstr VAR_7 = FUNC_0(VAR_4[VAR_5 * 2 + 1]);
        if (FUNC_1(VAR_0, VAR_6, VAR_7, 0) < 0)
            return -1;
    }

    return 0;
}
