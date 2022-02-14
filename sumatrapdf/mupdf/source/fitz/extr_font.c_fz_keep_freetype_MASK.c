
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int ftlib_refs; scalar_t__ ftlib; int ftmemory; } ;
typedef TYPE_1__ fz_font_context ;
struct TYPE_9__ {TYPE_1__* font; } ;
typedef TYPE_2__ fz_context ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int*,int*,int*) ;
 int FUNC_3 (int *,scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_4 (int) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_2__*,int ,char*,...) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (TYPE_2__*,char*,char*) ;

__attribute__((used)) static void
FUNC_9(fz_context *VAR_2)
{
 int VAR_3;
 int VAR_4, VAR_5, VAR_6;
 fz_font_context *VAR_7 = VAR_2->font;

 FUNC_5(VAR_2, VAR_1);
 if (VAR_7->ftlib)
 {
  VAR_7->ftlib_refs++;
  FUNC_7(VAR_2, VAR_1);
  return;
 }

 VAR_3 = FUNC_3(&VAR_7->ftmemory, &VAR_7->ftlib);
 if (VAR_3)
 {
  const char *VAR_8 = FUNC_4(VAR_3);
  FUNC_7(VAR_2, VAR_1);
  FUNC_6(VAR_2, VAR_0, "cannot init freetype: %s", VAR_8);
 }

 FUNC_0(VAR_7->ftlib);

 FUNC_2(VAR_7->ftlib, &VAR_4, &VAR_5, &VAR_6);
 if (VAR_4 == 2 && VAR_5 == 1 && VAR_6 < 7)
 {
  VAR_3 = FUNC_1(VAR_7->ftlib);
  if (VAR_3)
   FUNC_8(VAR_2, "FT_Done_Library(): %s", FUNC_4(VAR_3));
  FUNC_7(VAR_2, VAR_1);
  FUNC_6(VAR_2, VAR_0, "freetype version too old: %d.%d.%d", VAR_4, VAR_5, VAR_6);
 }

 VAR_7->ftlib_refs++;
 FUNC_7(VAR_2, VAR_1);
}
