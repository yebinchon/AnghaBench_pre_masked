
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct mdev_state {int* vconfig; int nr_ports; int* bar_mask; } ;


 int FUNC_0 (int*,int) ;
 int FUNC_1 (char*,int,int) ;

__attribute__((used)) static void FUNC_2(struct mdev_state *VAR_0, u16 VAR_1,
     u8 *VAR_2, u32 VAR_3)
{
 u32 VAR_4, VAR_5, VAR_6 = 0;

 switch (VAR_1) {
 case 0x04:
 case 0x06:

  break;
 case 0x3c:
  VAR_0->vconfig[0x3c] = VAR_2[0];
  break;
 case 0x3d:




  break;
 case 0x10:
 case 0x14:
  if (VAR_1 == 0x10)
   VAR_6 = 0;
  else if (VAR_1 == 0x14)
   VAR_6 = 1;

  if ((VAR_0->nr_ports == 1) && (VAR_6 == 1)) {
   FUNC_0(&VAR_0->vconfig[VAR_1], 0);
   break;
  }

  VAR_4 = *(u32 *)VAR_2;
  FUNC_1("BAR%d addr 0x%x\n", VAR_6, VAR_4);

  if (VAR_4 == 0xffffffff) {
   VAR_5 = VAR_0->bar_mask[VAR_6];
   VAR_4 = (VAR_4 & VAR_5);
  }

  VAR_4 |= (VAR_0->vconfig[VAR_1] & 0x3ul);
  FUNC_0(&VAR_0->vconfig[VAR_1], VAR_4);
  break;
 case 0x18:
 case 0x1c:
 case 0x20:
  FUNC_0(&VAR_0->vconfig[VAR_1], 0);
  break;
 default:
  FUNC_1("PCI config write @0x%x of %d bytes not handled\n",
   VAR_1, VAR_3);
  break;
 }
}
