
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_cursor {int cursor; } ;
struct cmd_results {int dummy; } ;
struct TYPE_2__ {float width; float height; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cmd_results* FUNC_0 (int ,int *) ;
 int FUNC_1 (struct sway_cursor*) ;
 int * VAR_2 ;
 struct cmd_results* FUNC_2 (struct sway_cursor*,char*,char*) ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_3 (char*,char*) ;
 float FUNC_4 (char*,int *) ;
 int FUNC_5 (char*,int *,int) ;
 int FUNC_6 (int ,int *,int,int) ;
 int FUNC_7 (int ,int *,float,float) ;

__attribute__((used)) static struct cmd_results *FUNC_8(struct sway_cursor *VAR_4,
  int VAR_5, char **VAR_6) {
 if (FUNC_3(VAR_6[0], "move") == 0) {
  if (VAR_5 < 3) {
   return FUNC_0(VAR_0, VAR_2);
  }
  int VAR_7 = FUNC_5(VAR_6[1], ((void*)0), 10);
  int VAR_8 = FUNC_5(VAR_6[2], ((void*)0), 10);
  FUNC_6(VAR_4->cursor, ((void*)0), VAR_7, VAR_8);
  FUNC_1(VAR_4);
 } else if (FUNC_3(VAR_6[0], "set") == 0) {
  if (VAR_5 < 3) {
   return FUNC_0(VAR_0, VAR_2);
  }

  float VAR_9 = FUNC_4(VAR_6[1], ((void*)0)) / VAR_3->width;
  float VAR_10 = FUNC_4(VAR_6[2], ((void*)0)) / VAR_3->height;
  FUNC_7(VAR_4->cursor, ((void*)0), VAR_9, VAR_10);
  FUNC_1(VAR_4);
 } else {
  if (VAR_5 < 2) {
   return FUNC_0(VAR_0, VAR_2);
  }
  struct cmd_results *VAR_11 = ((void*)0);
  if ((VAR_11 = FUNC_2(VAR_4, VAR_6[0], VAR_6[1]))) {
   return VAR_11;
  }
 }

 return FUNC_0(VAR_1, ((void*)0));
}
