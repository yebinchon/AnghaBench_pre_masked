
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iphdr {int ihl; int version; int ttl; int protocol; int daddr; int saddr; } ;
struct TYPE_3__ {int s_addr; } ;
struct TYPE_4__ {TYPE_1__ sin_addr; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (struct iphdr*,int ,int) ;

__attribute__((used)) static int FUNC_1(void *VAR_2)
{
 struct iphdr *VAR_3 = VAR_2;

 FUNC_0(VAR_3, 0, sizeof(*VAR_3));

 VAR_3->ihl = 5;
 VAR_3->version = 4;
 VAR_3->ttl = 2;
 VAR_3->saddr = VAR_1.sin_addr.s_addr;
 VAR_3->daddr = VAR_1.sin_addr.s_addr;
 VAR_3->protocol = VAR_0;



 return sizeof(*VAR_3);
}
