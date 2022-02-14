
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long long VAR_2 ;
 int FUNC_0 (int,unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;
 int FUNC_1 (int ,int ,unsigned long long*) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;

void FUNC_2(void)
{
 unsigned int VAR_6, VAR_7, VAR_8, VAR_9;
 unsigned int VAR_10, VAR_11, VAR_12;

 FUNC_0(1, &VAR_10, &VAR_7, &VAR_8, &VAR_9);
 VAR_11 = (VAR_10 >> 8) & 0xf;
 VAR_12 = (VAR_10 >> 4) & 0xf;
 if (VAR_11 == 6 || VAR_11 == 0xf)
  VAR_12 += ((VAR_10 >> 16) & 0xf) << 4;

 if (VAR_12 == 0x4F) {
  unsigned long long VAR_13;

  FUNC_1(VAR_1, VAR_0, &VAR_13);

  VAR_2 = VAR_13 & 0xFF;
 }

 FUNC_0(0x6, &VAR_6, &VAR_7, &VAR_8, &VAR_9);
 VAR_5 = (VAR_6 >> 1) & 1;
 VAR_4 = (VAR_6 >> 7) & 1;
 VAR_3 = (VAR_8 >> 3) & 1;
}
