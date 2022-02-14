
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_workspace {int node; } ;
typedef int json_object ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (char const*,int ) ;
 int * FUNC_3 () ;
 int * FUNC_4 (char const*) ;
 int FUNC_5 (int *,char*,int *) ;
 int FUNC_6 (int *) ;
 char* FUNC_7 (int *) ;
 int FUNC_8 (int ,char*,char const*) ;

void FUNC_9(struct sway_workspace *VAR_2,
  struct sway_workspace *VAR_3, const char *VAR_4) {
 if (!FUNC_0(VAR_0)) {
  return;
 }
 FUNC_8(VAR_1, "Sending workspace::%s event", VAR_4);
 json_object *VAR_5 = FUNC_3();
 FUNC_5(VAR_5, "change", FUNC_4(VAR_4));
 if (VAR_2) {
  FUNC_5(VAR_5, "old",
    FUNC_1(&VAR_2->node));
 } else {
  FUNC_5(VAR_5, "old", ((void*)0));
 }

 if (VAR_3) {
  FUNC_5(VAR_5, "current",
    FUNC_1(&VAR_3->node));
 } else {
  FUNC_5(VAR_5, "current", ((void*)0));
 }

 const char *VAR_6 = FUNC_7(VAR_5);
 FUNC_2(VAR_6, VAR_0);
 FUNC_6(VAR_5);
}
