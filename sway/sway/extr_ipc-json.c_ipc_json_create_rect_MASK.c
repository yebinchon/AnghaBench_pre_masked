
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlr_box {int height; int width; int y; int x; } ;
typedef int json_object ;


 int FUNC_0 (int ) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,char*,int ) ;

__attribute__((used)) static json_object *FUNC_3(struct wlr_box *VAR_0) {
 json_object *VAR_1 = FUNC_1();

 FUNC_2(VAR_1, "x", FUNC_0(VAR_0->x));
 FUNC_2(VAR_1, "y", FUNC_0(VAR_0->y));
 FUNC_2(VAR_1, "width", FUNC_0(VAR_0->width));
 FUNC_2(VAR_1, "height", FUNC_0(VAR_0->height));

 return VAR_1;
}
