
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; int * items; } ;
typedef TYPE_1__ list_t ;


 char* FUNC_0 (char*,int ,int*,int*) ;

__attribute__((used)) static char *FUNC_1(list_t *VAR_0, char *VAR_1, int *VAR_2,
  int *VAR_3) {
 for (int VAR_4 = 0; VAR_4 < VAR_0->length; ++VAR_4) {
  char *VAR_5 = FUNC_0(VAR_1, VAR_0->items[VAR_4], VAR_2, VAR_3);
  if (VAR_5) {
   return VAR_5;
  }
 }
 return ((void*)0);
}
