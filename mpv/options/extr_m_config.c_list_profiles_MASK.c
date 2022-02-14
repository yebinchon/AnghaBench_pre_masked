
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_profile {char* desc; int name; struct m_profile* next; } ;
struct m_config {struct m_profile* profiles; } ;


 int FUNC_0 (struct m_config*,char*,...) ;

__attribute__((used)) static void FUNC_1(struct m_config *VAR_0)
{
    FUNC_0(VAR_0, "Available profiles:\n");
    for (struct m_profile *VAR_1 = VAR_0->profiles; VAR_1; VAR_1 = VAR_1->next)
        FUNC_0(VAR_0, "\t%s\t%s\n", VAR_1->name, VAR_1->desc ? VAR_1->desc : "");
    FUNC_0(VAR_0, "\n");
}
