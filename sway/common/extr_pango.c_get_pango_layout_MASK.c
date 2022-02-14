
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int cairo_t ;
struct TYPE_4__ {int message; } ;
typedef int PangoLayout ;
typedef int PangoFontDescription ;
typedef int PangoAttrList ;
typedef TYPE_1__ GError ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (double) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (char const*) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,char const*,int) ;
 scalar_t__ FUNC_13 (char const*,int,int ,int **,char**,int *,TYPE_1__**) ;
 int FUNC_14 (int ,char*,char const*,int ) ;

PangoLayout *FUNC_15(cairo_t *VAR_1, const char *VAR_2,
  const char *VAR_3, double VAR_4, bool VAR_5) {
 PangoLayout *VAR_6 = FUNC_6(VAR_1);
 PangoAttrList *VAR_7;
 if (VAR_5) {
  char *VAR_8;
  GError *VAR_9 = ((void*)0);
  if (FUNC_13(VAR_3, -1, 0, &VAR_7, &VAR_8, ((void*)0), &VAR_9)) {
   FUNC_12(VAR_6, VAR_8, -1);
   FUNC_0(VAR_8);
  } else {
   FUNC_14(VAR_0, "pango_parse_markup '%s' -> error %s", VAR_3,
     VAR_9->message);
   FUNC_1(VAR_9);
   VAR_5 = 0;
  }
 }
 if (!VAR_5) {
  VAR_7 = FUNC_3();
  FUNC_12(VAR_6, VAR_3, -1);
 }

 FUNC_2(VAR_7, FUNC_5(VAR_4));
 PangoFontDescription *VAR_10 = FUNC_8(VAR_2);
 FUNC_10(VAR_6, VAR_10);
 FUNC_11(VAR_6, 1);
 FUNC_9(VAR_6, VAR_7);
 FUNC_4(VAR_7);
 FUNC_7(VAR_10);
 return VAR_6;
}
