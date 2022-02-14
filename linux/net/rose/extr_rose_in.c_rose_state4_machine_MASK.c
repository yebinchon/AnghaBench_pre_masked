
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int * data; } ;
struct rose_sock {int condition; TYPE_1__* neighbour; int state; int vl; int vs; int vr; int va; } ;
struct TYPE_2__ {int use; } ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (struct sock*,int ,int ,int ) ;
 int FUNC_1 (struct sock*) ;
 struct rose_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*,int) ;

__attribute__((used)) static int FUNC_6(struct sock *VAR_2, struct sk_buff *VAR_3, int VAR_4)
{
 struct rose_sock *VAR_5 = FUNC_2(VAR_2);

 switch (VAR_4) {
 case 128:
  FUNC_5(VAR_2, 129);

 case 129:
  FUNC_4(VAR_2);
  FUNC_3(VAR_2);
  VAR_5->condition = 0x00;
  VAR_5->va = 0;
  VAR_5->vr = 0;
  VAR_5->vs = 0;
  VAR_5->vl = 0;
  VAR_5->state = VAR_1;
  FUNC_1(VAR_2);
  break;

 case 130:
  FUNC_5(VAR_2, VAR_0);
  FUNC_0(VAR_2, 0, VAR_3->data[3], VAR_3->data[4]);
  VAR_5->neighbour->use--;
  break;

 default:
  break;
 }

 return 0;
}
