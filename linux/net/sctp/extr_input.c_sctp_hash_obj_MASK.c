
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct sctp_transport {int ipaddr; TYPE_3__* asoc; } ;
typedef int __u32 ;
struct TYPE_4__ {int port; } ;
struct TYPE_5__ {TYPE_1__ bind_addr; int sk; } ;
struct TYPE_6__ {TYPE_2__ base; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int *,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline __u32 FUNC_3(const void *VAR_0, u32 VAR_1, u32 VAR_2)
{
 const struct sctp_transport *VAR_3 = VAR_0;

 return FUNC_1(FUNC_2(VAR_3->asoc->base.sk),
      FUNC_0(VAR_3->asoc->base.bind_addr.port),
      &VAR_3->ipaddr, VAR_2);
}
