
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlr_output {char* make; char* model; char* serial; } ;
struct sway_output {struct wlr_output* wlr_output; } ;


 int FUNC_0 (char*,size_t,char*,char*,char*,char*) ;

void FUNC_1(char *VAR_0, size_t VAR_1,
  struct sway_output *VAR_2) {
 struct wlr_output *VAR_3 = VAR_2->wlr_output;
 FUNC_0(VAR_0, VAR_1, "%s %s %s", VAR_3->make, VAR_3->model,
  VAR_3->serial);
}
