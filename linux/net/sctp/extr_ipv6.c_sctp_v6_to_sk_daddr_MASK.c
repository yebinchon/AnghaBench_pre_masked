
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__* s6_addr32; } ;
struct TYPE_8__ {TYPE_5__ sin6_addr; } ;
struct TYPE_6__ {scalar_t__ s_addr; } ;
struct TYPE_7__ {TYPE_1__ sin_addr; } ;
struct TYPE_9__ {scalar_t__ sa_family; } ;
union sctp_addr {TYPE_3__ v6; TYPE_2__ v4; TYPE_4__ sa; } ;
struct sock {TYPE_5__ sk_v6_daddr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(union sctp_addr *VAR_1, struct sock *VAR_2)
{
 if (VAR_1->sa.sa_family == VAR_0) {
  VAR_2->sk_v6_daddr.s6_addr32[0] = 0;
  VAR_2->sk_v6_daddr.s6_addr32[1] = 0;
  VAR_2->sk_v6_daddr.s6_addr32[2] = FUNC_0(0x0000ffff);
  VAR_2->sk_v6_daddr.s6_addr32[3] = VAR_1->v4.sin_addr.s_addr;
 } else {
  VAR_2->sk_v6_daddr = VAR_1->v6.sin6_addr;
 }
}
