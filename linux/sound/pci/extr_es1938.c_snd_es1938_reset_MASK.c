
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct es1938 {TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct es1938*,int ) ;
 int VAR_9 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (struct es1938*,int ,int,int) ;
 int FUNC_5 (struct es1938*,int,int) ;
 int FUNC_6 (struct es1938*,int ,int) ;
 int FUNC_7 (struct es1938*,int ) ;

__attribute__((used)) static void FUNC_8(struct es1938 *VAR_10)
{
 int VAR_11;

 FUNC_3(3, FUNC_0(VAR_10, VAR_7));
 FUNC_2(FUNC_0(VAR_10, VAR_7));
 FUNC_3(0, FUNC_0(VAR_10, VAR_7));
 for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
  if (FUNC_2(FUNC_0(VAR_10, VAR_9)) & 0x80) {
   if (FUNC_2(FUNC_0(VAR_10, VAR_6)) == 0xaa)
    goto __next;
  }
 }
 FUNC_1(VAR_10->card->dev, "ESS Solo-1 reset failed\n");

     __next:
 FUNC_7(VAR_10, VAR_4);


 FUNC_6(VAR_10, VAR_1, 2);




 FUNC_5(VAR_10, VAR_0, 0x32);

 FUNC_4(VAR_10, VAR_5, 0xf0, 0x50);
 FUNC_4(VAR_10, VAR_2, 0xf0, 0x50);
 FUNC_7(VAR_10, VAR_3);

 FUNC_5(VAR_10, 0x54, 0x8f);
 FUNC_5(VAR_10, 0x56, 0x95);
 FUNC_5(VAR_10, 0x58, 0x94);
 FUNC_5(VAR_10, 0x5a, 0x80);
}
