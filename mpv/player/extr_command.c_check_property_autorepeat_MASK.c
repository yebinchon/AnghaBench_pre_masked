
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_option {int * type; int member_0; } ;
struct MPContext {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,int ,struct m_option*,struct MPContext*) ;

__attribute__((used)) static bool FUNC_1(char *VAR_3, struct MPContext *VAR_4)
{
    struct m_option VAR_5 = {0};
    if (FUNC_0(VAR_3, VAR_0, &VAR_5, VAR_4) <= 0)
        return 1;


    if (VAR_5.type == &VAR_2 || VAR_5.type == &VAR_1)
        return 0;

    return 1;
}
