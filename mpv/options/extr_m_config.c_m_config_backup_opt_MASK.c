
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_config_option {int dummy; } ;
struct m_config {int dummy; } ;


 int FUNC_0 (struct m_config*,char*,char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (struct m_config*,struct m_config_option*) ;
 struct m_config_option* FUNC_3 (struct m_config*,int ) ;

void FUNC_4(struct m_config *VAR_0, const char *VAR_1)
{
    struct m_config_option *VAR_2 = FUNC_3(VAR_0, FUNC_1(VAR_1));
    if (VAR_2) {
        FUNC_2(VAR_0, VAR_2);
    } else {
        FUNC_0(VAR_0, "Option %s not found.\n", VAR_1);
    }
}
