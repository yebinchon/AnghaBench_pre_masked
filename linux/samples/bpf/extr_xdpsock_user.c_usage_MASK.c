
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char const*,char const*,int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(const char *VAR_3)
{
 const char *VAR_4 =
  "  Usage: %s [OPTIONS]\n"
  "  Options:\n"
  "  -r, --rxdrop		Discard all incoming packets (default)\n"
  "  -t, --txonly		Only send packets\n"
  "  -l, --l2fwd		MAC swap L2 forwarding\n"
  "  -i, --interface=n	Run on interface n\n"
  "  -q, --queue=n	Use queue n (default 0)\n"
  "  -p, --poll		Use poll syscall\n"
  "  -S, --xdp-skb=n	Use XDP skb-mod\n"
  "  -N, --xdp-native=n	Enfore XDP native mode\n"
  "  -n, --interval=n	Specify statistics update interval (default 1 sec).\n"
  "  -z, --zero-copy      Force zero-copy mode.\n"
  "  -c, --copy           Force copy mode.\n"
  "  -f, --frame-size=n   Set the frame size (must be a power of two, default is %d).\n"
  "  -m, --no-need-wakeup Turn off use of driver need wakeup flag.\n"
  "  -f, --frame-size=n   Set the frame size (must be a power of two in aligned mode, default is %d).\n"
  "  -u, --unaligned	Enable unaligned chunk placement\n"
  "\n";
 FUNC_1(VAR_2, VAR_4, VAR_3, VAR_1);
 FUNC_0(VAR_0);
}
