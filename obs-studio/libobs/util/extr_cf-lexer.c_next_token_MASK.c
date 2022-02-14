
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cf_token {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline bool FUNC_0(struct cf_token **VAR_3, bool VAR_4)
{
 struct cf_token *VAR_5 = *VAR_3;

 if (VAR_5->type != VAR_1)
  VAR_5++;


 while (VAR_5->type == VAR_2 &&
        (VAR_4 || VAR_5->type == VAR_0))
  VAR_5++;

 *VAR_3 = VAR_5;
 return VAR_5->type != VAR_1;
}
