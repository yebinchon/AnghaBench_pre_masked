
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cf_parser {TYPE_2__* cur_token; } ;
struct TYPE_3__ {int len; int array; } ;
struct TYPE_4__ {TYPE_1__ str; } ;


 char* FUNC_0 (int ,int ) ;

__attribute__((used)) static inline void FUNC_1(struct cf_parser *VAR_0, char **VAR_1)
{
 *VAR_1 = FUNC_0(VAR_0->cur_token->str.array, VAR_0->cur_token->str.len);
}
