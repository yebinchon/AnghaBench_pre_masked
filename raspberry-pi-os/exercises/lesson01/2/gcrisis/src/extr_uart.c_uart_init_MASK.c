
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

void FUNC_3 (int VAR_8)
{
 unsigned int VAR_9;

 VAR_9 = FUNC_1(VAR_0);
 VAR_9 &= ~(7<<12);
 VAR_9 |= 4<<12;
 VAR_9 &= ~(7<<15);
 VAR_9 |= 4<<15;
 FUNC_2(VAR_0,VAR_9);

 FUNC_2(VAR_1,0);
 FUNC_0(150);
 FUNC_2(VAR_2,(1<<14)|(1<<15));
 FUNC_0(150);
 FUNC_2(VAR_2,0);

    FUNC_2(VAR_3,0);

    int VAR_10 = 3000000/VAR_8;
    int VAR_11 = (int)((3000000.0f/VAR_8 -VAR_10)*64.f + 0.5);

 FUNC_2(VAR_5,VAR_10);
 FUNC_2(VAR_4,VAR_11);
 FUNC_2(VAR_7,(3<<5));
    FUNC_2(VAR_6, 0);

 FUNC_2(VAR_3,(1<<8)|(1<<9)|1);
}
