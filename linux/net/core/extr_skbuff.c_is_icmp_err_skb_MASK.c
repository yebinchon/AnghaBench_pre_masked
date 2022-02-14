
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_3__ {scalar_t__ ee_origin; } ;
struct TYPE_4__ {TYPE_1__ ee; } ;


 TYPE_2__* FUNC_0 (struct sk_buff const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool FUNC_1(const struct sk_buff *VAR_2)
{
 return VAR_2 && (FUNC_0(VAR_2)->ee.ee_origin == VAR_0 ||
         FUNC_0(VAR_2)->ee.ee_origin == VAR_1);
}
