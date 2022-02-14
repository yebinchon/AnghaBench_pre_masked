
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct Qdisc {TYPE_1__* ops; } ;
struct TYPE_2__ {struct sk_buff* (* peek ) (struct Qdisc*) ;} ;


 unsigned int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (char*,struct Qdisc*) ;
 struct sk_buff* FUNC_2 (struct Qdisc*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static unsigned int
FUNC_4(struct Qdisc *VAR_0)
{
 struct sk_buff *VAR_1;
 unsigned int VAR_2;

 VAR_1 = VAR_0->ops->peek(VAR_0);
 if (FUNC_3(VAR_1 == ((void*)0))) {
  FUNC_1("qdisc_peek_len", VAR_0);
  return 0;
 }
 VAR_2 = FUNC_0(VAR_1);

 return VAR_2;
}
