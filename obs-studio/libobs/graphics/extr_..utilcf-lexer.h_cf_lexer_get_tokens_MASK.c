
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cf_token {int dummy; } ;
struct TYPE_2__ {struct cf_token* array; } ;
struct cf_lexer {TYPE_1__ tokens; } ;



__attribute__((used)) static inline struct cf_token *FUNC_0(struct cf_lexer *VAR_0)
{
 return VAR_0->tokens.array;
}
