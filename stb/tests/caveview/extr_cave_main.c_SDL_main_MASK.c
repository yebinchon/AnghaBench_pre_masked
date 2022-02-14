
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SDL_Event ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (char*,int ,int ,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ,int ) ;
 int VAR_10 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_10 () ;
 int FUNC_11 (char*) ;
 int FUNC_12 (float) ;
 int FUNC_13 (int ,int *) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_14 (int ,int,int) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 (int *) ;
 int VAR_20 ;
 int FUNC_18 () ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_19 () ;
 int VAR_23 ;
 int FUNC_20 () ;

int FUNC_21(int VAR_24, char **VAR_25)
{
   FUNC_6(VAR_12);

   FUNC_16();

   FUNC_4(VAR_10 , 8);
   FUNC_4(VAR_8, 8);
   FUNC_4(VAR_0 , 8);
   FUNC_4(VAR_7, 24);

   FUNC_4(VAR_6, VAR_5);
   FUNC_4(VAR_3, 3);
   FUNC_4(VAR_4, 1);





   FUNC_4(VAR_9, 4);

   VAR_21 = 1920;
   VAR_22 = 1080;

   VAR_23 = FUNC_1("caveview", VAR_14, VAR_14,
                                   VAR_21, VAR_22,
                                   VAR_15 | VAR_16
                             );
   if (!VAR_23) FUNC_11("Couldn't create window");

   VAR_17 = FUNC_2(VAR_23);
   if (!VAR_17) FUNC_11("Couldn't create context");

   FUNC_3(VAR_23, VAR_17);

   FUNC_9(VAR_13);






   FUNC_19();
   FUNC_5(1);

   FUNC_18();
   FUNC_15();
   FUNC_20();

   VAR_19 = 1;

   while (!VAR_20) {
      SDL_Event VAR_26;
      while (FUNC_7(&VAR_26))
         FUNC_17(&VAR_26);

      FUNC_14(FUNC_12(0.0166f/8), 1, 1);
   }

   return 0;
}
