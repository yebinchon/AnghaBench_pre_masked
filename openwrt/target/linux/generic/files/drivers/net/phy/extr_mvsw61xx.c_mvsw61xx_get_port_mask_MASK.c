
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {char* s; } ;
struct switch_val {int port_vlan; TYPE_1__ value; } ;
struct switch_dev {int dummy; } ;
struct switch_attr {int dummy; } ;
struct mvsw61xx_state {char* buf; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mvsw61xx_state* FUNC_1 (struct switch_dev*) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (struct switch_dev*,int ) ;

__attribute__((used)) static int
FUNC_4(struct switch_dev *VAR_3,
  const struct switch_attr *VAR_4, struct switch_val *VAR_5)
{
 struct mvsw61xx_state *VAR_6 = FUNC_1(VAR_3);
 char *VAR_7 = VAR_6->buf;
 int VAR_8, VAR_9, VAR_10;
 u16 VAR_11;

 VAR_8 = VAR_5->port_vlan;
 VAR_11 = FUNC_3(VAR_3, FUNC_0(VAR_2, VAR_8)) & VAR_1;

 VAR_9 = FUNC_2(VAR_7, "0x%04x: ", VAR_11);

 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
  if (VAR_11 & (1 << VAR_10))
   VAR_9 += FUNC_2(VAR_7 + VAR_9, "%d ", VAR_10);
  else if (VAR_10 == VAR_8)
   VAR_9 += FUNC_2(VAR_7 + VAR_9, "(%d) ", VAR_10);
 }

 VAR_5->value.s = VAR_7;

 return 0;
}
