
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_workspace {int * name; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static int FUNC_2(const void *VAR_0, const void *VAR_1) {
 struct sway_workspace *VAR_2 = *(void **)VAR_0;
 struct sway_workspace *VAR_3 = *(void **)VAR_1;

 if (FUNC_0(VAR_2->name[0]) && FUNC_0(VAR_3->name[0])) {
  int VAR_4 = FUNC_1(VAR_2->name, ((void*)0), 10);
  int VAR_5 = FUNC_1(VAR_3->name, ((void*)0), 10);
  return (VAR_4 < VAR_5) ? -1 : (VAR_4 > VAR_5);
 } else if (FUNC_0(VAR_2->name[0])) {
  return -1;
 } else if (FUNC_0(VAR_3->name[0])) {
  return 1;
 }
 return 0;
}
