
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_sub_property {char* member_0; int member_1; } ;
struct m_property {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct m_sub_property*,int,void*) ;

__attribute__((used)) static int FUNC_2(void *VAR_2, struct m_property *VAR_3,
                               int VAR_4, void *VAR_5)
{
    struct m_sub_property VAR_6[] = {
        {"0", FUNC_0(VAR_0)},
        {"1", FUNC_0(VAR_1)},
        {0}
    };
    return FUNC_1(VAR_6, VAR_4, VAR_5);
}
