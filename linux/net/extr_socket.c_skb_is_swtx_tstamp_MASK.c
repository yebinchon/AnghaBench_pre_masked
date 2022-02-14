
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ tstamp; } ;


 scalar_t__ FUNC_0 (struct sk_buff const*) ;

__attribute__((used)) static bool FUNC_1(const struct sk_buff *VAR_0, int VAR_1)
{
 return VAR_0->tstamp && !VAR_1 && FUNC_0(VAR_0);
}
