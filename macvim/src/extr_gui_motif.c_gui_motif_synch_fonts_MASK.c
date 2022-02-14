
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int XmFontList ;
typedef int XFontStruct ;
struct TYPE_6__ {scalar_t__ norm_font; } ;
struct TYPE_5__ {int with; int what; scalar_t__ dialog; } ;
typedef TYPE_1__ SharedFindReplace ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,int *) ;
 TYPE_1__ VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_2 (int *) ;
 TYPE_1__ VAR_3 ;

void
FUNC_3(void)
{
    SharedFindReplace *VAR_4;
    int VAR_5;
    XFontStruct *VAR_6;
    XmFontList VAR_7;



    VAR_6 = (XFontStruct *)VAR_2.norm_font;
    if (VAR_6 == ((void*)0))
 return;

    VAR_7 = FUNC_2(VAR_6);


    for (VAR_5 = 0; VAR_5 <= 1; ++VAR_5)
    {
 VAR_4 = (VAR_5) ? (&VAR_3) : (&VAR_1);
 if (VAR_4->dialog)
 {
     FUNC_1(VAR_4->what, VAR_0, VAR_7, ((void*)0));
     if (VAR_5)
  FUNC_1(VAR_4->with, VAR_0, VAR_7, ((void*)0));
 }
    }

    FUNC_0(VAR_7);
}
