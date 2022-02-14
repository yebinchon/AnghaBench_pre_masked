
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {unsigned int len; int csum; } ;
struct TYPE_2__ {scalar_t__ dccph_cscov; } ;


 unsigned int FUNC_0 (struct sk_buff*) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,int ,unsigned int,int ) ;

__attribute__((used)) static inline void FUNC_3(struct sk_buff *VAR_0)
{
 unsigned int VAR_1 = FUNC_0(VAR_0);

 if (VAR_1 >= VAR_0->len)
  FUNC_1(VAR_0)->dccph_cscov = 0;

 VAR_0->csum = FUNC_2(VAR_0, 0, (VAR_1 > VAR_0->len)? VAR_0->len : VAR_1, 0);
}
