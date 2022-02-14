
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_10__ {int phy_id; int gap_count; size_t phy_speed; int contender; int link_active; int initiated_reset; int extended; } ;
struct TYPE_9__ {int phy_id; int sequence; } ;
struct TYPE_8__ {int phy_id; } ;
struct TYPE_7__ {int root_id; int gap_count; int set_gap_count; int set_root; } ;
struct TYPE_6__ {int identifier; } ;
struct phy_packet {TYPE_5__ self_id; TYPE_4__ ext_self_id; TYPE_3__ link_on; TYPE_2__ phy_config; TYPE_1__ common; } ;
struct link_packet {int dummy; } ;


 int VAR_0 ;



 int FUNC_0 (struct link_packet*,size_t,int ,int ) ;
 int FUNC_1 (unsigned char*,size_t) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void
FUNC_3(uint32_t *VAR_3, size_t VAR_4)
{
 int VAR_5;

 FUNC_2("%6u  ", VAR_3[0]);

 if (VAR_4 == 4) {
  FUNC_2("bus reset");
 } else if (VAR_4 < sizeof(struct phy_packet)) {
  FUNC_2("short packet: ");
  for (VAR_5 = 1; VAR_5 < VAR_4 / 4; VAR_5++)
   FUNC_2("%s%08x", VAR_5 == 0 ? "[" : " ", VAR_3[VAR_5]);
  FUNC_2("]");

 } else if (VAR_4 == sizeof(struct phy_packet) && VAR_3[1] == ~VAR_3[2]) {
  struct phy_packet *VAR_6 = (struct phy_packet *) VAR_3;





  switch (VAR_6->common.identifier) {
  case 130:
   if (!VAR_6->phy_config.set_root && !VAR_6->phy_config.set_gap_count) {
    FUNC_2("ext phy config: phy_id=%02x", VAR_6->phy_config.root_id);
   } else {
    FUNC_2("phy config:");
    if (VAR_6->phy_config.set_root)
     FUNC_2(" set_root_id=%02x", VAR_6->phy_config.root_id);
    if (VAR_6->phy_config.set_gap_count)
     FUNC_2(" set_gap_count=%d", VAR_6->phy_config.gap_count);
   }
   break;

  case 129:
   FUNC_2("link-on packet, phy_id=%02x", VAR_6->link_on.phy_id);
   break;

  case 128:
   if (VAR_6->self_id.extended) {
    FUNC_2("extended self id: phy_id=%02x, seq=%d",
           VAR_6->ext_self_id.phy_id, VAR_6->ext_self_id.sequence);
   } else {
    static const char * const VAR_7[] = {
     "S100", "S200", "S400", "BETA"
    };
    FUNC_2("self id: phy_id=%02x, link %s, gap_count=%d, speed=%s%s%s",
           VAR_6->self_id.phy_id,
           (VAR_6->self_id.link_active ? "active" : "not active"),
           VAR_6->self_id.gap_count,
           VAR_7[VAR_6->self_id.phy_speed],
           (VAR_6->self_id.contender ? ", irm contender" : ""),
           (VAR_6->self_id.initiated_reset ? ", initiator" : ""));
   }
   break;
  default:
   FUNC_2("unknown phy packet: ");
   for (VAR_5 = 1; VAR_5 < VAR_4 / 4; VAR_5++)
    FUNC_2("%s%08x", VAR_5 == 0 ? "[" : " ", VAR_3[VAR_5]);
   FUNC_2("]");
   break;
  }
 } else {
  struct link_packet *VAR_8 = (struct link_packet *) VAR_3;

  FUNC_0(VAR_8, VAR_4, 0,
       VAR_2 ? 0 : VAR_0);
 }

 if (VAR_1) {
  FUNC_2("  [");
  FUNC_1((unsigned char *) VAR_3 + 4, VAR_4 - 4);
  FUNC_2("]");
 }

 FUNC_2("\r\n");
}
