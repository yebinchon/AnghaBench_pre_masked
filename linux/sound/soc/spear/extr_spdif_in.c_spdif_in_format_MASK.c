
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spdif_in_dev {scalar_t__ io_base; } ;




 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct spdif_in_dev *VAR_2, u32 VAR_3)
{
 u32 VAR_4 = FUNC_0(VAR_2->io_base + VAR_0);

 switch (VAR_3) {
 case 128:
  VAR_4 |= VAR_1;
  break;

 case 129:
  VAR_4 &= ~VAR_1;
  break;
 }

 FUNC_1(VAR_4, VAR_2->io_base + VAR_0);
}
