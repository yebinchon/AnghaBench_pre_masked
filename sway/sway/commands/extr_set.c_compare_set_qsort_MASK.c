
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_variable {int name; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1) {
 struct sway_variable const *VAR_2 = *(void **)VAR_0;
 struct sway_variable const *VAR_3 = *(void **)VAR_1;
 return FUNC_0(VAR_3->name) - FUNC_0(VAR_2->name);
}
