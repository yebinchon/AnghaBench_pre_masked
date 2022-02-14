
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kirkwood_dma_data {scalar_t__ io; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct kirkwood_dma_data *VAR_6)
{
 unsigned long VAR_7;
 unsigned int VAR_8;



 FUNC_2(0xffffffff, VAR_6->io + VAR_0);
 FUNC_2(0, VAR_6->io + VAR_1);

 VAR_8 = FUNC_1(VAR_6->io + 0x1200);
 VAR_8 &= (~(0x333FF8));
 VAR_8 |= 0x111D18;
 FUNC_2(VAR_8, VAR_6->io + 0x1200);

 FUNC_0(500);

 VAR_8 = FUNC_1(VAR_6->io + 0x1200);
 VAR_8 &= (~(0x333FF8));
 VAR_8 |= 0x111D18;
 FUNC_2(VAR_8, VAR_6->io + 0x1200);


 VAR_7 = FUNC_1(VAR_6->io + VAR_2);
 VAR_7 &= ~VAR_3;
 FUNC_2(VAR_7, VAR_6->io + VAR_2);

 VAR_7 = FUNC_1(VAR_6->io + VAR_4);
 VAR_7 &= ~VAR_5;
 FUNC_2(VAR_7, VAR_6->io + VAR_4);

 return 0;

}
