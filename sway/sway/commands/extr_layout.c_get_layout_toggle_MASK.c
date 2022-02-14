
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_output {int dummy; } ;
typedef enum sway_container_layout { ____Placeholder_sway_container_layout } sway_container_layout ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (int,int,struct sway_output*) ;

__attribute__((used)) static enum sway_container_layout FUNC_4(int VAR_5, char **VAR_6,
  enum sway_container_layout VAR_7,
  enum sway_container_layout VAR_8,
  struct sway_output *VAR_9) {

 if (VAR_5 == 1) {
  return FUNC_3(VAR_7, VAR_8, VAR_9);
 }

 if (VAR_5 == 2) {

  if (FUNC_1(VAR_6[1], "split") == 0) {
   return FUNC_3(VAR_7, VAR_8, VAR_9);
  }

  if (FUNC_1(VAR_6[1], "all") == 0) {
   return VAR_7 == VAR_0 ? VAR_4 :
    VAR_7 == VAR_4 ? VAR_2 :
    VAR_7 == VAR_2 ? VAR_3 : VAR_0;
  }
  return VAR_1;
 }

 enum sway_container_layout VAR_10;
 int VAR_11 = 1;
 for (; VAR_11 < VAR_5; VAR_11++) {
  VAR_10 = FUNC_0(VAR_6[VAR_11]);
  if (VAR_10 == VAR_7 || (FUNC_2(VAR_6[VAR_11], "split") == 0 &&
     (VAR_7 == VAR_4 || VAR_7 == VAR_0))) {
   break;
  }
 }
 for (int VAR_12 = VAR_11 + 1; VAR_12 != VAR_11; ++VAR_12) {

  if (VAR_12 >= VAR_5) {
   VAR_12 = 1;
  }
  VAR_10 = FUNC_0(VAR_6[VAR_12]);
  if (VAR_10 != VAR_1) {
   return VAR_10;
  }
  if (FUNC_2(VAR_6[VAR_12], "split") == 0) {
   return FUNC_3(VAR_7, VAR_8, VAR_9);
  }

 }
 return VAR_1;
}
