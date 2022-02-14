
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_output {int dummy; } ;
struct sway_container {int view; } ;


 int VAR_0 ;
 int FUNC_0 (struct sway_output*,int ,int ,int*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct sway_container *VAR_1,
  void *VAR_2) {
 if (!VAR_1->view || !FUNC_1(VAR_1->view)) {
  return;
 }
 struct sway_output *VAR_3 = VAR_2;
 bool VAR_4 = 1;
 FUNC_0(VAR_3, VAR_1->view, VAR_0,
   &VAR_4);
}
