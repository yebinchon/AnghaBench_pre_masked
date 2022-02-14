
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cf_token {int dummy; } ;
struct TYPE_2__ {struct cf_token* array; } ;
struct cf_def {TYPE_1__ params; } ;



__attribute__((used)) static inline struct cf_token *FUNC_0(const struct cf_def *VAR_0,
            size_t VAR_1)
{
 return VAR_0->params.array + VAR_1;
}
