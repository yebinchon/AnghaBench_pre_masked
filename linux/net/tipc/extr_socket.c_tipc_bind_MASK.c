
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tipc_sock {scalar_t__ group; } ;
struct socket {struct sock* sk; } ;
struct TYPE_5__ {scalar_t__ type; int lower; int upper; } ;
struct TYPE_4__ {TYPE_2__ nameseq; } ;
struct sockaddr_tipc {scalar_t__ family; scalar_t__ addrtype; TYPE_1__ addr; int scope; } ;
struct sockaddr {int dummy; } ;
struct sock {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 struct tipc_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct tipc_sock*,int ,TYPE_2__*) ;
 int FUNC_4 (struct tipc_sock*,int ,TYPE_2__*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct socket *VAR_9, struct sockaddr *VAR_10,
       int VAR_11)
{
 struct sock *VAR_12 = VAR_9->sk;
 struct sockaddr_tipc *VAR_13 = (struct sockaddr_tipc *)VAR_10;
 struct tipc_sock *VAR_14 = FUNC_2(VAR_12);
 int VAR_15 = -VAR_3;

 FUNC_0(VAR_12);
 if (FUNC_5(!VAR_11)) {
  VAR_15 = FUNC_4(VAR_14, 0, ((void*)0));
  goto exit;
 }
 if (VAR_14->group) {
  VAR_15 = -VAR_1;
  goto exit;
 }
 if (VAR_11 < sizeof(struct sockaddr_tipc)) {
  VAR_15 = -VAR_3;
  goto exit;
 }
 if (VAR_13->family != VAR_0) {
  VAR_15 = -VAR_2;
  goto exit;
 }

 if (VAR_13->addrtype == VAR_4)
  VAR_13->addr.nameseq.upper = VAR_13->addr.nameseq.lower;
 else if (VAR_13->addrtype != VAR_5) {
  VAR_15 = -VAR_2;
  goto exit;
 }

 if ((VAR_13->addr.nameseq.type < VAR_7) &&
     (VAR_13->addr.nameseq.type != VAR_8) &&
     (VAR_13->addr.nameseq.type != VAR_6)) {
  VAR_15 = -VAR_1;
  goto exit;
 }

 VAR_15 = (VAR_13->scope >= 0) ?
  FUNC_3(VAR_14, VAR_13->scope, &VAR_13->addr.nameseq) :
  FUNC_4(VAR_14, -VAR_13->scope, &VAR_13->addr.nameseq);
exit:
 FUNC_1(VAR_12);
 return VAR_15;
}
