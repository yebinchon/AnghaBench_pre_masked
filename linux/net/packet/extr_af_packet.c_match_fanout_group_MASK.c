
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {scalar_t__ sk_family; } ;
struct packet_type {scalar_t__ af_packet_priv; } ;
struct TYPE_2__ {scalar_t__ fanout; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (struct sock*) ;

__attribute__((used)) static bool FUNC_1(struct packet_type *VAR_1, struct sock *VAR_2)
{
 if (VAR_2->sk_family != VAR_0)
  return 0;

 return VAR_1->af_packet_priv == FUNC_0(VAR_2)->fanout;
}
