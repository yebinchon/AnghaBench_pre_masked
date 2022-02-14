
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct link_transaction {TYPE_4__* request; } ;
struct avc_frame {int cts; } ;
struct TYPE_6__ {unsigned long long offset_low; scalar_t__ tcode; scalar_t__ offset_high; } ;
struct TYPE_5__ {scalar_t__ data; } ;
struct TYPE_7__ {TYPE_2__ common; TYPE_1__ write_block; } ;
struct TYPE_8__ {TYPE_3__ packet; } ;


 unsigned long long VAR_0 ;
 unsigned long long VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct link_transaction*) ;
 int FUNC_1 (char*,...) ;

int
FUNC_2(struct link_transaction *VAR_3)
{
 struct avc_frame *VAR_4 =
     (struct avc_frame *) VAR_3->request->packet.write_block.data;
 unsigned long long VAR_5 =
     ((unsigned long long) VAR_3->request->packet.common.offset_high << 32) |
     VAR_3->request->packet.common.offset_low;

 if (VAR_3->request->packet.common.tcode != VAR_2)
  return 0;

 if (VAR_5 == VAR_0 || VAR_5 == VAR_1) {
  switch (VAR_4->cts) {
  case 0x00:
   FUNC_0(VAR_3);
   break;
  case 0x01:
   FUNC_1("cal fcp frame (cts=0x01)\n");
   break;
  case 0x02:
   FUNC_1("ehs fcp frame (cts=0x02)\n");
   break;
  case 0x03:
   FUNC_1("havi fcp frame (cts=0x03)\n");
   break;
  case 0x0e:
   FUNC_1("vendor specific fcp frame (cts=0x0e)\n");
   break;
  case 0x0f:
   FUNC_1("extended cts\n");
   break;
  default:
   FUNC_1("reserved fcp frame (ctx=0x%02x)\n", VAR_4->cts);
   break;
  }
  return 1;
 }

 return 0;
}
