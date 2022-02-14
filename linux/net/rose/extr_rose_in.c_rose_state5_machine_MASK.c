
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int * data; } ;
struct TYPE_4__ {TYPE_1__* neighbour; } ;
struct TYPE_3__ {int use; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sock*,int ,int ,int ) ;
 TYPE_2__* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,int ) ;

__attribute__((used)) static int FUNC_3(struct sock *VAR_2, struct sk_buff *VAR_3, int VAR_4)
{
 if (VAR_4 == VAR_1) {
  FUNC_2(VAR_2, VAR_0);
  FUNC_0(VAR_2, 0, VAR_3->data[3], VAR_3->data[4]);
  FUNC_1(VAR_2)->neighbour->use--;
 }

 return 0;
}
