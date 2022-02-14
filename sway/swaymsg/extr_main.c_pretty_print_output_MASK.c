
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int json_object ;


 int * FUNC_0 (int *,size_t) ;
 size_t FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 double FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 char* FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,char*,int **) ;
 int VAR_0 ;
 int FUNC_8 (char*,...) ;

__attribute__((used)) static void FUNC_9(json_object *VAR_1) {
 json_object *VAR_2, *VAR_3, *VAR_4, *VAR_5, *VAR_6, *VAR_7;
 FUNC_7(VAR_1, "name", &VAR_2);
 FUNC_7(VAR_1, "rect", &VAR_3);
 FUNC_7(VAR_1, "focused", &VAR_4);
 FUNC_7(VAR_1, "active", &VAR_5);
 FUNC_7(VAR_1, "current_workspace", &VAR_6);
 json_object *VAR_8, *VAR_9, *VAR_10, *VAR_11, *VAR_12, *VAR_13;
 FUNC_7(VAR_1, "make", &VAR_8);
 FUNC_7(VAR_1, "model", &VAR_9);
 FUNC_7(VAR_1, "serial", &VAR_10);
 FUNC_7(VAR_1, "scale", &VAR_11);
 FUNC_7(VAR_1, "subpixel_hinting", &VAR_12);
 FUNC_7(VAR_1, "transform", &VAR_13);
 json_object *VAR_14, *VAR_15;
 FUNC_7(VAR_3, "x", &VAR_14);
 FUNC_7(VAR_3, "y", &VAR_15);
 json_object *VAR_16;
 FUNC_7(VAR_1, "modes", &VAR_16);
 json_object *VAR_17, *VAR_18, *VAR_19;
 FUNC_7(VAR_1, "current_mode", &VAR_7);
 FUNC_7(VAR_7, "width", &VAR_17);
 FUNC_7(VAR_7, "height", &VAR_18);
 FUNC_7(VAR_7, "refresh", &VAR_19);

 if (FUNC_2(VAR_5)) {
  FUNC_8(
   "Output %s '%s %s %s'%s\n"
   "  Current mode: %dx%d @ %f Hz\n"
   "  Position: %d,%d\n"
   "  Scale factor: %f\n"
   "  Subpixel hinting: %s\n"
   "  Transform: %s\n"
   "  Workspace: %s\n",
   FUNC_5(VAR_2),
   FUNC_5(VAR_8),
   FUNC_5(VAR_9),
   FUNC_5(VAR_10),
   FUNC_2(VAR_4) ? " (focused)" : "",
   FUNC_4(VAR_17),
   FUNC_4(VAR_18),
   (float)FUNC_4(VAR_19) / 1000,
   FUNC_4(VAR_14), FUNC_4(VAR_15),
   FUNC_3(VAR_11),
   FUNC_5(VAR_12),
   FUNC_5(VAR_13),
   FUNC_5(VAR_6)
  );
 } else {
  FUNC_8(
   "Output %s '%s %s %s' (inactive)\n",
   FUNC_5(VAR_2),
   FUNC_5(VAR_8),
   FUNC_5(VAR_9),
   FUNC_5(VAR_10)
  );
 }

 size_t VAR_20 = FUNC_6(VAR_16, VAR_0)
  ? FUNC_1(VAR_16) : 0;
 if (VAR_20 > 0) {
  FUNC_8("  Available modes:\n");
  for (size_t VAR_21 = 0; VAR_21 < VAR_20; ++VAR_21) {
   json_object *VAR_22 = FUNC_0(VAR_16, VAR_21);

   json_object *VAR_23, *VAR_24, *VAR_25;
   FUNC_7(VAR_22, "width", &VAR_23);
   FUNC_7(VAR_22, "height", &VAR_24);
   FUNC_7(VAR_22, "refresh", &VAR_25);

   FUNC_8("    %dx%d @ %f Hz\n", FUNC_4(VAR_23),
    FUNC_4(VAR_24),
    (float)FUNC_4(VAR_25) / 1000);
  }
 }

 FUNC_8("\n");
}
