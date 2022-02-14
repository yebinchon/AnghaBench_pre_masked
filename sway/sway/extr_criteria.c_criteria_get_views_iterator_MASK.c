
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_container {int view; } ;
struct match_data {int matches; int criteria; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct sway_container *VAR_0,
  void *VAR_1) {
 struct match_data *VAR_2 = VAR_1;
 if (VAR_0->view) {
  if (FUNC_0(VAR_2->criteria, VAR_0->view)) {
   FUNC_1(VAR_2->matches, VAR_0->view);
  }
 }
}
