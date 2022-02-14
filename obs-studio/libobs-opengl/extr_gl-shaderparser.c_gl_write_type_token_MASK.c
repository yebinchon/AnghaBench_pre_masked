
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gl_shader_parser {int dummy; } ;
struct TYPE_2__ {int len; int array; } ;
struct cf_token {TYPE_1__ str; } ;


 int FUNC_0 (struct gl_shader_parser*,int ,int ) ;

__attribute__((used)) static inline bool FUNC_1(struct gl_shader_parser *VAR_0,
           struct cf_token *VAR_1)
{
 return FUNC_0(VAR_0, VAR_1->str.array, VAR_1->str.len);
}
