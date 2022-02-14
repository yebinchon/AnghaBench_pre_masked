
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int guint ;
typedef scalar_t__ guicolor_T ;
typedef int char_u ;
struct TYPE_2__ {int char_width; int char_height; int toolbar_h; int menubar_h; int mainwin; int drawarea; int formwin; scalar_t__ def_back_pixel; scalar_t__ def_norm_pixel; int * geom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (char*,int*,int*,unsigned int*,unsigned int*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int * VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int * VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 () ;
 unsigned long FUNC_7 (int ,char*,int ,int *) ;
 int FUNC_8 (int ,unsigned long) ;
 char* FUNC_9 (char*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_10 (int,int ,int *) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (int ,char*,int ,int *) ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int,int) ;
 int FUNC_16 (int ,int,int) ;
 int FUNC_17 (int ,char*) ;
 TYPE_1__ VAR_23 ;
 int FUNC_18 () ;
 scalar_t__ FUNC_19 () ;
 scalar_t__ FUNC_20 () ;
 scalar_t__ FUNC_21 (int *) ;
 int FUNC_22 () ;
 int FUNC_23 (int*,int*) ;
 int FUNC_24 () ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_25 () ;
 int FUNC_26 () ;
 int VAR_26 ;
 int FUNC_27 () ;
 int VAR_27 ;
 scalar_t__ FUNC_28 () ;
 int FUNC_29 (int *) ;
 int VAR_28 ;
 int VAR_29 ;
 long VAR_30 ;
 char* VAR_31 ;
 int FUNC_30 () ;
 scalar_t__ FUNC_31 (int *) ;
 int VAR_32 ;
 int FUNC_32 (int,int) ;
 scalar_t__ VAR_33 ;
 int FUNC_33 (int *) ;
 int * FUNC_34 (int ,int ) ;

int
FUNC_35(void)
{
    guicolor_T VAR_34 = VAR_4;
    guicolor_T VAR_35 = VAR_4;
    guint VAR_36;
    guint VAR_37;






    if (VAR_31 != ((void*)0))
    {
 FUNC_17(FUNC_2(VAR_23.mainwin), VAR_31);
    }
    else
    {
 char *VAR_38;


 VAR_38 = FUNC_9("vim-%u-%u-%u",
          (unsigned)FUNC_28(),
          (unsigned)FUNC_6(),
          (unsigned)FUNC_31(((void*)0)));

 FUNC_17(FUNC_2(VAR_23.mainwin), VAR_38);
 FUNC_5(VAR_38);
    }

    if (VAR_24 != -1 && VAR_25 != -1)
 FUNC_15(FUNC_2(VAR_23.mainwin), VAR_24, VAR_25);


    if (VAR_23.geom != ((void*)0))
    {
 int VAR_39;
 unsigned int VAR_40, VAR_41;
 int VAR_42 = 0;
 int VAR_43 = 0;

 VAR_39 = FUNC_4((char *)VAR_23.geom, &VAR_42, &VAR_43, &VAR_40, &VAR_41);

 if (VAR_39 & VAR_9)
     VAR_0 = VAR_40;
 if (VAR_39 & VAR_3)
 {
     if (VAR_30 > (long)VAR_41 - 1 || !FUNC_29((char_u *)"window"))
  VAR_30 = VAR_41 - 1;
     VAR_6 = VAR_41;
 }
 FUNC_27();

 VAR_36 = (guint)(FUNC_20() + VAR_0 * VAR_23.char_width);
 VAR_37 = (guint)(FUNC_19() + VAR_6 * VAR_23.char_height);

 VAR_36 += FUNC_12();
 VAR_37 += FUNC_11();

 if (VAR_39 & (VAR_11 | VAR_13))
 {
     int VAR_44, VAR_45;
     FUNC_23(&VAR_44, &VAR_45);
     VAR_45 += VAR_28 + FUNC_11();
     VAR_44 += FUNC_12();
     if (VAR_39 & VAR_10)
  VAR_42 += VAR_44 - VAR_36;
     if (VAR_39 & VAR_12)
  VAR_43 += VAR_45 - VAR_37;
     FUNC_15(FUNC_2(VAR_23.mainwin), VAR_42, VAR_43);
 }
 FUNC_33(VAR_23.geom);
 VAR_23.geom = ((void*)0);






 if (VAR_21 != 0 && (VAR_39 & VAR_9 || VAR_39 & VAR_3))
 {
     FUNC_32(VAR_36, VAR_37);
     VAR_26 = 1;
     FUNC_10(1000, VAR_15, ((void*)0));
 }
    }

    VAR_36 = (guint)(FUNC_20() + VAR_0 * VAR_23.char_width);
    VAR_37 = (guint)(FUNC_19() + VAR_6 * VAR_23.char_height);


    if (VAR_21 == 0)
 FUNC_16(FUNC_2(VAR_23.mainwin), VAR_36, VAR_37);
    FUNC_32(0, 0);

    if (VAR_17 != ((void*)0))
 VAR_34 = FUNC_21((char_u *)VAR_17);
    if (VAR_34 == VAR_4)
 VAR_34 = FUNC_21((char_u *)"Black");

    if (VAR_14 != ((void*)0))
 VAR_35 = FUNC_21((char_u *)VAR_14);
    if (VAR_35 == VAR_4)
 VAR_35 = FUNC_21((char_u *)"White");

    if (VAR_20)
    {
 VAR_23.def_norm_pixel = VAR_35;
 VAR_23.def_back_pixel = VAR_34;
    }
    else
    {
 VAR_23.def_norm_pixel = VAR_34;
 VAR_23.def_back_pixel = VAR_35;
    }



    FUNC_30();


    FUNC_18();



    FUNC_26();

    FUNC_13(FUNC_0(VAR_23.mainwin), "destroy",
         FUNC_1(VAR_27), ((void*)0));
    FUNC_13(FUNC_0(VAR_23.formwin), "configure_event",
         FUNC_1(VAR_18), ((void*)0));
 if (VAR_19 && VAR_21 == 0)
     FUNC_24();

    {
 FUNC_14(VAR_23.mainwin);
    }

    return VAR_5;
}
