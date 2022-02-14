
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_option {int * type; int member_0; } ;
struct MPContext {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char*,int ,struct m_option*,struct MPContext*) ;

__attribute__((used)) static bool FUNC_1(char *VAR_5, struct MPContext *VAR_6)
{
    struct m_option VAR_7 = {0};
    if (FUNC_0(VAR_5, VAR_0, &VAR_7, VAR_6) <= 0)
        return 1;


    return VAR_7.type == &VAR_3 ||
           VAR_7.type == &VAR_2 ||
           VAR_7.type == &VAR_4 ||
           VAR_7.type == &VAR_1;
}
