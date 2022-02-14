
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_2__ {int flags; int name; } ;
typedef int STREAM ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static void
FUNC_12(STREAM VAR_22, uint32 VAR_23)
{
 int VAR_24 = 2 * FUNC_11(VAR_12);
 int VAR_25 = 162 + 76 + 12 + 4;
 unsigned int VAR_26;
 uint32 VAR_27 = 0;

 if (VAR_17 > 0)
  VAR_25 += VAR_17 * 12 + 8;

 if (VAR_24 > 30)
  VAR_24 = 30;


 FUNC_1(VAR_22, 5);
 FUNC_1(VAR_22, 0x14);
 FUNC_6(VAR_22, 0x7c);
 FUNC_1(VAR_22, 1);

 FUNC_1(VAR_22, (VAR_25 | 0x8000));

 FUNC_1(VAR_22, 8);
 FUNC_1(VAR_22, 16);
 FUNC_6(VAR_22, 0);
 FUNC_2(VAR_22, 0xc001);
 FUNC_6(VAR_22, 0);

 FUNC_5(VAR_22, 0x61637544);
 FUNC_1(VAR_22, ((VAR_25 - 14) | 0x8000));


 FUNC_2(VAR_22, VAR_7);
 FUNC_2(VAR_22, 216);
 FUNC_2(VAR_22, (VAR_18 >= VAR_0) ? 4 : 1);
 FUNC_2(VAR_22, 8);
 FUNC_2(VAR_22, VAR_21);
 FUNC_2(VAR_22, VAR_11);
 FUNC_2(VAR_22, 0xca01);
 FUNC_2(VAR_22, 0xaa03);
 FUNC_5(VAR_22, VAR_16);
 FUNC_5(VAR_22, 2600);


 FUNC_9(VAR_22, VAR_12, VAR_24);
 FUNC_8(VAR_22, 30 - VAR_24);



 FUNC_5(VAR_22, VAR_15);
 FUNC_5(VAR_22, VAR_14);
 FUNC_5(VAR_22, VAR_13);
 FUNC_8(VAR_22, 64);
 FUNC_2(VAR_22, 0xca01);
 FUNC_2(VAR_22, 1);

 FUNC_3(VAR_22, 0);
 FUNC_6(VAR_22, VAR_20);
 FUNC_2(VAR_22, 0x0700);
 FUNC_6(VAR_22, 0);
 FUNC_5(VAR_22, 1);
 FUNC_8(VAR_22, 64);
 FUNC_5(VAR_22, VAR_23);


 FUNC_2(VAR_22, VAR_5);
 FUNC_2(VAR_22, 12);

 VAR_27 |= VAR_1;
 VAR_27 |= (VAR_3 << 2);

 if (VAR_9 || VAR_19 != 0)
  VAR_27 |= VAR_2;

 FUNC_5(VAR_22, VAR_27);
 FUNC_3(VAR_22, VAR_19);


 FUNC_2(VAR_22, VAR_6);
 FUNC_2(VAR_22, 12);
 FUNC_5(VAR_22, VAR_10 ? 0x3 : 0);
 FUNC_3(VAR_22, 0);

 FUNC_0(("g_num_channels is %d\n", VAR_17));
 if (VAR_17 > 0)
 {
  FUNC_2(VAR_22, VAR_4);
  FUNC_2(VAR_22, VAR_17 * 12 + 8);
  FUNC_5(VAR_22, VAR_17);
  for (VAR_26 = 0; VAR_26 < VAR_17; VAR_26++)
  {
   FUNC_0(("Requesting channel %s\n", VAR_8[VAR_26].name));
   FUNC_7(VAR_22, VAR_8[VAR_26].name, 8);
   FUNC_4(VAR_22, VAR_8[VAR_26].flags);
  }
 }

 FUNC_10(VAR_22);
}
