
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_action_param {int hotdrop; struct ip6t_frag* matchinfo; } ;
struct sk_buff {int dummy; } ;
struct ip6t_frag {int invflags; int flags; int * ids; } ;
struct frag_hdr {int frag_off; int reserved; int identification; } ;
typedef int _frag ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (struct sk_buff const*,unsigned int*,int ,int *,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,int,...) ;
 struct frag_hdr* FUNC_6 (struct sk_buff const*,unsigned int,int,struct frag_hdr*) ;

__attribute__((used)) static bool
FUNC_7(const struct sk_buff *VAR_8, struct xt_action_param *VAR_9)
{
 struct frag_hdr VAR_10;
 const struct frag_hdr *VAR_11;
 const struct ip6t_frag *VAR_12 = VAR_9->matchinfo;
 unsigned int VAR_13 = 0;
 int VAR_14;

 VAR_14 = FUNC_2(VAR_8, &VAR_13, VAR_7, ((void*)0), ((void*)0));
 if (VAR_14 < 0) {
  if (VAR_14 != -VAR_0)
   VAR_9->hotdrop = 1;
  return 0;
 }

 VAR_11 = FUNC_6(VAR_8, VAR_13, sizeof(VAR_10), &VAR_10);
 if (VAR_11 == ((void*)0)) {
  VAR_9->hotdrop = 1;
  return 0;
 }

 FUNC_5("INFO %04X ", VAR_11->frag_off);
 FUNC_5("OFFSET %04X ", FUNC_4(VAR_11->frag_off) & ~0x7);
 FUNC_5("RES %02X %04X", VAR_11->reserved, FUNC_4(VAR_11->frag_off) & 0x6);
 FUNC_5("MF %04X ", VAR_11->frag_off & FUNC_0(VAR_6));
 FUNC_5("ID %u %08X\n", FUNC_3(VAR_11->identification),
   FUNC_3(VAR_11->identification));

 FUNC_5("IPv6 FRAG id %02X ",
   FUNC_1(VAR_12->ids[0], VAR_12->ids[1],
     FUNC_3(VAR_11->identification),
     !!(VAR_12->invflags & VAR_2)));
 FUNC_5("res %02X %02X%04X %02X ",
   VAR_12->flags & VAR_5, VAR_11->reserved,
   FUNC_4(VAR_11->frag_off) & 0x6,
   !((VAR_12->flags & VAR_5) &&
     (VAR_11->reserved || (FUNC_4(VAR_11->frag_off) & 0x06))));
 FUNC_5("first %02X %02X %02X ",
   VAR_12->flags & VAR_1,
   FUNC_4(VAR_11->frag_off) & ~0x7,
   !((VAR_12->flags & VAR_1) &&
     (FUNC_4(VAR_11->frag_off) & ~0x7)));
 FUNC_5("mf %02X %02X %02X ",
   VAR_12->flags & VAR_3,
   FUNC_4(VAR_11->frag_off) & VAR_6,
   !((VAR_12->flags & VAR_3) &&
     !((FUNC_4(VAR_11->frag_off) & VAR_6))));
 FUNC_5("last %02X %02X %02X\n",
   VAR_12->flags & VAR_4,
   FUNC_4(VAR_11->frag_off) & VAR_6,
   !((VAR_12->flags & VAR_4) &&
     (FUNC_4(VAR_11->frag_off) & VAR_6)));

 return (VAR_11 != ((void*)0)) &&
  FUNC_1(VAR_12->ids[0], VAR_12->ids[1],
    FUNC_3(VAR_11->identification),
    !!(VAR_12->invflags & VAR_2)) &&
  !((VAR_12->flags & VAR_5) &&
    (VAR_11->reserved || (FUNC_4(VAR_11->frag_off) & 0x6))) &&
  !((VAR_12->flags & VAR_1) &&
    (FUNC_4(VAR_11->frag_off) & ~0x7)) &&
  !((VAR_12->flags & VAR_3) &&
    !(FUNC_4(VAR_11->frag_off) & VAR_6)) &&
  !((VAR_12->flags & VAR_4) &&
    (FUNC_4(VAR_11->frag_off) & VAR_6));
}
