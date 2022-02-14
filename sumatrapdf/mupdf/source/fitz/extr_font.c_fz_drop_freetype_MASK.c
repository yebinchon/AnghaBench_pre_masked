
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ ftlib_refs; int * ftlib; } ;
typedef TYPE_1__ fz_font_context ;
struct TYPE_8__ {TYPE_1__* font; } ;
typedef TYPE_2__ fz_context ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*,char*,int ) ;

__attribute__((used)) static void
FUNC_5(fz_context *VAR_1)
{
 int VAR_2;
 fz_font_context *VAR_3 = VAR_1->font;

 FUNC_2(VAR_1, VAR_0);
 if (--VAR_3->ftlib_refs == 0)
 {
  VAR_2 = FUNC_0(VAR_3->ftlib);
  if (VAR_2)
   FUNC_4(VAR_1, "FT_Done_Library(): %s", FUNC_1(VAR_2));
  VAR_3->ftlib = ((void*)0);
 }
 FUNC_3(VAR_1, VAR_0);
}
