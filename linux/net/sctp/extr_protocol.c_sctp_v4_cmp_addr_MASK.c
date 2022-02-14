
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ s_addr; } ;
struct TYPE_6__ {scalar_t__ sin_port; TYPE_2__ sin_addr; } ;
struct TYPE_4__ {scalar_t__ sa_family; } ;
union sctp_addr {TYPE_3__ v4; TYPE_1__ sa; } ;



__attribute__((used)) static int FUNC_0(const union sctp_addr *VAR_0,
       const union sctp_addr *VAR_1)
{
 if (VAR_0->sa.sa_family != VAR_1->sa.sa_family)
  return 0;
 if (VAR_0->v4.sin_port != VAR_1->v4.sin_port)
  return 0;
 if (VAR_0->v4.sin_addr.s_addr != VAR_1->v4.sin_addr.s_addr)
  return 0;

 return 1;
}
