
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int intra_pan; int security_enabled; int source_addr_mode; int dest_addr_mode; } ;
struct ieee802154_hdr {TYPE_1__ fc; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1(const struct ieee802154_hdr *VAR_1)
{
 int VAR_2, VAR_3;

 VAR_2 = FUNC_0(VAR_1->fc.dest_addr_mode, 0);
 VAR_3 = FUNC_0(VAR_1->fc.source_addr_mode,
           VAR_1->fc.intra_pan);

 if (VAR_3 < 0 || VAR_2 < 0)
  return -VAR_0;

 return 3 + VAR_2 + VAR_3 + VAR_1->fc.security_enabled;
}
