
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int char_height; int char_width; int mainwin; } ;
struct TYPE_4__ {int width_inc; int height_inc; int base_width; int base_height; int min_width; int min_height; } ;
typedef int GdkWindowHints ;
typedef TYPE_1__ GdkGeometry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,int ,TYPE_1__*,int) ;
 TYPE_2__ VAR_5 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_6 ;
 int FUNC_6 () ;

__attribute__((used)) static void
FUNC_7(int VAR_7, int VAR_8)
{
    static int VAR_9 = 0;
    static int VAR_10 = 0;
    static int VAR_11 = 0;
    static int VAR_12 = 0;
    static int VAR_13 = 0;
    static int VAR_14 = 0;

    int VAR_15;
    int VAR_16;
    int VAR_17;
    int VAR_18;





    if (!(VAR_7 && VAR_8) && VAR_6 > 0)
    {

 VAR_6 = 2;
 return;
    }



    VAR_15 = FUNC_5();
    VAR_16 = FUNC_4();



    VAR_15 += FUNC_2();
    VAR_16 += FUNC_1();







    if (VAR_7 && VAR_8)
    {
 VAR_17 = VAR_7;
 VAR_18 = VAR_8;
    }
    else
    {
 VAR_17 = VAR_15 + VAR_3 * VAR_5.char_width;
 VAR_18 = VAR_16 + VAR_4 * VAR_5.char_height;
    }


    if (VAR_15 != VAR_9
     || VAR_16 != VAR_10
     || VAR_17 != VAR_11
     || VAR_18 != VAR_12
     || VAR_5.char_width != VAR_13
     || VAR_5.char_height != VAR_14)
    {
 GdkGeometry VAR_19;
 GdkWindowHints VAR_20;

 VAR_19.width_inc = VAR_5.char_width;
 VAR_19.height_inc = VAR_5.char_height;
 VAR_19.base_width = VAR_15;
 VAR_19.base_height = VAR_16;
 VAR_19.min_width = VAR_17;
 VAR_19.min_height = VAR_18;
 VAR_20 = VAR_0|VAR_2
          |VAR_1;



 FUNC_3(FUNC_0(VAR_5.mainwin), VAR_5.mainwin,
          &VAR_19, VAR_20);
 VAR_9 = VAR_15;
 VAR_10 = VAR_16;
 VAR_11 = VAR_17;
 VAR_12 = VAR_18;
 VAR_13 = VAR_5.char_width;
 VAR_14 = VAR_5.char_height;
    }
}
