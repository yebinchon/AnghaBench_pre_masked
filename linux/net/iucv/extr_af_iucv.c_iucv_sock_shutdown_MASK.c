
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {int sk_state; int sk_shutdown; int (* sk_state_change ) (struct sock*) ;int sk_receive_queue; } ;
struct iucv_sock {scalar_t__ transport; scalar_t__ path; } ;
struct iucv_message {scalar_t__ tag; scalar_t__ class; } ;
struct TYPE_2__ {int (* message_send ) (scalar_t__,struct iucv_message*,int ,int ,void*,int) ;int (* path_quiesce ) (scalar_t__,int *) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;

 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct sock*,int ) ;
 struct iucv_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 TYPE_1__* VAR_10 ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__,struct iucv_message*,int ,int ,void*,int) ;
 int FUNC_6 (scalar_t__,int *) ;
 int FUNC_7 (struct sock*) ;

__attribute__((used)) static int FUNC_8(struct socket *VAR_11, int VAR_12)
{
 struct sock *VAR_13 = VAR_11->sk;
 struct iucv_sock *VAR_14 = FUNC_1(VAR_13);
 struct iucv_message VAR_15;
 int VAR_16 = 0;

 VAR_12++;

 if ((VAR_12 & ~VAR_8) || !VAR_12)
  return -VAR_3;

 FUNC_2(VAR_13);
 switch (VAR_13->sk_state) {
 case 128:
 case 129:
 case 130:
 case 131:
  VAR_16 = -VAR_4;
  goto fail;
 default:
  break;
 }

 if (VAR_12 == VAR_7 || VAR_12 == VAR_8) {
  if (VAR_14->transport == VAR_1) {
   VAR_15.class = 0;
   VAR_15.tag = 0;
   VAR_16 = VAR_10->message_send(VAR_14->path, &VAR_15,
    VAR_5, 0, (void *) VAR_9, 8);
   if (VAR_16) {
    switch (VAR_16) {
    case 1:
     VAR_16 = -VAR_4;
     break;
    case 2:
     VAR_16 = -VAR_2;
     break;
    default:
     VAR_16 = -VAR_4;
     break;
    }
   }
  } else
   FUNC_0(VAR_13, VAR_0);
 }

 VAR_13->sk_shutdown |= VAR_12;
 if (VAR_12 == VAR_6 || VAR_12 == VAR_8) {
  if ((VAR_14->transport == VAR_1) &&
      VAR_14->path) {
   VAR_16 = VAR_10->path_quiesce(VAR_14->path, ((void*)0));
   if (VAR_16)
    VAR_16 = -VAR_4;

  }
  FUNC_4(&VAR_13->sk_receive_queue);
 }


 VAR_13->sk_state_change(VAR_13);

fail:
 FUNC_3(VAR_13);
 return VAR_16;
}
