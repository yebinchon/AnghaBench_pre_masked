
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int,int,scalar_t__,scalar_t__,int ,int ,int,int) ;
 scalar_t__ FUNC_1 (int,int) ;
 size_t VAR_8 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int,int,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,int ,int ,int) ;
 int FUNC_9 (int,int,int ) ;
 scalar_t__ VAR_9 ;
 int FUNC_10 (float,int,size_t,char*) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int* VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;

void FUNC_11(void)
{
   int VAR_16 = VAR_12[VAR_8];
   float VAR_17 = 20;
   FUNC_5(VAR_2);
   FUNC_3(VAR_6, VAR_4);

   if (VAR_7)
      FUNC_4(0,0,0);
   else
      FUNC_4(1,1,1);


   FUNC_10(80, 30, VAR_16, "Controls:");
   FUNC_10(100, 60, VAR_16, "S: toggle font size");
   FUNC_10(100, 85, VAR_16, "O: toggle oversampling");
   FUNC_10(100,110, VAR_16, "T: toggle translation");
   FUNC_10(100,135, VAR_16, "R: toggle rotation");
   FUNC_10(100,160, VAR_16, "P: toggle pixel-snap (only non-oversampled)");
   FUNC_10(100,185, VAR_16, "G: toggle srgb gamma-correction");
   if (VAR_7)
      FUNC_10(100,210, VAR_16, "B: toggle to white-on-black");
   else
      FUNC_10(100,210, VAR_16, "B: toggle to black-on-white");
   FUNC_10(100,235, VAR_16, "V: view font texture");

   FUNC_10(80, 300, VAR_16, "Current font:");

   if (!VAR_13) {
      if (VAR_8 < 3)
         FUNC_10(100, 350, VAR_16, "Font height: 24 pixels");
      else
         FUNC_10(100, 350, VAR_16, "Font height: 14 pixels");
   }

   if (VAR_8%3==1)
      FUNC_10(100, 325, VAR_16, "2x2 oversampled text at 1:1");
   else if (VAR_8%3 == 2)
      FUNC_10(100, 325, VAR_16, "3x1 oversampled text at 1:1");
   else if (VAR_9)
      FUNC_10(100, 325, VAR_16, "1:1 text, one texel = one pixel, snapped to integer coordinates");
   else
      FUNC_10(100, 325, VAR_16, "1:1 text, one texel = one pixel");

   if (VAR_13) {
      FUNC_2(VAR_5);
      FUNC_0(200,400, 200+VAR_1,300+VAR_0, 0,0,1,1);
      FUNC_6();
   } else {
      FUNC_7(VAR_3);
      FUNC_9(200,350,0);

      if (VAR_15)
         VAR_17 += FUNC_1(VAR_14*8,30);

      if (VAR_11) {
         FUNC_9(100,150,0);
         FUNC_8(VAR_10*2,0,0,1);
         FUNC_9(-100,-150,0);
      }
      FUNC_10(VAR_17,100, VAR_8, "This is a test");
      FUNC_10(VAR_17,130, VAR_8, "Now is the time for all good men to come to the aid of their country.");
      FUNC_10(VAR_17,160, VAR_8, "The quick brown fox jumps over the lazy dog.");
      FUNC_10(VAR_17,190, VAR_8, "0123456789");
   }
}
