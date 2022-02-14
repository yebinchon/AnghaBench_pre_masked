
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int port; int operation; int protocol; scalar_t__ is_ipv6; int * address; } ;
struct TYPE_4__ {TYPE_1__ inet_network; } ;
struct tomoyo_request_info {TYPE_2__ param; } ;
struct in6_addr {int dummy; } ;
typedef int buf ;
typedef int __be32 ;


 int FUNC_0 (char*,int,char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct tomoyo_request_info*,char*,int ,int ,char*) ;
 int FUNC_3 (char*,int,int const*,int const*) ;
 int FUNC_4 (char*,int,struct in6_addr const*,struct in6_addr const*) ;

__attribute__((used)) static int FUNC_5(struct tomoyo_request_info *VAR_0)
{
 char VAR_1[128];
 int VAR_2;
 const __be32 *VAR_3 = VAR_0->param.inet_network.address;

 if (VAR_0->param.inet_network.is_ipv6)
  FUNC_4(VAR_1, sizeof(VAR_1), (const struct in6_addr *)
      VAR_3, (const struct in6_addr *) VAR_3);
 else
  FUNC_3(VAR_1, sizeof(VAR_1), VAR_3, VAR_3);
 VAR_2 = FUNC_1(VAR_1);
 FUNC_0(VAR_1 + VAR_2, sizeof(VAR_1) - VAR_2, " %u",
   VAR_0->param.inet_network.port);
 return FUNC_2(VAR_0, "inet", VAR_0->param.inet_network.protocol,
        VAR_0->param.inet_network.operation, VAR_1);
}
