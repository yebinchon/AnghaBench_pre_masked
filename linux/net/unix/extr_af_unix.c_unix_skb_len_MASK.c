
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {unsigned int len; } ;
struct TYPE_2__ {unsigned int consumed; } ;


 TYPE_1__ FUNC_0 (struct sk_buff const*) ;

__attribute__((used)) static unsigned int FUNC_1(const struct sk_buff *VAR_0)
{
 return VAR_0->len - FUNC_0(VAR_0).consumed;
}
