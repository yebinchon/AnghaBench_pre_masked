
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct annotate_browser {int * search_bf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*,int *,char*,int) ;

__attribute__((used)) static bool FUNC_1(struct annotate_browser *VAR_1,
         int VAR_2)
{
 if (FUNC_0("Search", "String: ", VAR_1->search_bf,
         "ENTER: OK, ESC: Cancel",
         VAR_2 * 2) != VAR_0 ||
     !*VAR_1->search_bf)
  return 0;

 return 1;
}
