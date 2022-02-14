
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(const char *VAR_0)
{
 FUNC_0("Start a XDP prog which encapsulates incoming packets\n"
        "in an IPv4/v6 header and XDP_TX it out.  The dst <VIP:PORT>\n"
        "is used to select packets to encapsulate\n\n");
 FUNC_0("Usage: %s [...]\n", VAR_0);
 FUNC_0("    -i <ifname|ifindex> Interface\n");
 FUNC_0("    -a <vip-service-address> IPv4 or IPv6\n");
 FUNC_0("    -p <vip-service-port> A port range (e.g. 433-444) is also allowed\n");
 FUNC_0("    -s <source-ip> Used in the IPTunnel header\n");
 FUNC_0("    -d <dest-ip> Used in the IPTunnel header\n");
 FUNC_0("    -m <dest-MAC> Used in sending the IP Tunneled pkt\n");
 FUNC_0("    -T <stop-after-X-seconds> Default: 0 (forever)\n");
 FUNC_0("    -P <IP-Protocol> Default is TCP\n");
 FUNC_0("    -S use skb-mode\n");
 FUNC_0("    -N enforce native mode\n");
 FUNC_0("    -F Force loading the XDP prog\n");
 FUNC_0("    -h Display this help\n");
}
