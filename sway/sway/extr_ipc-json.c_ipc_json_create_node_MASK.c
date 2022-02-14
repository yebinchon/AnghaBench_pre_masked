
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlr_box {int dummy; } ;
typedef int json_object ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ) ;
 int * FUNC_1 () ;
 int * FUNC_2 (struct wlr_box*) ;
 char* FUNC_3 (int ) ;
 char* FUNC_4 (int ) ;
 int * FUNC_5 () ;
 int * FUNC_6 (int) ;
 int * FUNC_7 (int) ;
 int * FUNC_8 () ;
 int * FUNC_9 (char*) ;
 int FUNC_10 (int *,char*,int *) ;

__attribute__((used)) static json_object *FUNC_11(int VAR_2, char *VAR_3,
  bool VAR_4, json_object *VAR_5, struct wlr_box *VAR_6) {
 json_object *VAR_7 = FUNC_8();

 FUNC_10(VAR_7, "id", FUNC_7(VAR_2));
 FUNC_10(VAR_7, "name",
   VAR_3 ? FUNC_9(VAR_3) : ((void*)0));
 FUNC_10(VAR_7, "rect", FUNC_2(VAR_6));
 FUNC_10(VAR_7, "focused", FUNC_6(VAR_4));
 FUNC_10(VAR_7, "focus", VAR_5);


 FUNC_10(VAR_7, "border",
   FUNC_9(
    FUNC_0(VAR_0)));
 FUNC_10(VAR_7, "current_border_width",
   FUNC_7(0));
 FUNC_10(VAR_7, "layout",
   FUNC_9(
    FUNC_3(VAR_1)));
 FUNC_10(VAR_7, "orientation",
   FUNC_9(
    FUNC_4(VAR_1)));
 FUNC_10(VAR_7, "percent", ((void*)0));
 FUNC_10(VAR_7, "window_rect", FUNC_1());
 FUNC_10(VAR_7, "deco_rect", FUNC_1());
 FUNC_10(VAR_7, "geometry", FUNC_1());
 FUNC_10(VAR_7, "window", ((void*)0));
 FUNC_10(VAR_7, "urgent", FUNC_6(0));
 FUNC_10(VAR_7, "floating_nodes", FUNC_5());
 FUNC_10(VAR_7, "sticky", FUNC_6(0));

 return VAR_7;
}
