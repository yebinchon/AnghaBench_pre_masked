
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_workspace {int output; int node; } ;
struct sway_seat {int dummy; } ;
typedef int json_object ;


 struct sway_seat* FUNC_0 () ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int *,char*) ;
 struct sway_workspace* FUNC_6 (int ) ;
 struct sway_workspace* FUNC_7 (struct sway_seat*) ;

__attribute__((used)) static void FUNC_8(struct sway_workspace *VAR_0,
  void *VAR_1) {
 json_object *VAR_2 = FUNC_1(&VAR_0->node);


 struct sway_seat *VAR_3 = FUNC_0();
 struct sway_workspace *VAR_4 = FUNC_7(VAR_3);
 bool VAR_5 = VAR_0 == VAR_4;
 FUNC_5(VAR_2, "focused");
 FUNC_4(VAR_2, "focused",
   FUNC_3(VAR_5));
 FUNC_2((json_object *)VAR_1, VAR_2);

 VAR_4 = FUNC_6(VAR_0->output);
 bool VAR_6 = VAR_0 == VAR_4;
 FUNC_4(VAR_2, "visible",
   FUNC_3(VAR_6));
}
