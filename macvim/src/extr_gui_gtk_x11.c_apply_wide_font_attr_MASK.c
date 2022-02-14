
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int char_u ;
struct TYPE_2__ {int wide_font; } ;
typedef int PangoAttrList ;


 int FUNC_0 (int ,int *,int,int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(char_u *VAR_1, int VAR_2, PangoAttrList *VAR_3)
{
    char_u *VAR_4 = ((void*)0);
    char_u *VAR_5;
    int VAR_6;

    for (VAR_5 = VAR_1; VAR_5 < VAR_1 + VAR_2; VAR_5 += FUNC_2(*VAR_5))
    {
 VAR_6 = FUNC_5(VAR_5);

 if (VAR_4 == ((void*)0))
 {
     if (VAR_6 >= 0x80 && FUNC_3(VAR_6) == 2)
  VAR_4 = VAR_5;
 }
 else if (VAR_6 < 0x80
   || (FUNC_3(VAR_6) != 2 && !FUNC_4(VAR_6)))
 {
     FUNC_0(FUNC_1(VAR_0.wide_font),
         VAR_3, VAR_4 - VAR_1, VAR_5 - VAR_1);
     VAR_4 = ((void*)0);
 }
    }

    if (VAR_4 != ((void*)0))
 FUNC_0(FUNC_1(VAR_0.wide_font),
     VAR_3, VAR_4 - VAR_1, VAR_2);
}
