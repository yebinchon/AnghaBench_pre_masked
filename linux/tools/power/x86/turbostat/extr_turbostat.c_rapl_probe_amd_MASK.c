
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,char*,double,double) ;
 scalar_t__ FUNC_3 (int ,int ,unsigned long long*) ;
 double FUNC_4 (unsigned int) ;
 void* FUNC_5 (double,unsigned long long) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 double VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;

void FUNC_6(unsigned int VAR_17, unsigned int VAR_18)
{
 unsigned long long VAR_19;
 unsigned int VAR_20, VAR_21, VAR_22, VAR_23;
 unsigned int VAR_24 = 0;
 double VAR_25;

 if (VAR_9 >= 0x80000007) {
  FUNC_1(0x80000007, VAR_20, VAR_21, VAR_22, VAR_23);

  VAR_24 = VAR_23 & (1 << 14);
 }

 if (!VAR_24)
  return;

 switch (VAR_17) {
 case 0x17:
 case 0x18:
  VAR_8 = VAR_5 | VAR_6;
  if (VAR_14) {
   FUNC_0(VAR_3);
   FUNC_0(VAR_1);
  } else {
   FUNC_0(VAR_2);
   FUNC_0(VAR_0);
  }
  break;
 default:
  return;
 }

 if (FUNC_3(VAR_7, VAR_4, &VAR_19))
  return;

 VAR_16 = FUNC_5(1.0, -(VAR_19 >> 16 & 0xf));
 VAR_12 = FUNC_5(1.0, -(VAR_19 >> 8 & 0x1f));
 VAR_15 = FUNC_5(1.0, -(VAR_19 & 0xf));

 VAR_25 = FUNC_4(VAR_17);

 VAR_13 = 0xFFFFFFFF * VAR_12 / VAR_25;
 if (!VAR_11)
  FUNC_2(VAR_10, "RAPL: %.0f sec. Joule Counter Range, at %.0f Watts\n", VAR_13, VAR_25);
}
