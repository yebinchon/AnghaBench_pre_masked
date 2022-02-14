
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip6_flowlabel {scalar_t__ share; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static bool FUNC_0(struct ip6_flowlabel *VAR_3)
{
 return VAR_3->share == VAR_0 ||
        VAR_3->share == VAR_1 ||
        VAR_3->share == VAR_2;
}
