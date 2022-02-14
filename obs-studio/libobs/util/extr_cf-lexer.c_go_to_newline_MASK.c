
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cf_token {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline bool FUNC_0(struct cf_token **VAR_2)
{
 struct cf_token *VAR_3 = *VAR_2;
 while (VAR_3->type != VAR_0 &&
        VAR_3->type != VAR_1)
  VAR_3++;

 *VAR_2 = VAR_3;

 return VAR_3->type != VAR_1;
}
