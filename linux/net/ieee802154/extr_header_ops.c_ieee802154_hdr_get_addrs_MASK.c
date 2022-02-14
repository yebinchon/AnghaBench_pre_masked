
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int pan_id; } ;
struct TYPE_3__ {int intra_pan; int source_addr_mode; int dest_addr_mode; } ;
struct ieee802154_hdr {TYPE_2__ dest; TYPE_2__ source; TYPE_1__ fc; } ;


 scalar_t__ FUNC_0 (int const*,int ,int,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_1(const u8 *VAR_0, struct ieee802154_hdr *VAR_1)
{
 int VAR_2 = 0;

 VAR_2 += FUNC_0(VAR_0 + VAR_2, VAR_1->fc.dest_addr_mode,
           0, &VAR_1->dest);
 VAR_2 += FUNC_0(VAR_0 + VAR_2, VAR_1->fc.source_addr_mode,
           VAR_1->fc.intra_pan, &VAR_1->source);

 if (VAR_1->fc.intra_pan)
  VAR_1->source.pan_id = VAR_1->dest.pan_id;

 return VAR_2;
}
