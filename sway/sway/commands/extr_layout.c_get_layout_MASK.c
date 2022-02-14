
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_output {int dummy; } ;
typedef enum sway_container_layout { ____Placeholder_sway_container_layout } sway_container_layout ;


 int VAR_0 ;
 int FUNC_0 (int,char**,int,int,struct sway_output*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;

__attribute__((used)) static enum sway_container_layout FUNC_3(int VAR_1, char **VAR_2,
  enum sway_container_layout VAR_3,
  enum sway_container_layout VAR_4,
  struct sway_output *VAR_5) {

 enum sway_container_layout VAR_6 = FUNC_1(VAR_2[0]);
 if (VAR_6 != VAR_0) {
  return VAR_6;
 }

 if (FUNC_2(VAR_2[0], "default") == 0) {
  return VAR_4;
 }

 if (FUNC_2(VAR_2[0], "toggle") == 0) {
  return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 }

 return VAR_0;
}
