
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(const char *VAR_0)
{
 FUNC_0("Start a XDP prog which send ICMP \"packet too big\" \n"
  "messages if ingress packet is bigger then MAX_SIZE bytes\n");
 FUNC_0("Usage: %s [...]\n", VAR_0);
 FUNC_0("    -i <ifname|ifindex> Interface\n");
 FUNC_0("    -T <stop-after-X-seconds> Default: 0 (forever)\n");
 FUNC_0("    -S use skb-mode\n");
 FUNC_0("    -N enforce native mode\n");
 FUNC_0("    -F force loading prog\n");
 FUNC_0("    -h Display this help\n");
}
