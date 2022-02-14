
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udp_media_addr {int port; int ipv6; int proto; int ipv4; } ;
struct tipc_media_addr {int value; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int,char*,int *,int) ;

__attribute__((used)) static int FUNC_3(struct tipc_media_addr *VAR_2, char *VAR_3, int VAR_4)
{
 struct udp_media_addr *VAR_5 = (struct udp_media_addr *)&VAR_2->value;

 if (FUNC_0(VAR_5->proto) == VAR_0)
  FUNC_2(VAR_3, VAR_4, "%pI4:%u", &VAR_5->ipv4, FUNC_0(VAR_5->port));
 else if (FUNC_0(VAR_5->proto) == VAR_1)
  FUNC_2(VAR_3, VAR_4, "%pI6:%u", &VAR_5->ipv6, FUNC_0(VAR_5->port));
 else
  FUNC_1("Invalid UDP media address\n");
 return 0;
}
