
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int (* sk_state_change ) (struct sock*) ;int sk_state; } ;
struct sk_buff {int * data; } ;
struct rose_sock {int condition; TYPE_1__* neighbour; int state; int vl; int vr; int va; int vs; } ;
struct TYPE_2__ {int use; } ;


 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sock*,int ,int ,int ) ;
 struct rose_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*,int ) ;
 int FUNC_5 (struct sock*,int ) ;
 int FUNC_6 (struct sock*) ;

__attribute__((used)) static int FUNC_7(struct sock *VAR_5, struct sk_buff *VAR_6, int VAR_7)
{
 struct rose_sock *VAR_8 = FUNC_1(VAR_5);

 switch (VAR_7) {
 case 129:
  FUNC_3(VAR_5);
  FUNC_2(VAR_5);
  VAR_8->condition = 0x00;
  VAR_8->vs = 0;
  VAR_8->va = 0;
  VAR_8->vr = 0;
  VAR_8->vl = 0;
  VAR_8->state = VAR_2;
  VAR_5->sk_state = VAR_4;
  if (!FUNC_5(VAR_5, VAR_3))
   VAR_5->sk_state_change(VAR_5);
  break;

 case 128:
  FUNC_4(VAR_5, VAR_1);
  FUNC_0(VAR_5, VAR_0, VAR_6->data[3], VAR_6->data[4]);
  VAR_8->neighbour->use--;
  break;

 default:
  break;
 }

 return 0;
}
