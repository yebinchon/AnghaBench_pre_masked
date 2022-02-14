
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_tags {int * values; int * keys; } ;
struct m_sub_property {char* member_0; int member_1; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct m_sub_property*,int,void*) ;

__attribute__((used)) static int FUNC_2(int VAR_0, int VAR_1, void *VAR_2, void *VAR_3)
{
    struct mp_tags *VAR_4 = VAR_3;

    struct m_sub_property VAR_5[] = {
        {"key", FUNC_0(VAR_4->keys[VAR_0])},
        {"value", FUNC_0(VAR_4->values[VAR_0])},
        {0}
    };

    return FUNC_1(VAR_5, VAR_1, VAR_2);
}
