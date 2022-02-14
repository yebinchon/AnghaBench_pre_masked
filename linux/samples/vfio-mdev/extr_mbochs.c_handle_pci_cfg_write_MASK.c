
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct mdev_state {int* bar_mask; int* vconfig; int mdev; } ;
struct device {int dummy; } ;




 int VAR_0 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (struct device*,char*,int,int) ;
 struct device* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct mdev_state *VAR_1, u16 VAR_2,
     char *VAR_3, u32 VAR_4)
{
 struct device *VAR_5 = FUNC_2(VAR_1->mdev);
 int VAR_6 = (VAR_2 - 129) / 0x04;
 u32 VAR_7;

 switch (VAR_2) {
 case 129:
 case 128:
  VAR_7 = *(u32 *)VAR_3;

  if (VAR_7 == 0xffffffff) {
   VAR_7 = (VAR_7 & VAR_1->bar_mask[VAR_6]);
  } else {
   VAR_7 &= VAR_0;
   if (VAR_7)
    FUNC_1(VAR_5, "BAR #%d @ 0x%x\n",
      VAR_6, VAR_7);
  }

  VAR_7 |= (VAR_1->vconfig[VAR_2] &
        ~VAR_0);
  FUNC_0(&VAR_1->vconfig[VAR_2], VAR_7);
  break;
 }
}
