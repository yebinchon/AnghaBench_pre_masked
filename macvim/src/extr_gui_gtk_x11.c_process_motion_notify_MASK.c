
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int_u ;
typedef int guint32 ;
struct TYPE_6__ {TYPE_2__* drawarea; } ;
struct TYPE_4__ {int width; int height; } ;
struct TYPE_5__ {TYPE_1__ allocation; } ;
typedef int GdkModifierType ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char VAR_6 ;
 scalar_t__ FUNC_0 (int ,int ,int *) ;
 TYPE_3__ VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int,int,int ,int ) ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_5(int VAR_10, int VAR_11, GdkModifierType VAR_12)
{
    int VAR_13;
    int_u VAR_14;

    VAR_13 = (VAR_12 & (VAR_1 | VAR_2 |
         VAR_3 | VAR_4 |
         VAR_5))
       ? VAR_6 : ' ';


    FUNC_1(VAR_0);



    if (VAR_13 != VAR_6)
    {
 FUNC_2(VAR_10, VAR_11);
 return;
    }


    VAR_14 = FUNC_4(VAR_12);


    FUNC_3(VAR_13, VAR_10, VAR_11, VAR_0, VAR_14);




    if (VAR_10 < 0 || VAR_11 < 0
     || VAR_10 >= VAR_7.drawarea->allocation.width
     || VAR_11 >= VAR_7.drawarea->allocation.height)
    {

 int VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18 = 10;




 VAR_15 = VAR_10 < 0 ? -VAR_10 : VAR_10 - VAR_7.drawarea->allocation.width;
 VAR_16 = VAR_11 < 0 ? -VAR_11 : VAR_11 - VAR_7.drawarea->allocation.height;

 VAR_17 = VAR_15 > VAR_16 ? VAR_15 : VAR_16;
 if (VAR_17 > 127)
 {

     VAR_18 = 5;
 }
 else
 {
     VAR_18 = (130 * (127 - VAR_17)) / 127 + 5;
 }


 if (!VAR_8)
     VAR_8 = FUNC_0((guint32)VAR_18,
      VAR_9, ((void*)0));
    }
}
