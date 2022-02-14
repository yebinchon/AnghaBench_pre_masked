
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sock {int sk_state; int sk_socket; } ;
struct TYPE_5__ {int * hcon; } ;
struct TYPE_4__ {TYPE_2__* conn; } ;






 int FUNC_0 (char*,struct sock*,int,int ) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sock*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_1__* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*,int ) ;
 int FUNC_8 (struct sock*,int ) ;

__attribute__((used)) static void FUNC_9(struct sock *VAR_3)
{
 FUNC_0("sk %p state %d socket %p", VAR_3, VAR_3->sk_state, VAR_3->sk_socket);

 switch (VAR_3->sk_state) {
 case 128:
  FUNC_6(VAR_3);
  break;

 case 130:
 case 133:
  if (FUNC_5(VAR_3)->conn->hcon) {
   VAR_3->sk_state = 129;
   FUNC_7(VAR_3, VAR_1);
   FUNC_3(FUNC_5(VAR_3)->conn);
   FUNC_1(FUNC_5(VAR_3)->conn->hcon);
   FUNC_5(VAR_3)->conn->hcon = ((void*)0);
   FUNC_4(FUNC_5(VAR_3)->conn);
  } else
   FUNC_2(VAR_3, VAR_0);
  break;

 case 131:
 case 132:
 case 129:
  FUNC_2(VAR_3, VAR_0);
  break;

 default:
  FUNC_8(VAR_3, VAR_2);
  break;
 }
}
