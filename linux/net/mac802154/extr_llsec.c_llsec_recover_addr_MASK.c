
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ coord_shortaddr; int coord_hwaddr; int pan_id; } ;
struct mac802154_llsec {TYPE_1__ params; } ;
struct ieee802154_addr {scalar_t__ short_addr; int mode; int extended_addr; int pan_id; } ;
typedef scalar_t__ __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct mac802154_llsec *VAR_5,
         struct ieee802154_addr *VAR_6)
{
 __le16 VAR_7 = VAR_5->params.coord_shortaddr;

 VAR_6->pan_id = VAR_5->params.pan_id;

 if (VAR_7 == FUNC_0(VAR_1)) {
  return -VAR_0;
 } else if (VAR_7 == FUNC_0(VAR_4)) {
  VAR_6->extended_addr = VAR_5->params.coord_hwaddr;
  VAR_6->mode = VAR_2;
 } else {
  VAR_6->short_addr = VAR_5->params.coord_shortaddr;
  VAR_6->mode = VAR_3;
 }

 return 0;
}
