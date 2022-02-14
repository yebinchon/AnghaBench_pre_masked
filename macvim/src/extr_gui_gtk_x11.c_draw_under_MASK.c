
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int text_gc; TYPE_1__* drawarea; int fgcolor; int spcolor; } ;
struct TYPE_3__ {int window; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int,int,int,int) ;
 int FUNC_3 (int ,int ,int,int) ;
 int FUNC_4 (int ,int ) ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_5(int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
    int VAR_8;
    int VAR_9;
    static const int VAR_10[8] = {1, 0, 0, 0, 1, 2, 2, 2 };
    int VAR_11 = FUNC_1(VAR_5 + 1) - 1;


    if (VAR_4 & VAR_0)
    {
 FUNC_4(VAR_2.text_gc, VAR_2.spcolor);
 for (VAR_8 = FUNC_0(VAR_6); VAR_8 < FUNC_0(VAR_6 + VAR_7); ++VAR_8)
 {
     VAR_9 = VAR_10[VAR_8 % 8];
     FUNC_3(VAR_2.drawarea->window, VAR_2.text_gc, VAR_8, VAR_11 - VAR_9);
 }
 FUNC_4(VAR_2.text_gc, VAR_2.fgcolor);
    }


    if (VAR_4 & VAR_1)
    {


 if (VAR_3 > 1)
     VAR_11 -= VAR_3 - 1;
 FUNC_2(VAR_2.drawarea->window, VAR_2.text_gc,
        FUNC_0(VAR_6), VAR_11,
        FUNC_0(VAR_6 + VAR_7) - 1, VAR_11);
    }
}
