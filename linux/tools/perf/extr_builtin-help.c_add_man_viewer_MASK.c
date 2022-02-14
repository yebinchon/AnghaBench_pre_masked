
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct man_viewer_list {int name; struct man_viewer_list* next; } ;


 struct man_viewer_list* VAR_0 ;
 int FUNC_0 (int ,char const*) ;
 size_t FUNC_1 (char const*) ;
 struct man_viewer_list* FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(const char *VAR_1)
{
 struct man_viewer_list **VAR_2 = &VAR_0;
 size_t VAR_3 = FUNC_1(VAR_1);

 while (*VAR_2)
  VAR_2 = &((*VAR_2)->next);
 *VAR_2 = FUNC_2(sizeof(**VAR_2) + VAR_3 + 1);
 FUNC_0((*VAR_2)->name, VAR_1);
}
