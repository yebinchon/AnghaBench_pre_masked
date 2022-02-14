
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct iphdr {int version; int ihl; int ttl; int check; int tot_len; int protocol; int daddr; int saddr; scalar_t__ tos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct iphdr*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct iphdr *VAR_3, uint16_t VAR_4)
{
 struct sockaddr_in *VAR_5 = (void *) &VAR_1;
 struct sockaddr_in *VAR_6 = (void *) &VAR_2;

 FUNC_2(VAR_3, 0, sizeof(*VAR_3));

 VAR_3->version = 4;
 VAR_3->tos = 0;
 VAR_3->ihl = 5;
 VAR_3->ttl = 2;
 VAR_3->saddr = VAR_6->sin_addr.s_addr;
 VAR_3->daddr = VAR_5->sin_addr.s_addr;
 VAR_3->protocol = VAR_0;
 VAR_3->tot_len = FUNC_1(sizeof(*VAR_3) + VAR_4);
 VAR_3->check = FUNC_0((void *) VAR_3, VAR_3->ihl << 1);

 return sizeof(*VAR_3);
}
