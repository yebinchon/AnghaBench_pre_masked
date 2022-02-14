
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct unix_address {TYPE_1__* name; scalar_t__ len; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {int addr; } ;
struct TYPE_3__ {int sun_path; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,int ,scalar_t__,int ) ;
 struct unix_address* FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (struct sock*) ;

__attribute__((used)) static int FUNC_3(struct sock *VAR_1, struct sk_buff *VAR_2)
{

 struct unix_address *VAR_3 = FUNC_1(&FUNC_2(VAR_1)->addr);

 if (!VAR_3)
  return 0;

 return FUNC_0(VAR_2, VAR_0, VAR_3->len - sizeof(short),
         VAR_3->name->sun_path);
}
