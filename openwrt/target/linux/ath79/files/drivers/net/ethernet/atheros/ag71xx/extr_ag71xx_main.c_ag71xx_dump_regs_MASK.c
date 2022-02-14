
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ag71xx {TYPE_1__* dev; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (char*,int ,int ,int ,int ,...) ;
 int FUNC_1 (struct ag71xx*,int ) ;

__attribute__((used)) static void FUNC_2(struct ag71xx *VAR_14)
{
 FUNC_0("%s: mac_cfg1=%08x, mac_cfg2=%08x, ipg=%08x, hdx=%08x, mfl=%08x\n",
  VAR_14->dev->name,
  FUNC_1(VAR_14, VAR_8),
  FUNC_1(VAR_14, VAR_9),
  FUNC_1(VAR_14, VAR_12),
  FUNC_1(VAR_14, VAR_10),
  FUNC_1(VAR_14, VAR_13));
 FUNC_0("%s: mac_ifctl=%08x, mac_addr1=%08x, mac_addr2=%08x\n",
  VAR_14->dev->name,
  FUNC_1(VAR_14, VAR_11),
  FUNC_1(VAR_14, VAR_6),
  FUNC_1(VAR_14, VAR_7));
 FUNC_0("%s: fifo_cfg0=%08x, fifo_cfg1=%08x, fifo_cfg2=%08x\n",
  VAR_14->dev->name,
  FUNC_1(VAR_14, VAR_0),
  FUNC_1(VAR_14, VAR_1),
  FUNC_1(VAR_14, VAR_2));
 FUNC_0("%s: fifo_cfg3=%08x, fifo_cfg4=%08x, fifo_cfg5=%08x\n",
  VAR_14->dev->name,
  FUNC_1(VAR_14, VAR_3),
  FUNC_1(VAR_14, VAR_4),
  FUNC_1(VAR_14, VAR_5));
}
