
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ssp_device {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ssp_device*,int ) ;
 int FUNC_1 (struct ssp_device*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct ssp_device *VAR_2, u32 VAR_3)
{
 u32 VAR_4 = FUNC_0(VAR_2, VAR_1);

 if (VAR_2->type == VAR_0) {
  VAR_4 &= ~0x0000ff00;
  VAR_4 |= ((VAR_3 - 2)/2) << 8;
 } else {
  VAR_4 &= ~0x000fff00;
  VAR_4 |= (VAR_3 - 1) << 8;
 }
 FUNC_1(VAR_2, VAR_1, VAR_4);
}
