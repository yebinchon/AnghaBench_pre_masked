
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct br2684_vcc {int dummy; } ;
struct TYPE_2__ {int next; } ;
struct br2684_dev {TYPE_1__ brvccs; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 struct br2684_vcc* FUNC_1 (int ) ;

__attribute__((used)) static inline struct br2684_vcc *FUNC_2(const struct sk_buff *VAR_0,
         const struct br2684_dev *VAR_1)
{
 return FUNC_0(&VAR_1->brvccs) ? ((void*)0) : FUNC_1(VAR_1->brvccs.next);
}
