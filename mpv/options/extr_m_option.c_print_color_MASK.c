
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_color {int b; int g; int r; int a; } ;
typedef int m_option_t ;


 char* FUNC_0 (int *,char*,int ,int ,int ,int ) ;

__attribute__((used)) static char *FUNC_1(const m_option_t *VAR_0, const void *VAR_1)
{
    const struct m_color *VAR_2 = VAR_1;
    return FUNC_0(((void*)0), "#%02X%02X%02X%02X", VAR_2->a, VAR_2->r, VAR_2->g, VAR_2->b);
}
