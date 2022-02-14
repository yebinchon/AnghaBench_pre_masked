
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct esschan {int* apu; int* apu_mode; unsigned int* base; } ;
struct TYPE_2__ {scalar_t__ addr; } ;
struct es1968 {TYPE_1__ dma; } ;


 int FUNC_0 (struct es1968*,int,int,int) ;
 int FUNC_1 (struct es1968*,struct esschan*,int,unsigned int,int) ;

__attribute__((used)) static void FUNC_2(struct es1968 *VAR_0, struct esschan *VAR_1, int VAR_2,
        unsigned int VAR_3, unsigned int VAR_4,
        int VAR_5, int VAR_6)
{
 int VAR_7, VAR_8 = VAR_1->apu[VAR_2];

 VAR_1->apu_mode[VAR_2] = VAR_5;


 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, 1);


 VAR_3 -= VAR_0->dma.addr;
 VAR_3 >>= 1;



 VAR_1->base[VAR_2] = VAR_3 & 0xFFFF;
 VAR_3 |= 0x00400000;


 for (VAR_7 = 0; VAR_7 < 16; VAR_7++)
  FUNC_0(VAR_0, VAR_8, VAR_7, 0x0000);



 FUNC_0(VAR_0, VAR_8, 2, 0x8);


 FUNC_0(VAR_0, VAR_8, 4, ((VAR_3 >> 16) & 0xFF) << 8);
 FUNC_0(VAR_0, VAR_8, 5, VAR_3 & 0xFFFF);
 FUNC_0(VAR_0, VAR_8, 6, (VAR_3 + VAR_4) & 0xFFFF);
 FUNC_0(VAR_0, VAR_8, 7, VAR_4);

 FUNC_0(VAR_0, VAR_8, 8, 0x00F0);

 FUNC_0(VAR_0, VAR_8, 9, 0x0000);

 FUNC_0(VAR_0, VAR_8, 10, 0x8F08);

 FUNC_0(VAR_0, VAR_8, 11, VAR_6);

 FUNC_0(VAR_0, VAR_8, 0, 0x400F);
}
