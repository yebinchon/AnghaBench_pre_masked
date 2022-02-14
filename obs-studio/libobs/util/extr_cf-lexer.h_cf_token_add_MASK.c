
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cf_token {int unmerged_str; int str; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static inline void FUNC_1(struct cf_token *VAR_0,
    const struct cf_token *VAR_1)
{
 FUNC_0(&VAR_0->str, &VAR_1->str);
 FUNC_0(&VAR_0->unmerged_str, &VAR_1->unmerged_str);
}
