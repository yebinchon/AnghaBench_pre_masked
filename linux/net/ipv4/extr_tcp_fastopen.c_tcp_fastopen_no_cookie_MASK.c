
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sock {int dummy; } ;
struct dst_entry {int dummy; } ;
struct TYPE_4__ {int sysctl_tcp_fastopen; } ;
struct TYPE_6__ {TYPE_1__ ipv4; } ;
struct TYPE_5__ {scalar_t__ fastopen_no_cookie; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dst_entry const*,int ) ;
 TYPE_3__* FUNC_1 (struct sock const*) ;
 TYPE_2__* FUNC_2 (struct sock const*) ;

__attribute__((used)) static bool FUNC_3(const struct sock *VAR_1,
       const struct dst_entry *VAR_2,
       int VAR_3)
{
 return (FUNC_1(VAR_1)->ipv4.sysctl_tcp_fastopen & VAR_3) ||
        FUNC_2(VAR_1)->fastopen_no_cookie ||
        (VAR_2 && FUNC_0(VAR_2, VAR_0));
}
