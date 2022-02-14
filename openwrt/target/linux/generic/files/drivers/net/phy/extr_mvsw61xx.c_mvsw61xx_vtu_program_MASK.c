
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct switch_dev {int vlans; } ;
struct mvsw61xx_state {TYPE_1__* vlans; } ;
struct TYPE_2__ {scalar_t__ mask; int vid; int port_based; int port_sstate; int port_mode; } ;


 int FUNC_0 (int ) ;
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
 struct mvsw61xx_state* FUNC_1 (struct switch_dev*) ;
 int FUNC_2 (struct switch_dev*,int ,int,int ) ;
 int FUNC_3 (struct switch_dev*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct switch_dev *VAR_12)
{
 struct mvsw61xx_state *VAR_13 = FUNC_1(VAR_12);
 u16 VAR_14, VAR_15, VAR_16, VAR_17;
 int VAR_18;


 FUNC_2(VAR_12, FUNC_0(VAR_9),
   VAR_0, 0);
 FUNC_3(VAR_12, FUNC_0(VAR_9),
   VAR_0 | VAR_2);


 for (VAR_18 = 1; VAR_18 < VAR_12->vlans; VAR_18++) {
  if (VAR_13->vlans[VAR_18].mask == 0 ||
    VAR_13->vlans[VAR_18].vid == 0 ||
    VAR_13->vlans[VAR_18].port_based == 1)
   continue;

  FUNC_2(VAR_12, FUNC_0(VAR_9),
    VAR_0, 0);


  VAR_16 = (u16) (VAR_13->vlans[VAR_18].port_sstate & 0xffff);
  VAR_17 = (u16) ((VAR_13->vlans[VAR_18].port_sstate >> 16) & 0xffff);

  FUNC_3(VAR_12, FUNC_0(VAR_11), VAR_4);
  FUNC_3(VAR_12, FUNC_0(VAR_10), VAR_18);
  FUNC_3(VAR_12, FUNC_0(VAR_5), VAR_16);
  FUNC_3(VAR_12, FUNC_0(VAR_6), VAR_17);
  FUNC_3(VAR_12, FUNC_0(VAR_7), 0);

  FUNC_3(VAR_12, FUNC_0(VAR_9),
    VAR_0 | VAR_3);
  FUNC_2(VAR_12, FUNC_0(VAR_9),
    VAR_0, 0);


  VAR_14 = (u16) (VAR_13->vlans[VAR_18].port_mode & 0xffff);
  VAR_15 = (u16) ((VAR_13->vlans[VAR_18].port_mode >> 16) & 0xffff);

  FUNC_3(VAR_12, FUNC_0(VAR_11),
    VAR_4 | VAR_13->vlans[VAR_18].vid);
  FUNC_3(VAR_12, FUNC_0(VAR_10), VAR_18);
  FUNC_3(VAR_12, FUNC_0(VAR_8), VAR_18);
  FUNC_3(VAR_12, FUNC_0(VAR_5), VAR_14);
  FUNC_3(VAR_12, FUNC_0(VAR_6), VAR_15);
  FUNC_3(VAR_12, FUNC_0(VAR_7), 0);

  FUNC_3(VAR_12, FUNC_0(VAR_9),
    VAR_0 | VAR_1);
  FUNC_2(VAR_12, FUNC_0(VAR_9),
    VAR_0, 0);
 }

 return 0;
}
