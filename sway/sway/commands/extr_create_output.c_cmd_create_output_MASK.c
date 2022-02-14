
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cmd_results {int dummy; } ;
struct TYPE_2__ {int backend; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cmd_results* FUNC_0 (int ,char*) ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int*) ;

struct cmd_results *FUNC_4(int VAR_4, char **VAR_5) {
 FUNC_1(FUNC_2(VAR_3.backend),
   "Expected a multi backend");

 bool VAR_6 = 0;
 FUNC_3(VAR_3.backend, VAR_2, &VAR_6);

 if (!VAR_6) {
  return FUNC_0(VAR_0,
    "Can only create outputs for Wayland or X11 backends");
 }

 return FUNC_0(VAR_1, ((void*)0));
}
