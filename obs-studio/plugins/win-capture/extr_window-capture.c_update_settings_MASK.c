
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct window_capture {int priority; void* compatibility; void* use_wildcards; void* cursor; int * class; int * executable; int source; int * title; } ;
typedef int obs_data_t ;
typedef enum window_priority { ____Placeholder_window_priority } window_priority ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int *,...) ;
 int FUNC_2 (char const*,int **,int **,int **) ;
 void* FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int *,char*) ;
 char* FUNC_5 (int *,char*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct window_capture *VAR_2, obs_data_t *VAR_3)
{
 const char *VAR_4 = FUNC_5(VAR_3, "window");
 int VAR_5 = (int)FUNC_4(VAR_3, "priority");

 FUNC_0(VAR_2->title);
 FUNC_0(VAR_2->class);
 FUNC_0(VAR_2->executable);

 FUNC_2(VAR_4, &VAR_2->class, &VAR_2->title, &VAR_2->executable);

 if (VAR_2->title != ((void*)0)) {
  FUNC_1(VAR_1,
       "[window-capture: '%s'] update settings:\n"
       "\texecutable: %s",
       FUNC_6(VAR_2->source), VAR_2->executable);
  FUNC_1(VAR_0, "\tclass:      %s", VAR_2->class);
 }

 VAR_2->priority = (enum window_priority)VAR_5;
 VAR_2->cursor = FUNC_3(VAR_3, "cursor");
 VAR_2->use_wildcards = FUNC_3(VAR_3, "use_wildcards");
 VAR_2->compatibility = FUNC_3(VAR_3, "compatibility");
}
