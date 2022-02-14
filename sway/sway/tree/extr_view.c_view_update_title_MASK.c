
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sway_view {TYPE_1__* container; } ;
struct TYPE_4__ {char* title; char* formatted_title; } ;


 char* FUNC_0 (size_t,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 size_t FUNC_6 (struct sway_view*,char*) ;
 scalar_t__ FUNC_7 (char const*,char*) ;
 char* FUNC_8 (char const*) ;
 int FUNC_9 (char*,char*) ;
 char* FUNC_10 (struct sway_view*) ;

void FUNC_11(struct sway_view *VAR_0, bool VAR_1) {
 const char *VAR_2 = FUNC_10(VAR_0);

 if (!VAR_1) {
  if (VAR_2 && VAR_0->container->title &&
    FUNC_7(VAR_2, VAR_0->container->title) == 0) {
   return;
  }
  if (!VAR_2 && !VAR_0->container->title) {
   return;
  }
 }

 FUNC_4(VAR_0->container->title);
 FUNC_4(VAR_0->container->formatted_title);
 if (VAR_2) {
  size_t VAR_3 = FUNC_6(VAR_0, ((void*)0));
  char *VAR_4 = FUNC_0(VAR_3 + 1, sizeof(char));
  if (!FUNC_9(VAR_4, "Unable to allocate title string")) {
   return;
  }
  FUNC_6(VAR_0, VAR_4);

  VAR_0->container->title = FUNC_8(VAR_2);
  VAR_0->container->formatted_title = VAR_4;
 } else {
  VAR_0->container->title = ((void*)0);
  VAR_0->container->formatted_title = ((void*)0);
 }
 FUNC_2(VAR_0->container);
 FUNC_1(0);


 FUNC_3(VAR_0->container);

 FUNC_5(VAR_0->container, "title");
}
